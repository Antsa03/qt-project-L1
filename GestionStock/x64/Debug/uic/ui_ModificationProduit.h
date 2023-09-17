/********************************************************************************
** Form generated from reading UI file 'ModificationProduit.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICATIONPRODUIT_H
#define UI_MODIFICATIONPRODUIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModificationProduitClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *header;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnRetour;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QLabel *label;
    QWidget *box;
    QVBoxLayout *verticalLayout_4;
    QWidget *main;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QFrame *frame_3;
    QLineEdit *leRecherche;
    QPushButton *btnRecherche;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_7;
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout_4;
    QWidget *verticalWidget1;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_4;
    QLabel *lbNumProduit;
    QWidget *verticalWidget_21;
    QVBoxLayout *verticalLayout_13;
    QWidget *horizontalWidget2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *verticalWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLabel *lbNomProduit;
    QWidget *verticalWidget_22;
    QVBoxLayout *verticalLayout_6;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_8;
    QWidget *verticalWidget_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QWidget *verticalWidget3;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *leNouvProduit;
    QWidget *verticalWidget4;
    QVBoxLayout *verticalLayout_14;
    QWidget *verticalWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QWidget *verticalWidget5;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btnValider;
    QPushButton *btnSuivant;
    QWidget *verticalWidget_23;
    QVBoxLayout *verticalLayout_15;

    void setupUi(QMainWindow *ModificationProduitClass)
    {
        if (ModificationProduitClass->objectName().isEmpty())
            ModificationProduitClass->setObjectName("ModificationProduitClass");
        ModificationProduitClass->resize(1000, 675);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MenuPrincipal/img/modifier-les-informations.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModificationProduitClass->setWindowIcon(icon);
        centralWidget = new QWidget(ModificationProduitClass);
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
        horizontalLayout = new QHBoxLayout(header);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalWidget = new QWidget(header);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setMinimumSize(QSize(250, 80));
        verticalWidget->setMaximumSize(QSize(16777215, 80));
        verticalLayout_3 = new QVBoxLayout(verticalWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, 0, 0);
        btnRetour = new QPushButton(verticalWidget);
        btnRetour->setObjectName("btnRetour");
        btnRetour->setMinimumSize(QSize(90, 80));
        btnRetour->setMaximumSize(QSize(90, 80));
        btnRetour->setCursor(QCursor(Qt::PointingHandCursor));
        btnRetour->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/AjoutProduit/img/retour.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRetour->setIcon(icon1);
        btnRetour->setIconSize(QSize(90, 90));

        verticalLayout_3->addWidget(btnRetour);


        horizontalLayout->addWidget(verticalWidget);

        horizontalWidget = new QWidget(header);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setMinimumSize(QSize(500, 80));
        horizontalWidget->setMaximumSize(QSize(500, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, 0, 0);
        frame = new QFrame(horizontalWidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(90, 80));
        frame->setMaximumSize(QSize(90, 80));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/SuppressionProduit/img/Suppression de produit.png);\n"
"margin: 5%;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame);

        label = new QLabel(horizontalWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalan")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(horizontalWidget);

        box = new QWidget(header);
        box->setObjectName("box");
        box->setMinimumSize(QSize(250, 80));
        box->setMaximumSize(QSize(16777215, 80));
        verticalLayout_4 = new QVBoxLayout(box);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");

        horizontalLayout->addWidget(box);


        verticalLayout_2->addWidget(header);

        main = new QWidget(centralWidget);
        main->setObjectName("main");
        main->setStyleSheet(QString::fromUtf8("background-color: #7FA6C8;"));
        verticalLayout = new QVBoxLayout(main);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 15);
        frame_2 = new QFrame(main);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 65));
        frame_2->setMaximumSize(QSize(16777215, 65));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 45));
        label_2->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(440, 0));
        frame_3->setMaximumSize(QSize(440, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        leRecherche = new QLineEdit(frame_3);
        leRecherche->setObjectName("leRecherche");
        leRecherche->setGeometry(QRect(0, 0, 440, 40));
        QFont font2;
        font2.setPointSize(10);
        leRecherche->setFont(font2);
        leRecherche->setCursor(QCursor(Qt::IBeamCursor));
        leRecherche->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #ffffff;\n"
"padding-left: 10px;"));
        btnRecherche = new QPushButton(frame_3);
        btnRecherche->setObjectName("btnRecherche");
        btnRecherche->setGeometry(QRect(400, 0, 40, 40));
        btnRecherche->setCursor(QCursor(Qt::PointingHandCursor));
        btnRecherche->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/AjoutProduit/img/loupe.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRecherche->setIcon(icon2);
        btnRecherche->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(frame_3);


        verticalLayout->addWidget(frame_2);

        verticalWidget_2 = new QWidget(main);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setMinimumSize(QSize(0, 125));
        verticalWidget_2->setMaximumSize(QSize(16777215, 125));
        verticalWidget_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_7 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalWidget1 = new QWidget(verticalWidget_2);
        horizontalWidget1->setObjectName("horizontalWidget1");
        horizontalWidget1->setMinimumSize(QSize(0, 50));
        horizontalWidget1->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(9, 5, 9, 5);
        verticalWidget1 = new QWidget(horizontalWidget1);
        verticalWidget1->setObjectName("verticalWidget1");
        verticalLayout_12 = new QVBoxLayout(verticalWidget1);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName("verticalLayout_12");

        horizontalLayout_4->addWidget(verticalWidget1);

        label_4 = new QLabel(horizontalWidget1);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(125, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        lbNumProduit = new QLabel(horizontalWidget1);
        lbNumProduit->setObjectName("lbNumProduit");
        lbNumProduit->setMinimumSize(QSize(200, 40));
        lbNumProduit->setMaximumSize(QSize(200, 40));
        QFont font3;
        font3.setPointSize(14);
        lbNumProduit->setFont(font3);
        lbNumProduit->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 5px;"));
        lbNumProduit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbNumProduit);

        verticalWidget_21 = new QWidget(horizontalWidget1);
        verticalWidget_21->setObjectName("verticalWidget_21");
        verticalLayout_13 = new QVBoxLayout(verticalWidget_21);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName("verticalLayout_13");

        horizontalLayout_4->addWidget(verticalWidget_21);


        verticalLayout_7->addWidget(horizontalWidget1);

        horizontalWidget2 = new QWidget(verticalWidget_2);
        horizontalWidget2->setObjectName("horizontalWidget2");
        horizontalWidget2->setMinimumSize(QSize(0, 50));
        horizontalWidget2->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 5, -1, 5);
        verticalWidget2 = new QWidget(horizontalWidget2);
        verticalWidget2->setObjectName("verticalWidget2");
        verticalLayout_5 = new QVBoxLayout(verticalWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");

        horizontalLayout_5->addWidget(verticalWidget2);

        label_6 = new QLabel(horizontalWidget2);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(125, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        lbNomProduit = new QLabel(horizontalWidget2);
        lbNomProduit->setObjectName("lbNomProduit");
        lbNomProduit->setMinimumSize(QSize(200, 40));
        lbNomProduit->setMaximumSize(QSize(200, 40));
        lbNomProduit->setFont(font3);
        lbNomProduit->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 5px;"));
        lbNomProduit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbNomProduit);

        verticalWidget_22 = new QWidget(horizontalWidget2);
        verticalWidget_22->setObjectName("verticalWidget_22");
        verticalLayout_6 = new QVBoxLayout(verticalWidget_22);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");

        horizontalLayout_5->addWidget(verticalWidget_22);


        verticalLayout_7->addWidget(horizontalWidget2);


        verticalLayout->addWidget(verticalWidget_2);

        verticalWidget_3 = new QWidget(main);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setStyleSheet(QString::fromUtf8("background-color: #D1DDD1;\n"
"border-radius: 10px"));
        verticalLayout_8 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(-1, -1, -1, 90);
        verticalWidget_4 = new QWidget(verticalWidget_3);
        verticalWidget_4->setObjectName("verticalWidget_4");
        verticalWidget_4->setMaximumSize(QSize(16777215, 120));
        verticalLayout_10 = new QVBoxLayout(verticalWidget_4);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_3 = new QLabel(verticalWidget_4);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 40));
        label_3->setMaximumSize(QSize(16777215, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Couture")});
        font4.setPointSize(12);
        font4.setBold(true);
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_3);

        widget = new QWidget(verticalWidget_4);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 60));
        widget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, -1, 0, -1);
        verticalWidget3 = new QWidget(widget);
        verticalWidget3->setObjectName("verticalWidget3");
        verticalWidget3->setMinimumSize(QSize(225, 0));
        verticalLayout_11 = new QVBoxLayout(verticalWidget3);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");

        horizontalLayout_6->addWidget(verticalWidget3);

        leNouvProduit = new QLineEdit(widget);
        leNouvProduit->setObjectName("leNouvProduit");
        leNouvProduit->setMinimumSize(QSize(400, 40));
        leNouvProduit->setMaximumSize(QSize(400, 40));
        leNouvProduit->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 15px;\n"
"font: 12pt \"Segoe UI\";"));

        horizontalLayout_6->addWidget(leNouvProduit);

        verticalWidget4 = new QWidget(widget);
        verticalWidget4->setObjectName("verticalWidget4");
        verticalWidget4->setMinimumSize(QSize(225, 0));
        verticalLayout_14 = new QVBoxLayout(verticalWidget4);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName("verticalLayout_14");

        horizontalLayout_6->addWidget(verticalWidget4);

        verticalWidget2->raise();
        verticalWidget2->raise();
        leNouvProduit->raise();

        verticalLayout_10->addWidget(widget);


        verticalLayout_8->addWidget(verticalWidget_4);

        verticalWidget_5 = new QWidget(verticalWidget_3);
        verticalWidget_5->setObjectName("verticalWidget_5");
        verticalWidget_5->setMinimumSize(QSize(0, 80));
        verticalWidget_5->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_7 = new QHBoxLayout(verticalWidget_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, -1, 0, -1);
        verticalWidget5 = new QWidget(verticalWidget_5);
        verticalWidget5->setObjectName("verticalWidget5");
        verticalLayout_9 = new QVBoxLayout(verticalWidget5);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");

        horizontalLayout_7->addWidget(verticalWidget5);

        btnValider = new QPushButton(verticalWidget_5);
        btnValider->setObjectName("btnValider");
        btnValider->setMinimumSize(QSize(0, 50));
        btnValider->setMaximumSize(QSize(16777215, 50));
        btnValider->setFont(font1);
        btnValider->setCursor(QCursor(Qt::PointingHandCursor));
        btnValider->setStyleSheet(QString::fromUtf8("#btnValider{  \n"
"color: #EFE8E8;\n"
"background-color: #935057;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"#btnValider:hover {\n"
"  background-color: #9F8772;\n"
"  color: white;\n"
"  \n"
"}\n"
""));

        horizontalLayout_7->addWidget(btnValider);

        btnSuivant = new QPushButton(verticalWidget_5);
        btnSuivant->setObjectName("btnSuivant");
        btnSuivant->setMinimumSize(QSize(0, 50));
        btnSuivant->setMaximumSize(QSize(16777215, 50));
        btnSuivant->setFont(font1);
        btnSuivant->setCursor(QCursor(Qt::PointingHandCursor));
        btnSuivant->setStyleSheet(QString::fromUtf8("#btnSuivant{  \n"
"color: #EFE8E8;\n"
"background-color: #935057;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"#btnSuivant:hover {\n"
"  background-color: #9F8772;\n"
"color: white;\n"
"  \n"
"}\n"
""));

        horizontalLayout_7->addWidget(btnSuivant);

        verticalWidget_23 = new QWidget(verticalWidget_5);
        verticalWidget_23->setObjectName("verticalWidget_23");
        verticalLayout_15 = new QVBoxLayout(verticalWidget_23);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName("verticalLayout_15");

        horizontalLayout_7->addWidget(verticalWidget_23);


        verticalLayout_8->addWidget(verticalWidget_5);


        verticalLayout->addWidget(verticalWidget_3);


        verticalLayout_2->addWidget(main);

        ModificationProduitClass->setCentralWidget(centralWidget);

        retranslateUi(ModificationProduitClass);

        QMetaObject::connectSlotsByName(ModificationProduitClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModificationProduitClass)
    {
        ModificationProduitClass->setWindowTitle(QCoreApplication::translate("ModificationProduitClass", "ModificationProduit", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("ModificationProduitClass", "MODIFICATION  DE PRODUIT", nullptr));
        label_2->setText(QCoreApplication::translate("ModificationProduitClass", "Recherche de produit", nullptr));
        leRecherche->setPlaceholderText(QCoreApplication::translate("ModificationProduitClass", "Recherche de num\303\251ro de produit ...", nullptr));
        btnRecherche->setText(QString());
        label_4->setText(QCoreApplication::translate("ModificationProduitClass", "Num\303\251ro du produit", nullptr));
        lbNumProduit->setText(QString());
        label_6->setText(QCoreApplication::translate("ModificationProduitClass", "Nom du produit", nullptr));
        lbNomProduit->setText(QString());
        label_3->setText(QCoreApplication::translate("ModificationProduitClass", "ENTRER LE NOUVEAU NOM DU PRODUIT", nullptr));
        btnValider->setText(QCoreApplication::translate("ModificationProduitClass", "VALIDER", nullptr));
        btnSuivant->setText(QCoreApplication::translate("ModificationProduitClass", "SUIVANT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificationProduitClass: public Ui_ModificationProduitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICATIONPRODUIT_H
