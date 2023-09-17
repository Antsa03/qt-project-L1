#include "MouvementStock.h"
#include "MenuPrincipal.h"

MouvementStock::MouvementStock(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connexionBD();
}

MouvementStock::~MouvementStock()
{}

void MouvementStock::on_btnRetour_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}

void MouvementStock::on_btnOK_clicked()
{
	QString Design = ui.leDesign->text();
	QString date1 = ui.dateEdit_1->text();
	QString date2 = ui.dateEdit_2->text();
	

	if (ui.rbEntree->isChecked())
	{
		QSqlQuery query(QSqlDatabase::database("gestion_stock"));
		query.prepare(QString("SELECT * FROM produit WHERE Design = '" + Design + "'"));

		if (!query.exec())
			QMessageBox::information(this, "Failed", "Query failed to execute");
		else
		{
			while (query.next())
			{
				QString NumProduitFromDB = query.value(0).toString();
				QString DesignFromDB = query.value(1).toString();
				QString Stock = query.value(2).toString();

				if (DesignFromDB == Design)
				{
					QMessageBox::information(this, "Success", "Produit existant");
					ui.lbStock->setText(Stock);
					QSqlQueryModel* querymodel;
					querymodel = new QSqlQueryModel();
					querymodel->setQuery("SELECT bonentree.`NumBonEntree`, entree.`QteEntree`, bonentree.`DateEntree` FROM bonentree JOIN entree WHERE entree.`NumProduit` = '" + NumProduitFromDB + "' AND bonentree.`NumBonEntree` = entree.`NumBonEntree` AND `DateEntree` BETWEEN '"+date1+"' AND '"+date2+"' ORDER BY bonentree.`DateEntree`");
					ui.tableView->setModel(querymodel);

					QSqlQuery total;
					total.prepare("SELECT SUM(QteEntree) FROM entree JOIN bonentree WHERE entree.`NumProduit` = '" + NumProduitFromDB + "' AND bonentree.`NumBonEntree` = entree.`NumBonEntree` AND `DateEntree` BETWEEN '" + date1 + "' AND '" + date2 + "'");
					if (total.exec())
					{
						total.first();
						do
						{
							ui.lbTotal->setText(total.value(0).toString());
						} 
						while (total.next());
						
					}
				}

			}

			if (!query.first())
				QMessageBox::information(this, "Failed", "Produit non trouvee");
		}
	}

	if (ui.rbSortie->isChecked())
	{
		QSqlQuery query(QSqlDatabase::database("gestion_stock"));
		query.prepare(QString("SELECT * FROM produit WHERE Design = '" + Design + "'"));

		if (!query.exec())
			QMessageBox::information(this, "Failed", "Query failed to execute");
		else
		{
			while (query.next())
			{
				QString NumProduitFromDB = query.value(0).toString();
				QString DesignFromDB = query.value(1).toString();
				QString Stock = query.value(2).toString();

				if (DesignFromDB == Design)
				{
					QMessageBox::information(this, "Success", "Produit existant");
					ui.lbStock->setText(Stock);
					QSqlQueryModel* querymodel;
					querymodel = new QSqlQueryModel();
					querymodel->setQuery("SELECT bonsortie.`NumBonSortie`, sortie.`QteSortie`, bonsortie.`DateSortie` FROM bonsortie JOIN sortie WHERE sortie.`NumProduit` = '" + NumProduitFromDB + "' AND bonsortie.`NumBonSortie` = sortie.`NumBonSortie` AND bonsortie.`DateSortie` BETWEEN '"+date1+"' AND '"+date2+"' ORDER BY bonsortie.`DateSortie`");
					ui.tableView->setModel(querymodel);

					QSqlQuery total;
					total.prepare("SELECT SUM(QteSortie) FROM sortie JOIN bonsortie WHERE sortie.`NumProduit` = '" + NumProduitFromDB + "' AND bonsortie.`NumBonSortie` = sortie.`NumBonSortie` AND `DateSortie` BETWEEN '" + date1 + "' AND '" + date2 + "'");
					if (total.exec())
					{
						total.first();
						do
						{
							ui.lbTotal->setText(total.value(0).toString());
						} 
						while (total.next());
					}

				}

			}

			if (!query.first())
				QMessageBox::information(this, "Failed", "Produit non trouvee");
		}

	}

}

