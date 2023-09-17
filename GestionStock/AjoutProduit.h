#pragma once

#include <QMainWindow>
#include "ui_AjoutProduit.h"
#include "MenuPrincipal.h"

class AjoutProduit : public QMainWindow
{
	Q_OBJECT

public:
	AjoutProduit(QWidget *parent = nullptr);
	~AjoutProduit();

public slots:
	void on_btnRetour_clicked();
	void on_btnRechercher_clicked();
	void on_btnAjout_clicked();
	void on_btnSuivant_clicked();

private:
	Ui::AjoutProduitClass ui;
};
