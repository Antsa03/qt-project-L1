#include "ModificationProduit.h"
#include "MenuPrincipal.h"

ModificationProduit::ModificationProduit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connexionBD();
}

ModificationProduit::~ModificationProduit()
{}

void ModificationProduit::on_btnRetour_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}

void ModificationProduit::on_btnRecherche_clicked()
{
    QString NumProduit = ui.leRecherche->text();

    QSqlQuery query(QSqlDatabase::database("gestion_stock"));
    query.prepare(QString("SELECT * FROM produit WHERE NumProduit = '" + NumProduit + "'"));

    if (!query.exec())
        QMessageBox::information(this, "Failed", "Query failed to execute");
    else
    {
        while (query.next())
        {
            QString NumProduitFromDB = query.value(0).toString();
            QString DesignFromDB = query.value(1).toString();

            if (NumProduitFromDB == NumProduit)
            {
                QMessageBox::information(this, "Success", "Produit trouvee");
                ui.lbNumProduit->setText(NumProduitFromDB);
                ui.lbNomProduit->setText(DesignFromDB);
            }

        }

        if (!query.first())
            QMessageBox::information(this, "Failed", "Produit non trouvee");
    }
}

void ModificationProduit::on_btnValider_clicked()
{
    QString NumProduit = ui.leRecherche->text();
    QString NomProduit = ui.leNouvProduit->text();
    QSqlQuery requeteModif;
    requeteModif.prepare("UPDATE produit SET Design = '" + NomProduit + "' WHERE NumProduit = '" + NumProduit + "'");
    if (requeteModif.exec())
        QMessageBox::information(this, "Success", "Modification avec succes");
    else
        QMessageBox::information(this, "Not Success", "Aucune modification");
}

void ModificationProduit::on_btnSuivant_clicked()
{

    ui.leRecherche->setText("");
    ui.lbNomProduit->setText("");
    ui.lbNumProduit->setText("");
    ui.leNouvProduit->setText("");

}
