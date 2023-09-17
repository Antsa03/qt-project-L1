#include "MenuPrincipal.h"
#include "AjoutProduit.h"
#include "SuppressionProduit.h"
#include "ModificationProduit.h"
#include "ListeProduit.h"
#include "MiseAJour.h"
#include "MouvementStock.h"
#include "ModificationSuppressionBon.h"

MenuPrincipal::MenuPrincipal(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

MenuPrincipal::~MenuPrincipal()
{}

void MenuPrincipal::on_btnAjout_clicked()
{
	AjoutProduit* fenetre_ajout = new AjoutProduit;
	fenetre_ajout->show();
	this->close();
}

void MenuPrincipal::on_btnSuppr_clicked()
{
	SuppressionProduit* fenetre_suppression = new SuppressionProduit;
	fenetre_suppression->show();
	this->close();
}

void MenuPrincipal::on_btnModif_clicked()
{
	ModificationProduit* fenetre_modif = new ModificationProduit;
	fenetre_modif->show();
	this->close();
}

void MenuPrincipal::on_btnListe_clicked()
{
	ListeProduit* fenetre_liste = new ListeProduit;
	fenetre_liste->show();
	this->close();
}

void MenuPrincipal::on_btnMaJ_clicked()
{
	MiseAJour* fenetre_MaJ = new MiseAJour;
	fenetre_MaJ->show();
	this->close();
}

void MenuPrincipal::on_btnBon_clicked()
{
	ModificationSuppressionBon *fenetre_bon = new ModificationSuppressionBon;
	fenetre_bon->show();
	this->close();

}

void MenuPrincipal::on_btnMvStock_clicked()
{
	MouvementStock* fenetre_mouvement = new MouvementStock;
	fenetre_mouvement->show();
	this->close();
}

void MenuPrincipal::on_btnQuitter_clicked()
{
	this->close();
}