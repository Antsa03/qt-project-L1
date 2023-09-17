#pragma once

#include <QMainWindow>
#include "ui_MenuPrincipal.h"
#include "connexionBD.h"

class MenuPrincipal : public QMainWindow
{
	Q_OBJECT

public:
	MenuPrincipal(QWidget *parent = nullptr);
	~MenuPrincipal();

private slots:
	void on_btnAjout_clicked();
	void on_btnSuppr_clicked();
	void on_btnModif_clicked();
	void on_btnListe_clicked();
	void on_btnMaJ_clicked();
	void on_btnMvStock_clicked();
	void on_btnQuitter_clicked();
	void on_btnBon_clicked();

private:
	Ui::MenuPrincipalClass ui;
};
