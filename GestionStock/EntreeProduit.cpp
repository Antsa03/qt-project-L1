#include "EntreeProduit.h"
#include "MiseAJour.h"

EntreeProduit::EntreeProduit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connexionBD();
}

EntreeProduit::~EntreeProduit()
{}

void EntreeProduit::on_btnRetour_clicked()
{
	MiseAJour* fenetre_MaJ = new MiseAJour;
	fenetre_MaJ->show();
	this->close();
}

void EntreeProduit::on_btnMaJ_clicked()
{

    QString NumProduit = ui.leNumProduit->text();
    QString NumBonEntree = ui.leNumBonEntree->text();
    int QteEntree = ui.leQteEntree->text().toInt();
    QDate DateEntree = ui.deDateEntree->date();

    QSqlQuery prod;
    prod.prepare("insert into bonentree (NumBonEntree, DateEntree) value(:NumBonEntree, :DateEntree)");
    prod.bindValue(":NumBonEntree", NumBonEntree);
    prod.bindValue(":DateEntree", DateEntree);
    if (prod.exec()) 
    {
        QSqlQuery requete;
        requete.prepare("insert into entree (NumProduit, NumBonEntree, QteEntree) value(:NumProduit, :NumBonEntree, :QteEntree)");
        requete.bindValue(":NumProduit", NumProduit);
        requete.bindValue(":NumBonEntree", NumBonEntree);
        requete.bindValue(":QteEntree", QteEntree);
        if (requete.exec())
        {
            //Récupération des donnés dans la base de donné
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
                    QString strStock = query.value(2).toString();
                    int Stock = query.value(2).toInt();
                    int StockFinal = Stock + QteEntree;
                    QString strStockFinal = "";
                    strStockFinal = QString::number(StockFinal);

                    if (NumProduitFromDB == NumProduit)
                    {
                        ui.lbDesign->setText(DesignFromDB);
                        ui.lbStockInitial->setText(strStock);
                        ui.lbStockFinal->setText(strStockFinal);
                    }
                    //Mise du stock de produit
                    QSqlQuery MaJ;
                    MaJ.prepare("UPDATE produit SET Stock = :stk  WHERE NumProduit = :num");
                    MaJ.bindValue(":stk", StockFinal);
                    MaJ.bindValue(":num", NumProduit);
                    MaJ.exec();
                }

                if (!query.first())
                    QMessageBox::information(this, "Failed", "Produit inexistant");
            }
            QMessageBox::information(this, "Inserted", "Database Inserted Successfully");
        }
    }
    else
        QMessageBox::information(this, "Not Inserted", "Database Not Inserted Successfully");
}

void EntreeProduit::on_btnSuivant_clicked()
{
    ui.leNumProduit->setText("");
    ui.leNumBonEntree->setText("");
    ui.leQteEntree->setText("");
    ui.lbDesign->setText("");
    ui.lbStockInitial->setText("");
    ui.lbStockFinal->setText("");
}