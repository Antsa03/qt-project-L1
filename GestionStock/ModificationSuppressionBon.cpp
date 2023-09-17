#include "ModificationSuppressionBon.h"

ModificationSuppressionBon::ModificationSuppressionBon(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connexionBD();
}

ModificationSuppressionBon::~ModificationSuppressionBon()
{}


void ModificationSuppressionBon::on_btnRetour_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}

void ModificationSuppressionBon::on_btnRecherche_clicked()
{
	if (ui.rbEntree->isChecked())
	{
        QString NumBonEntree = ui.leRecherche->text();

        QSqlQuery query(QSqlDatabase::database("gestion_stock"));
        query.prepare(QString("SELECT * FROM entree WHERE NumBonEntree = '" + NumBonEntree + "'"));

        if (!query.exec())
            QMessageBox::information(this, "Failed", "Query failed to execute");

        else
        {
            while (query.next())
            {
                QString NumProduit = query.value(0).toString();
                QString NumBonEntreeFromDB = query.value(1).toString();

                if (NumBonEntreeFromDB == NumBonEntree)
                {

                    QMessageBox::information(this, "Success", "Produit trouvee");
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
                                ui.lbNomProduit->setText(DesignFromDB);
                        }
                    }
                }

            }

            if (!query.first())
                QMessageBox::information(this, "Failed", "Produit non trouvee");
        }
	}

    if (ui.rbSortie->isChecked())
    {
        QString NumBonSortie = ui.leRecherche->text();

        QSqlQuery query(QSqlDatabase::database("gestion_stock"));
        query.prepare(QString("SELECT * FROM sortie WHERE NumBonSortie = '" + NumBonSortie + "'"));

        if (!query.exec())
            QMessageBox::information(this, "Failed", "Query failed to execute");

        else
        {
            while (query.next())
            {
                QString NumProduit = query.value(0).toString();
                QString NumBonSortieFromDB = query.value(1).toString();

                if (NumBonSortieFromDB == NumBonSortie)
                {

                    QMessageBox::information(this, "Success", "Produit trouvee");
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
                                ui.lbNomProduit->setText(DesignFromDB);
                        }
                    }
                }

            }

            if (!query.first())
                QMessageBox::information(this, "Failed", "Produit non trouvee");
        }
    }

}

