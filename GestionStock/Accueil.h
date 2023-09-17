#pragma once

#include <QMainWindow>
#include "ui_Accueil.h"

class Accueil : public QMainWindow
{
	Q_OBJECT

public:
	Accueil(QWidget *parent = nullptr);
	~Accueil();

private slots:
	void on_btnMenuPrinc_clicked();

private:
	Ui::AccueilClass ui;
};
