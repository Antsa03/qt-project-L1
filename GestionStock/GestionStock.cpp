#include "GestionStock.h"
#include "Accueil.h"

GestionStock::GestionStock(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

GestionStock::~GestionStock()
{}

void GestionStock::on_btnLogin_clicked()
{
    QString Username = ui.leUserName->text();
    QString Password = ui.lePassword->text();

    if (Username == "admin" && Password == "connexion01")
    {
        QMessageBox::information(this, "Success", "You're connected successfully");
        Accueil *fenetre_accueil = new Accueil;
        fenetre_accueil->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this, "Failed", "Wrong username or password");
    }

}