void ModificationSuppressionBon::on_btnSuppr_clicked()
{
    if (ui.rbEntree->isChecked())
    {
        QString NumBonEntree = ui.leRecherche->text();
        QSqlQuery query(QSqlDatabase::database("gestion_stock"));
        query.prepare(QString("SELECT * FROM entree WHERE NumBonEntree = '" + NumBonEntree + "'"));

        if (!query.exec())
            QMessageBox::information(this, "Failed", "Query failed to execute");

        else
        {
            while (query.next())
            {
                QString NumProduit = query.value(0).toString();
                QString NumBonEntreeFromDB = query.value(1).toString();
                int QteEntree = query.value(2).toInt();

                if (NumBonEntreeFromDB == NumBonEntree)
                {
                    QSqlQuery requetedel;
                    requetedel.prepare("DELETE FROM entree WHERE NumBonEntree = '" + NumBonEntree + "'");
                    QSqlQuery suppr;
                    suppr.prepare("DELETE FROM bonentree WHERE NumBonEntree = '" + NumBonEntree + "'");

                    if (requetedel.exec())
                    {
                        suppr.exec();
                        query.prepare(QString("SELECT * FROM produit WHERE NumProduit = '" + NumProduit + "'"));

                        if (!query.exec())
                            QMessageBox::information(this, "Failed", "Query failed to execute");
                        else
                        {
                            while (query.next())
                            {
                                QString NumProduitFromDB = query.value(0).toString();
                                QString DesignFromDB = query.value(1).toString();
                                int Stock = query.value(2).toInt();
                                int StockFinal = Stock - QteEntree;

                                QSqlQuery MaJ;
                                MaJ.prepare("UPDATE produit SET Stock = :stk  WHERE NumProduit = :num");
                                MaJ.bindValue(":stk", StockFinal);
                                MaJ.bindValue(":num", NumProduit);
                                MaJ.exec();
                               
                            }
                        }
                        QMessageBox::information(this, "Success", "Produit supprime");
                    }
                    else
                        QMessageBox::information(this, "Not Success", "Aucune action executee");
                }

            }

            if (!query.first())
                QMessageBox::information(this, "Failed", "Produit non trouvee");
        }
    }

    if (ui.rbSortie->isChecked())
    {
        QString NumBonSortie = ui.leRecherche->text();
        QSqlQuery query(QSqlDatabase::database("gestion_stock"));
        query.prepare(QString("SELECT * FROM sortie WHERE NumBonSortie = '" + NumBonSortie + "'"));

        if (!query.exec())
            QMessageBox::information(this, "Failed", "Query failed to execute");

        else
        {
            while (query.next())
            {
                QString NumProduit = query.value(0).toString();
                QString NumBonSortieFromDB = query.value(1).toString();
                int QteSortie = query.value(2).toInt();

                if (NumBonSortieFromDB == NumBonSortie)
                {
                    QSqlQuery requetedel;
                    requetedel.prepare("DELETE FROM sortie WHERE NumBonSortie = '" + NumBonSortie + "'");
                    QSqlQuery suppr;
                    suppr.prepare("DELETE FROM bonsortie WHERE NumBonSortie = '" + NumBonSortie + "'");

                    if (requetedel.exec())
                    {
                        suppr.exec();
                        query.prepare(QString("SELECT * FROM produit WHERE NumProduit = '" + NumProduit + "'"));

                        if (!query.exec())
                            QMessageBox::information(this, "Failed", "Query failed to execute");
                        else
                        {
                            while (query.next())
                            {
                                QString NumProduitFromDB = query.value(0).toString();
                                QString DesignFromDB = query.value(1).toString();
                                int Stock = query.value(2).toInt();
                                int StockFinal = Stock + QteSortie;

                                QSqlQuery MaJ;
                                MaJ.prepare("UPDATE produit SET Stock = :stk  WHERE NumProduit = :num");
                                MaJ.bindValue(":stk", StockFinal);
                                MaJ.bindValue(":num", NumProduit);
                                MaJ.exec();

                            }
                        }
                        QMessageBox::information(this, "Success", "Bon de sortie supprime");
                    }
                    else
                        QMessageBox::information(this, "Not Success", "Aucune action executee");
                }

            }

            if (!query.first())
                QMessageBox::information(this, "Failed", "Produit non trouvee");
        }
    }

}

