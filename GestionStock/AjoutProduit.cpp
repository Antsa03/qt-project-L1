#include "AjoutProduit.h"


AjoutProduit::AjoutProduit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    connexionBD();
}

AjoutProduit::~AjoutProduit()
{}

void AjoutProduit::on_btnRetour_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}

void AjoutProduit::on_btnRechercher_clicked()
{
	QString NumProduit = ui.leNumProduit->text();
	QString Design = ui.leNomProduit->text();
	int stock = ui.leNbrStock->text().toInt();

    QSqlQuery query(QSqlDatabase::database("gestion_stock"));
    query.prepare(QString("SELECT * FROM produit WHERE NumProduit = '"+NumProduit+"' AND Design = '"+Design+"'"));

    if (!query.exec())
        QMessageBox::information(this, "Failed", "Query failed to execute");
    else
    {
        while (query.next())
        {
            QString NumProduitFromDB = query.value(0).toString();
            QString DesignFromDB = query.value(1).toString();

            if(NumProduitFromDB == NumProduit && DesignFromDB == Design)
                QMessageBox::information(this, "Success", "Produit deja saisie");
        }

        if (!query.first())
            QMessageBox::information(this, "Failed", "Produit non trouvee");
    }
}

void AjoutProduit::on_btnAjout_clicked()
{

        QString NumProduit = ui.leNumProduit->text();
        QString Design = ui.leNomProduit->text();
        int Stock = ui.leNbrStock->text().toInt();
        if (Stock > 0)
        {
            QSqlQuery prod;
            prod.prepare("insert into produit (NumProduit, Design, stock) value(:NumProduit, :Design, :stock)");
            prod.bindValue(":NumProduit", NumProduit);
            prod.bindValue(":Design", Design);
            prod.bindValue(":stock", Stock);

            if (prod.exec())
                QMessageBox::information(this, "Inserted", "Database Inserted Successfully");
            else
                QMessageBox::information(this, "Not Insterted", "Data Is Not Inserted");
        }
        else
            QMessageBox::information(this, "Info", "Veuillez remplir correctement");
}

void AjoutProduit::on_btnSuivant_clicked()
{
    ui.leNumProduit->setText("");
    ui.leNomProduit->setText("");
    ui.leNbrStock->setText("");
}