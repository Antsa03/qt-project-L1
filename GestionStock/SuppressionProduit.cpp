#include "SuppressionProduit.h"


SuppressionProduit::SuppressionProduit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    connexionBD();
}

SuppressionProduit::~SuppressionProduit()
{}

void SuppressionProduit::on_btnRetour_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}

void SuppressionProduit::on_btnRecherche_clicked()
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

void SuppressionProduit::on_btnSuppr_clicked()
{

    QString NumProduit = ui.leRecherche->text();
    QSqlQuery requetedel;
    requetedel.prepare("DELETE FROM produit WHERE NumProduit = '" + NumProduit + "'");
    if (requetedel.exec())
        QMessageBox::information(this, "Success", "Produit supprime");
    else
        QMessageBox::information(this, "Not Success", "Aucune action executee");

}