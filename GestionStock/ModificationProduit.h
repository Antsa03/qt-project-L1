#pragma once

#include <QMainWindow>
#include "ui_ModificationProduit.h"
#include "MenuPrincipal.h"

class ModificationProduit : public QMainWindow
{
	Q_OBJECT

public:
	ModificationProduit(QWidget *parent = nullptr);
	~ModificationProduit();

private slots:
	void on_btnRetour_clicked();
	void on_btnRecherche_clicked();
	void on_btnValider_clicked();
	void on_btnSuivant_clicked();

private:
	Ui::ModificationProduitClass ui;
};