void MouvementStock::on_btnListAll_clicked()
{
	QString Design = ui.leDesign->text();

	if (ui.rbEntree->isChecked())
	{
		QSqlQuery query(QSqlDatabase::database("gestion_stock"));
		query.prepare(QString("SELECT * FROM produit WHERE Design = '" + Design + "'"));

		if (!query.exec())
			QMessageBox::information(this, "Failed", "Query failed to execute");
		else
		{
			while (query.next())
			{
				QString NumProduitFromDB = query.value(0).toString();
				QString DesignFromDB = query.value(1).toString();
				QString Stock = query.value(2).toString();

				if (DesignFromDB == Design)
				{
					QMessageBox::information(this, "Success", "Produit existant");
					ui.lbStock->setText(Stock);
					QSqlQueryModel* querymodel;
					querymodel = new QSqlQueryModel();
					querymodel->setQuery("SELECT bonentree.`NumBonEntree`,entree.`QteEntree`, bonentree.`DateEntree` FROM bonentree JOIN entree WHERE entree.`NumProduit` = '" + NumProduitFromDB + "' AND bonentree.`NumBonEntree` = entree.`NumBonEntree` ORDER BY bonentree.`DateEntree`");
					ui.tableView->setModel(querymodel);

					QSqlQuery total;
					total.prepare("SELECT SUM(QteEntree) FROM entree JOIN bonentree WHERE entree.`NumProduit` = '" + NumProduitFromDB + "' AND bonentree.`NumBonEntree` = entree.`NumBonEntree`");
					if (total.exec())
					{
						total.first();
						do
						{
							ui.lbTotal->setText(total.value(0).toString());
						} while (total.next());

					}

				}
					
			}

			if (!query.first())
				QMessageBox::information(this, "Failed", "Produit non trouvee");
		}

	}

	if (ui.rbSortie->isChecked())
	{
		QSqlQuery query(QSqlDatabase::database("gestion_stock"));
		query.prepare(QString("SELECT * FROM produit WHERE Design = '" + Design + "'"));

		if (!query.exec())
			QMessageBox::information(this, "Failed", "Query failed to execute");
		else
		{
			while (query.next())
			{
				QString NumProduitFromDB = query.value(0).toString();
				QString DesignFromDB = query.value(1).toString();
				QString Stock = query.value(2).toString();

				if (DesignFromDB == Design)
				{
					QMessageBox::information(this, "Success", "Produit existant");
					ui.lbStock->setText(Stock);
					QSqlQueryModel* querymodel;
					querymodel = new QSqlQueryModel();
					querymodel->setQuery("SELECT bonsortie.`NumBonSortie`,sortie.`QteSortie`, bonsortie.`DateSortie` FROM bonsortie JOIN sortie WHERE sortie.`NumProduit` = '" + NumProduitFromDB + "' AND bonsortie.`NumBonSortie` = sortie.`NumBonSortie`ORDER BY bonsortie.`DateSortie`");
					ui.tableView->setModel(querymodel);

					QSqlQuery total;
					total.prepare("SELECT SUM(QteSortie) FROM sortie JOIN bonsortie WHERE sortie.`NumProduit` = '" + NumProduitFromDB + "' AND bonsortie.`NumBonSortie` = sortie.`NumBonSortie`");
					if (total.exec())
					{
						total.first();
						do
						{
							ui.lbTotal->setText(total.value(0).toString());
						} 
						while (total.next());

					}

				}

			}

			if (!query.first())
				QMessageBox::information(this, "Failed", "Produit non trouvee");
		}

	}

}