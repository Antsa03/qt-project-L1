#pragma once

#include <QMainWindow>
#include "ui_ListeProduit.h"
#include "MenuPrincipal.h"

class ListeProduit : public QMainWindow
{
	Q_OBJECT

public:
	ListeProduit(QWidget *parent = nullptr);
	~ListeProduit();

private slots:
	void on_btnRetour_clicked();

private:
	Ui::ListeProduitClass ui;
};
