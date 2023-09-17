#include "Accueil.h"
#include "MenuPrincipal.h"

Accueil::Accueil(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Accueil::~Accueil()
{}

void Accueil::on_btnMenuPrinc_clicked()
{
	MenuPrincipal* fenetre_menu = new MenuPrincipal;
	fenetre_menu->show();
	this->close();
}