void ModificationSuppressionBon::on_btnValider_clicked()
{

    int QuantiteFinal = ui.leQte->text().toInt();

    //Modification de bon d'entree
    if (ui.rbEntree->isChecked())
    {
        QString NumBonEntree = ui.leRecherche->text();

        QSqlQuery query(QSqlDatabase::database("gestion_stock"));
        query.prepare(QString("SELECT * FROM entree WHERE NumBonEntree = '" + NumBonEntree + "'"));

        if (!query.exec())
            QMessageBox::information(this, "Failed", "Query failed to execute");

        else
        {
            while (query.next())
            {
                QString NumProduit = query.value(0).toString();
                QString NumBonEntreeFromDB = query.value(1).toString();
                int QteEntreeInitial = query.value(2).toInt();

                if (NumBonEntreeFromDB == NumBonEntree)
                {
                    QSqlQuery requeteprod;
                    requeteprod.prepare(QString("SELECT * FROM entree WHERE NumBonEntree = '" + NumBonEntree + "'"));
                    if (!requeteprod.exec())
                        QMessageBox::information(this, "Failed", "Query failed to execute");
                    else
                    {
                        while (requeteprod.next())
                        {
                            QString NumProduitFromDB = query.value(0).toString();

                            if (NumProduitFromDB == NumProduit)
                            {
                                QSqlQuery requeteModif;
                                requeteModif.prepare("UPDATE entree SET QteEntree = :Quantite WHERE NumBonEntree = '" + NumBonEntree + "'");
                                requeteModif.bindValue(":Quantite", QuantiteFinal);

                                if (requeteModif.exec())
                                {
                                    query.prepare(QString("SELECT * FROM produit WHERE NumProduit = '" + NumProduit + "'"));

                                    if (!query.exec())
                                        QMessageBox::information(this, "Failed", "Query failed to execute");
                                    else
                                    {
                                        while (query.next())
                                        {
                                            QString NumProduitFromDB = query.value(0).toString();
                                            QString DesignFromDB = query.value(1).toString();
                                            int StockInitial = query.value(2).toInt();
                                            int StockFinal = StockInitial + QuantiteFinal - QteEntreeInitial;

                                            QSqlQuery MaJ;
                                            MaJ.prepare("UPDATE produit SET Stock = :stk  WHERE NumProduit = :num");
                                            MaJ.bindValue(":stk", StockFinal);
                                            MaJ.bindValue(":num", NumProduit);
                                            if (MaJ.exec())
                                                QMessageBox::information(this, "Success", "Produit modifie");

                                        }
                                    }

                                }
                                else
                                    QMessageBox::information(this, "Not Success", "Aucune action executee");

                            }
                        }
                    }
                }
            }
        }
    }

    //Modification de bon de sortie
    if (ui.rbSortie->isChecked())
    {
        QString NumBonSortie = ui.leRecherche->text();

        QSqlQuery query(QSqlDatabase::database("gestion_stock"));
        query.prepare(QString("SELECT * FROM sortie WHERE NumBonSortie = '" + NumBonSortie + "'"));

        if (!query.exec())
            QMessageBox::information(this, "Failed", "Query failed to execute");

        else
        {
            while (query.next())
            {
                QString NumProduit = query.value(0).toString();
                QString NumBonSortieFromDB = query.value(1).toString();
                int QteSortieInitial = query.value(2).toInt();

                if (NumBonSortieFromDB == NumBonSortie)
                {
                    QSqlQuery requeteprod;
                    requeteprod.prepare(QString("SELECT * FROM sortie WHERE NumBonSortie = '" + NumBonSortie + "'"));
                    if (!requeteprod.exec())
                        QMessageBox::information(this, "Failed", "Query failed to execute");

                    else
                    {
                        while (requeteprod.next())
                        {
                            QString NumProduitFromDB = query.value(0).toString();

                            if (NumProduitFromDB == NumProduit)
                            {
                                
                                query.prepare(QString("SELECT * FROM produit WHERE NumProduit = '" + NumProduit + "'"));

                                if (!query.exec())
                                    QMessageBox::information(this, "Failed", "Query failed to execute");
                                else
                                {
                                    while (query.next())
                                    {
                                        QString NumProduitFromDB = query.value(0).toString();
                                        QString DesignFromDB = query.value(1).toString();
                                        int StockInitial = query.value(2).toInt();
                                        int StockFinal = StockInitial - (QuantiteFinal - QteSortieInitial);

                                        if (StockInitial >= QuantiteFinal)
                                        {
                                            QSqlQuery requeteModif;
                                            requeteModif.prepare("UPDATE sortie SET QteSortie = :Quantite WHERE NumBonSortie = '" + NumBonSortie + "'");
                                            requeteModif.bindValue(":Quantite", QuantiteFinal);

                                            if (requeteModif.exec())
                                            {
                                                QSqlQuery MaJ;
                                                MaJ.prepare("UPDATE produit SET Stock = :stk  WHERE NumProduit = :num");
                                                MaJ.bindValue(":stk", StockFinal);
                                                MaJ.bindValue(":num", NumProduit);

                                                if (MaJ.exec())
                                                    QMessageBox::information(this, "Success", "Produit modifie");

                                            }
                                        }
                                        else
                                            QMessageBox::information(this, "Not Success", "Stock insuffisant");

                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
    }
}
