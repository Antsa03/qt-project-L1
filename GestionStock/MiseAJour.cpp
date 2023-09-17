#include "MiseAJour.h"
#include "MenuPrincipal.h"
#include "EntreeProduit.h"
#include "SortieProduit.h"

MiseAJour::MiseAJour(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

MiseAJour::~MiseAJour()
{}

void MiseAJour::on_btnRetour_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}

void MiseAJour::on_btnEntreeProd_clicked()
{
	EntreeProduit* fenetre_entree = new EntreeProduit;
	fenetre_entree->show();
	this->close();
}

void MiseAJour::on_btnSortieProd_clicked()
{
	SortieProduit* fenetre_sortie = new SortieProduit;
	fenetre_sortie->show();
	this->close();
}