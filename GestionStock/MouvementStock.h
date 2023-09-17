#pragma once

#include <QMainWindow>
#include "ui_MouvementStock.h"

class MouvementStock : public QMainWindow
{
	Q_OBJECT

public:
	MouvementStock(QWidget *parent = nullptr);
	~MouvementStock();

private slots:
	void on_btnRetour_clicked();
	void on_btnOK_clicked();
	void on_btnListAll_clicked();

private:
	Ui::MouvementStockClass ui;
};
