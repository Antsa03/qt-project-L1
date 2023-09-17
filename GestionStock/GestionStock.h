#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GestionStock.h"
#include <QMessageBox>

class GestionStock : public QMainWindow
{
    Q_OBJECT

public:
    GestionStock(QWidget *parent = nullptr);
    ~GestionStock();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::GestionStockClass ui;
};
