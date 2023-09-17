#pragma once

#include <QMainWindow>
#include "ui_MiseAJour.h"

class MiseAJour : public QMainWindow
{
	Q_OBJECT

public:
	MiseAJour(QWidget *parent = nullptr);
	~MiseAJour();

private slots:
	void on_btnRetour_clicked();
	void on_btnEntreeProd_clicked();
	void on_btnSortieProd_clicked();

private:
	Ui::MiseAJourClass ui;
};
