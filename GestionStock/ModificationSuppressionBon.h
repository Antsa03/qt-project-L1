#pragma once

#include <QMainWindow>
#include "ui_ModificationSuppressionBon.h"
#include "MenuPrincipal.h"

class ModificationSuppressionBon : public QMainWindow
{
	Q_OBJECT

public:
	ModificationSuppressionBon(QWidget *parent = nullptr);
	~ModificationSuppressionBon();

private slots:
	void on_btnRetour_clicked();
	void on_btnRecherche_clicked();
	void on_btnSuppr_clicked();
	void on_btnValider_clicked();

private:
	Ui::ModificationSuppressionBonClass ui;
};
