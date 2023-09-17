#pragma once

#include <QMainWindow>
#include "ui_EntreeProduit.h"
#include "MenuPrincipal.h"

class EntreeProduit : public QMainWindow
{
	Q_OBJECT

public:
	EntreeProduit(QWidget *parent = nullptr);
	~EntreeProduit();

private slots:
	void on_btnRetour_clicked();
	void on_btnMaJ_clicked();
	void on_btnSuivant_clicked();

private:
	Ui::EntreeProduitClass ui;
};
