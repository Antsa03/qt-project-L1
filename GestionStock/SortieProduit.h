#pragma once

#include <QMainWindow>
#include "ui_SortieProduit.h"
#include "MiseAJour.h"
#include "MenuPrincipal.h"

class SortieProduit : public QMainWindow
{
	Q_OBJECT

public:
	SortieProduit(QWidget *parent = nullptr);
	~SortieProduit();

private slots:
	void on_btnRetour_clicked();
	void on_btnMaJ_clicked();
	void on_btnSuivant_clicked();

private:
	Ui::SortieProduitClass ui;
};
