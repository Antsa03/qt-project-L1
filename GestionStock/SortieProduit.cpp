#include "SortieProduit.h"

SortieProduit::SortieProduit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    connexionBD();
}

SortieProduit::~SortieProduit()
{}

void SortieProduit::on_btnRetour_clicked()
{
	MiseAJour* fenetre_MaJ = new MiseAJour;
	fenetre_MaJ->show();
	this->close();
}

void SortieProduit::on_btnMaJ_clicked()
{

    QString NumProduit = ui.leNumProduit->text();
    QString NumBonSortie = ui.leNumBonSortie->text();
    int QteSortie = ui.leQteSortie->text().toInt();
    QDate DateSortie = ui.deDateSortie->date();

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

            if (Stock >= QteSortie)
            {
                
                if (NumProduitFromDB == NumProduit)
                {
                    QSqlQuery prod;
                    prod.prepare("insert into bonsortie (NumBonSortie, DateSortie) value(:NumBonSortie, :DateSortie)");
                    prod.bindValue(":NumBonSortie", NumBonSortie);
                    prod.bindValue(":DateSortie", DateSortie);
                    if (prod.exec()) {
                        QSqlQuery requete;
                        requete.prepare("insert into sortie (NumProduit, NumBonSortie, QteSortie) value(:NumProduit, :NumBonSortie, :QteSortie)");
                        requete.bindValue(":NumProduit", NumProduit);
                        requete.bindValue(":NumBonSortie", NumBonSortie);
                        requete.bindValue(":QteSortie", QteSortie);
                        if (requete.exec())
                        {
                            int StockFinal = Stock - QteSortie;
                            QString strStockFinal = "";
                            strStockFinal = QString::number(StockFinal);
                            ui.lbDesign->setText(DesignFromDB);
                            ui.lbStockInitial->setText(strStock);
                            ui.lbStockFinal->setText(strStockFinal);
                            QMessageBox::information(this, "Inserted", "Database Inserted Successfully");
                            
                            //Mise à jour de stock de produit
                            QSqlQuery MaJ;
                            MaJ.prepare("UPDATE produit SET Stock = :stk  WHERE NumProduit = :num");
                            MaJ.bindValue(":stk", StockFinal);
                            MaJ.bindValue(":num", NumProduit);
                            MaJ.exec();
                        }
                    }
                    else
                        QMessageBox::information(this, "Not Inserted", "Database Not Inserted Successfully");
                    
                }
            }
            else
                QMessageBox::information(this, "Info", "Stock insuffisant");

        }

        if (!query.first())
            QMessageBox::information(this, "Failed", "Produit inexistant");
    }
}

void SortieProduit::on_btnSuivant_clicked()
{
    ui.leNumProduit->setText("");
    ui.leNumBonSortie->setText("");
    ui.leQteSortie->setText("");
    ui.lbDesign->setText("");
    ui.lbStockInitial->setText("");
    ui.lbStockFinal->setText("");
}