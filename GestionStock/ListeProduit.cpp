#include "ListeProduit.h"


ListeProduit::ListeProduit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connexionBD();

	QSqlQueryModel* querymodel;
	querymodel = new QSqlQueryModel();
	querymodel->setQuery("SELECT * FROM produit");
	ui.tableView->setModel(querymodel);

}

ListeProduit::~ListeProduit()
{}

void ListeProduit::on_btnRetour_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}