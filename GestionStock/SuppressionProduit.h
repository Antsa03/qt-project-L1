#pragma once

#include <QMainWindow>
#include "ui_SuppressionProduit.h"
#include "MenuPrincipal.h"

class SuppressionProduit : public QMainWindow
{
	Q_OBJECT

public:
	SuppressionProduit(QWidget *parent = nullptr);
	~SuppressionProduit();

private slots:
	void on_btnRetour_clicked();
	void on_btnRecherche_clicked();
	void on_btnSuppr_clicked();

private:
	Ui::SuppressionProduitClass ui;
};
