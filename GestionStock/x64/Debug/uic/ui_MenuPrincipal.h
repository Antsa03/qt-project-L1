/********************************************************************************
** Form generated from reading UI file 'MenuPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipalClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *header;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QWidget *lbTitleWidget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_2;
    QLabel *label;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *main_2;
    QVBoxLayout *main;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnAjout;
    QLabel *label_3;
    QWidget *verticalWidget_4;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSuppr;
    QLabel *label_4;
    QWidget *verticalWidget_5;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btnModif;
    QLabel *label_5;
    QWidget *verticalWidget_6;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btnListe;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QWidget *verticalWidget_7;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnMaJ;
    QLabel *label_6;
    QWidget *verticalWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnBon;
    QLabel *label_2;
    QWidget *verticalWidget_8;
    QVBoxLayout *verticalLayout_10;
    QPushButton *btnMvStock;
    QLabel *label_9;
    QWidget *verticalWidget_9;
    QVBoxLayout *verticalLayout_8;
    QPushButton *btnQuitter;
    QLabel *label_7;

    void setupUi(QMainWindow *MenuPrincipalClass)
    {
        if (MenuPrincipalClass->objectName().isEmpty())
            MenuPrincipalClass->setObjectName("MenuPrincipalClass");
        MenuPrincipalClass->resize(1074, 619);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Accueil/img/stock.png"), QSize(), QIcon::Normal, QIcon::Off);
        MenuPrincipalClass->setWindowIcon(icon);
        centralWidget = new QWidget(MenuPrincipalClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        header = new QWidget(centralWidget);
        header->setObjectName("header");
        header->setMinimumSize(QSize(0, 80));
        header->setMaximumSize(QSize(16777215, 80));
        header->setStyleSheet(QString::fromUtf8("background-color: #0A043C;"));
        horizontalLayout_2 = new QHBoxLayout(header);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(header);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(150, 80));
        widget->setMaximumSize(QSize(16777215, 80));
        widget->setSizeIncrement(QSize(0, 0));
        widget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(widget);

        lbTitleWidget = new QWidget(header);
        lbTitleWidget->setObjectName("lbTitleWidget");
        lbTitleWidget->setMinimumSize(QSize(250, 80));
        lbTitleWidget->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_3 = new QHBoxLayout(lbTitleWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 100, 0);
        frame_2 = new QFrame(lbTitleWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(100, 75));
        frame_2->setMaximumSize(QSize(100, 75));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/MenuPrincipal/img/menu2.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame_2);

        label = new QLabel(lbTitleWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalan")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("margin-left: 10%;\n"
"color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        horizontalLayout_2->addWidget(lbTitleWidget);

        verticalWidget = new QWidget(header);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setMinimumSize(QSize(150, 80));
        verticalWidget->setMaximumSize(QSize(16777215, 80));
        verticalLayout_4 = new QVBoxLayout(verticalWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");

        horizontalLayout_2->addWidget(verticalWidget);


        verticalLayout_2->addWidget(header);

        main_2 = new QWidget(centralWidget);
        main_2->setObjectName("main_2");
        main_2->setStyleSheet(QString::fromUtf8("background-color: #7FA6C8;"));
        main = new QVBoxLayout(main_2);
        main->setSpacing(0);
        main->setContentsMargins(11, 11, 11, 11);
        main->setObjectName("main");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 15, -1, 15);
        verticalWidget_3 = new QWidget(main_2);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setMinimumSize(QSize(225, 175));
        verticalWidget_3->setMaximumSize(QSize(250, 175));
        verticalWidget_3->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #BAD1C2 ;\n"
"}\n"
"\n"
""));
        verticalLayout_5 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        btnAjout = new QPushButton(verticalWidget_3);
        btnAjout->setObjectName("btnAjout");
        btnAjout->setMinimumSize(QSize(0, 100));
        btnAjout->setCursor(QCursor(Qt::PointingHandCursor));
        btnAjout->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MenuPrincipal/img/ajouter-un-produit-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAjout->setIcon(icon1);
        btnAjout->setIconSize(QSize(125, 125));

        verticalLayout_5->addWidget(btnAjout);

        label_3 = new QLabel(verticalWidget_3);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Couture")});
        font1.setPointSize(10);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);


        horizontalLayout->addWidget(verticalWidget_3);

        verticalWidget_4 = new QWidget(main_2);
        verticalWidget_4->setObjectName("verticalWidget_4");
        verticalWidget_4->setMinimumSize(QSize(225, 175));
        verticalWidget_4->setMaximumSize(QSize(250, 175));
        verticalWidget_4->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #BAD1C2 ;\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(verticalWidget_4);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 20, -1, -1);
        btnSuppr = new QPushButton(verticalWidget_4);
        btnSuppr->setObjectName("btnSuppr");
        btnSuppr->setMinimumSize(QSize(0, 100));
        btnSuppr->setCursor(QCursor(Qt::PointingHandCursor));
        btnSuppr->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MenuPrincipal/img/bouton-supprimer.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSuppr->setIcon(icon2);
        btnSuppr->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(btnSuppr);

        label_4 = new QLabel(verticalWidget_4);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);


        horizontalLayout->addWidget(verticalWidget_4);

        verticalWidget_5 = new QWidget(main_2);
        verticalWidget_5->setObjectName("verticalWidget_5");
        verticalWidget_5->setMinimumSize(QSize(225, 175));
        verticalWidget_5->setMaximumSize(QSize(250, 175));
        verticalWidget_5->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #BAD1C2 ;\n"
"}\n"
"\n"
""));
        verticalLayout_7 = new QVBoxLayout(verticalWidget_5);
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(1, 20, 1, 9);
        btnModif = new QPushButton(verticalWidget_5);
        btnModif->setObjectName("btnModif");
        btnModif->setMinimumSize(QSize(0, 100));
        btnModif->setCursor(QCursor(Qt::PointingHandCursor));
        btnModif->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MenuPrincipal/img/modifier-les-informations.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnModif->setIcon(icon3);
        btnModif->setIconSize(QSize(100, 100));

        verticalLayout_7->addWidget(btnModif);

        label_5 = new QLabel(verticalWidget_5);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_5);


        horizontalLayout->addWidget(verticalWidget_5);

        verticalWidget_6 = new QWidget(main_2);
        verticalWidget_6->setObjectName("verticalWidget_6");
        verticalWidget_6->setMinimumSize(QSize(225, 175));
        verticalWidget_6->setMaximumSize(QSize(250, 175));
        verticalWidget_6->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"*:hover {\n"
"  background-color: #BAD1C2;\n"
"}\n"
"\n"
""));
        verticalLayout_9 = new QVBoxLayout(verticalWidget_6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        btnListe = new QPushButton(verticalWidget_6);
        btnListe->setObjectName("btnListe");
        btnListe->setCursor(QCursor(Qt::PointingHandCursor));
        btnListe->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/MenuPrincipal/img/liste.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnListe->setIcon(icon4);
        btnListe->setIconSize(QSize(100, 100));

        verticalLayout_9->addWidget(btnListe);

        label_8 = new QLabel(verticalWidget_6);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setMaximumSize(QSize(16777215, 30));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_8);


        horizontalLayout->addWidget(verticalWidget_6);


        main->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 15, -1, 15);
        verticalWidget_7 = new QWidget(main_2);
        verticalWidget_7->setObjectName("verticalWidget_7");
        verticalWidget_7->setMinimumSize(QSize(225, 175));
        verticalWidget_7->setMaximumSize(QSize(250, 175));
        verticalWidget_7->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #81C6E8 ;\n"
"}\n"
"\n"
""));
        verticalLayout_6 = new QVBoxLayout(verticalWidget_7);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(1, 1, 1, 1);
        btnMaJ = new QPushButton(verticalWidget_7);
        btnMaJ->setObjectName("btnMaJ");
        btnMaJ->setCursor(QCursor(Qt::PointingHandCursor));
        btnMaJ->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/MenuPrincipal/img/mis-a-jour.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMaJ->setIcon(icon5);
        btnMaJ->setIconSize(QSize(150, 100));

        verticalLayout_6->addWidget(btnMaJ);

        label_6 = new QLabel(verticalWidget_7);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 35));
        label_6->setMaximumSize(QSize(16777215, 35));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);


        horizontalLayout_4->addWidget(verticalWidget_7);

        verticalWidget1 = new QWidget(main_2);
        verticalWidget1->setObjectName("verticalWidget1");
        verticalWidget1->setMinimumSize(QSize(225, 175));
        verticalWidget1->setMaximumSize(QSize(250, 175));
        verticalWidget1->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #81C6E8 ;\n"
"}\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(verticalWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnBon = new QPushButton(verticalWidget1);
        btnBon->setObjectName("btnBon");
        btnBon->setCursor(QCursor(Qt::PointingHandCursor));
        btnBon->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/MenuPrincipal/img/editing.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBon->setIcon(icon6);
        btnBon->setIconSize(QSize(150, 100));

        verticalLayout_3->addWidget(btnBon);

        label_2 = new QLabel(verticalWidget1);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 35));
        label_2->setMaximumSize(QSize(16777215, 35));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout_4->addWidget(verticalWidget1);

        verticalWidget_8 = new QWidget(main_2);
        verticalWidget_8->setObjectName("verticalWidget_8");
        verticalWidget_8->setMinimumSize(QSize(225, 175));
        verticalWidget_8->setMaximumSize(QSize(250, 175));
        verticalWidget_8->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #81C6E8;\n"
"}\n"
"\n"
""));
        verticalLayout_10 = new QVBoxLayout(verticalWidget_8);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        btnMvStock = new QPushButton(verticalWidget_8);
        btnMvStock->setObjectName("btnMvStock");
        btnMvStock->setCursor(QCursor(Qt::PointingHandCursor));
        btnMvStock->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/MenuPrincipal/img/actions.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMvStock->setIcon(icon7);
        btnMvStock->setIconSize(QSize(100, 100));

        verticalLayout_10->addWidget(btnMvStock);

        label_9 = new QLabel(verticalWidget_8);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(0, 30));
        label_9->setMaximumSize(QSize(16777215, 30));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_9);


        horizontalLayout_4->addWidget(verticalWidget_8);

        verticalWidget_9 = new QWidget(main_2);
        verticalWidget_9->setObjectName("verticalWidget_9");
        verticalWidget_9->setMinimumSize(QSize(225, 175));
        verticalWidget_9->setMaximumSize(QSize(250, 175));
        verticalWidget_9->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #81C6E8;\n"
"}\n"
"\n"
""));
        verticalLayout_8 = new QVBoxLayout(verticalWidget_9);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        btnQuitter = new QPushButton(verticalWidget_9);
        btnQuitter->setObjectName("btnQuitter");
        btnQuitter->setMinimumSize(QSize(0, 100));
        btnQuitter->setCursor(QCursor(Qt::PointingHandCursor));
        btnQuitter->setStyleSheet(QString::fromUtf8("margin-right: 20%;\n"
"background-color:transparent;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/MenuPrincipal/img/quitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQuitter->setIcon(icon8);
        btnQuitter->setIconSize(QSize(125, 100));

        verticalLayout_8->addWidget(btnQuitter);

        label_7 = new QLabel(verticalWidget_9);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setMaximumSize(QSize(16777215, 30));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_7);


        horizontalLayout_4->addWidget(verticalWidget_9);


        main->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(main_2);

        MenuPrincipalClass->setCentralWidget(centralWidget);

        retranslateUi(MenuPrincipalClass);

        QMetaObject::connectSlotsByName(MenuPrincipalClass);
    } // setupUi

    void retranslateUi(QMainWindow *MenuPrincipalClass)
    {
        MenuPrincipalClass->setWindowTitle(QCoreApplication::translate("MenuPrincipalClass", "Menu principal", nullptr));
        label->setText(QCoreApplication::translate("MenuPrincipalClass", "MENU PRINCIPAL", nullptr));
        btnAjout->setText(QString());
        label_3->setText(QCoreApplication::translate("MenuPrincipalClass", "Ajout de nouveau produit", nullptr));
        btnSuppr->setText(QString());
        label_4->setText(QCoreApplication::translate("MenuPrincipalClass", "Suppression d'un produit", nullptr));
        btnModif->setText(QString());
        label_5->setText(QCoreApplication::translate("MenuPrincipalClass", "Modification d'un produit", nullptr));
        btnListe->setText(QString());
        label_8->setText(QCoreApplication::translate("MenuPrincipalClass", "LISTAGE DES PRODUITS", nullptr));
        btnMaJ->setText(QString());
        label_6->setText(QCoreApplication::translate("MenuPrincipalClass", "MISE A JOUR DE STOCK \n"
"DE PRODUIT", nullptr));
        btnBon->setText(QString());
        label_2->setText(QCoreApplication::translate("MenuPrincipalClass", "MODIFICATON/SUPPRESSION\n"
"BON D'ENTREE OU SORTIE", nullptr));
        btnMvStock->setText(QString());
        label_9->setText(QCoreApplication::translate("MenuPrincipalClass", "ETAT DES MOUVEMENTS \n"
"DE STOCK", nullptr));
        btnQuitter->setText(QString());
        label_7->setText(QCoreApplication::translate("MenuPrincipalClass", "QUITTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipalClass: public Ui_MenuPrincipalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
