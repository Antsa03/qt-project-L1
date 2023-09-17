/********************************************************************************
** Form generated from reading UI file 'SuppressionProduit.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRESSIONPRODUIT_H
#define UI_SUPPRESSIONPRODUIT_H

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

class Ui_SuppressionProduitClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *header;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnRetour;
    QWidget *title_box;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QLabel *label;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *main;
    QVBoxLayout *verticalLayout;
    QWidget *barre_recherche;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QFrame *frame_2;
    QLineEdit *leRecherche;
    QPushButton *btnRecherche;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *NomProduit;
    QHBoxLayout *horizontalLayout_4;
    QWidget *verticalWidget1;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    QLabel *lbNumProduit;
    QWidget *verticalWidget_21;
    QVBoxLayout *verticalLayout_9;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_5;
    QWidget *verticalWidget2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_5;
    QLabel *lbNomProduit;
    QWidget *verticalWidget_22;
    QVBoxLayout *verticalLayout_11;
    QWidget *verticalWidget3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnSuppr;

    void setupUi(QMainWindow *SuppressionProduitClass)
    {
        if (SuppressionProduitClass->objectName().isEmpty())
            SuppressionProduitClass->setObjectName("SuppressionProduitClass");
        SuppressionProduitClass->resize(1090, 584);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MenuPrincipal/img/bouton-supprimer.png"), QSize(), QIcon::Normal, QIcon::Off);
        SuppressionProduitClass->setWindowIcon(icon);
        centralWidget = new QWidget(SuppressionProduitClass);
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
        verticalWidget_2 = new QWidget(header);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setMinimumSize(QSize(250, 80));
        verticalWidget_2->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, 0, 0);
        btnRetour = new QPushButton(verticalWidget_2);
        btnRetour->setObjectName("btnRetour");
        btnRetour->setMinimumSize(QSize(90, 80));
        btnRetour->setMaximumSize(QSize(90, 80));
        btnRetour->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/AjoutProduit/img/retour.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRetour->setIcon(icon1);
        btnRetour->setIconSize(QSize(90, 90));
        btnRetour->setFlat(true);

        verticalLayout_3->addWidget(btnRetour);


        horizontalLayout->addWidget(verticalWidget_2);

        title_box = new QWidget(header);
        title_box->setObjectName("title_box");
        title_box->setMinimumSize(QSize(500, 80));
        title_box->setMaximumSize(QSize(500, 80));
        horizontalLayout_3 = new QHBoxLayout(title_box);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(title_box);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(90, 80));
        frame->setMaximumSize(QSize(90, 80));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/Suppression produit/Suppression de produit.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame);

        label = new QLabel(title_box);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalan")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        horizontalLayout->addWidget(title_box);

        verticalWidget_3 = new QWidget(header);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setMinimumSize(QSize(250, 80));
        verticalLayout_4 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");

        horizontalLayout->addWidget(verticalWidget_3);


        verticalLayout_2->addWidget(header);

        main = new QWidget(centralWidget);
        main->setObjectName("main");
        main->setStyleSheet(QString::fromUtf8("background-color: #7FA6C8;"));
        verticalLayout = new QVBoxLayout(main);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, -1, 30, 30);
        barre_recherche = new QWidget(main);
        barre_recherche->setObjectName("barre_recherche");
        barre_recherche->setMinimumSize(QSize(0, 60));
        barre_recherche->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(barre_recherche);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(9, -1, 0, -1);
        label_2 = new QLabel(barre_recherche);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        frame_2 = new QFrame(barre_recherche);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(440, 0));
        frame_2->setMaximumSize(QSize(440, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        leRecherche = new QLineEdit(frame_2);
        leRecherche->setObjectName("leRecherche");
        leRecherche->setGeometry(QRect(0, 0, 440, 40));
        QFont font2;
        font2.setPointSize(10);
        leRecherche->setFont(font2);
        leRecherche->setCursor(QCursor(Qt::IBeamCursor));
        leRecherche->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #ffffff;\n"
"padding-left: 10px;"));
        btnRecherche = new QPushButton(frame_2);
        btnRecherche->setObjectName("btnRecherche");
        btnRecherche->setGeometry(QRect(400, 0, 40, 40));
        btnRecherche->setCursor(QCursor(Qt::PointingHandCursor));
        btnRecherche->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/AjoutProduit/img/loupe.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRecherche->setIcon(icon2);
        btnRecherche->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(frame_2);


        verticalLayout->addWidget(barre_recherche);

        verticalWidget = new QWidget(main);
        verticalWidget->setObjectName("verticalWidget");
        verticalLayout_7 = new QVBoxLayout(verticalWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        NomProduit = new QWidget(verticalWidget);
        NomProduit->setObjectName("NomProduit");
        NomProduit->setMinimumSize(QSize(0, 80));
        NomProduit->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_4 = new QHBoxLayout(NomProduit);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 15, -1, 15);
        verticalWidget1 = new QWidget(NomProduit);
        verticalWidget1->setObjectName("verticalWidget1");
        verticalWidget1->setMinimumSize(QSize(300, 0));
        verticalLayout_8 = new QVBoxLayout(verticalWidget1);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");

        horizontalLayout_4->addWidget(verticalWidget1);

        label_3 = new QLabel(NomProduit);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(125, 0));
        label_3->setMaximumSize(QSize(125, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font3.setPointSize(14);
        font3.setBold(false);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        lbNumProduit = new QLabel(NomProduit);
        lbNumProduit->setObjectName("lbNumProduit");
        lbNumProduit->setMinimumSize(QSize(200, 0));
        lbNumProduit->setMaximumSize(QSize(200, 16777215));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(12);
        font4.setBold(true);
        lbNumProduit->setFont(font4);
        lbNumProduit->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 5px;"));
        lbNumProduit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbNumProduit);

        verticalWidget_21 = new QWidget(NomProduit);
        verticalWidget_21->setObjectName("verticalWidget_21");
        verticalWidget_21->setMinimumSize(QSize(300, 0));
        verticalLayout_9 = new QVBoxLayout(verticalWidget_21);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");

        horizontalLayout_4->addWidget(verticalWidget_21);


        verticalLayout_7->addWidget(NomProduit);

        horizontalWidget = new QWidget(verticalWidget);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setMinimumSize(QSize(0, 80));
        horizontalWidget->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 15, -1, 15);
        verticalWidget2 = new QWidget(horizontalWidget);
        verticalWidget2->setObjectName("verticalWidget2");
        verticalWidget2->setMinimumSize(QSize(300, 0));
        verticalLayout_10 = new QVBoxLayout(verticalWidget2);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");

        horizontalLayout_5->addWidget(verticalWidget2);

        label_5 = new QLabel(horizontalWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(125, 0));
        label_5->setMaximumSize(QSize(125, 16777215));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        lbNomProduit = new QLabel(horizontalWidget);
        lbNomProduit->setObjectName("lbNomProduit");
        lbNomProduit->setMinimumSize(QSize(200, 0));
        lbNomProduit->setMaximumSize(QSize(200, 16777215));
        lbNomProduit->setFont(font4);
        lbNomProduit->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 5px;"));
        lbNomProduit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lbNomProduit);

        verticalWidget_22 = new QWidget(horizontalWidget);
        verticalWidget_22->setObjectName("verticalWidget_22");
        verticalWidget_22->setMinimumSize(QSize(300, 0));
        verticalLayout_11 = new QVBoxLayout(verticalWidget_22);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");

        horizontalLayout_5->addWidget(verticalWidget_22);


        verticalLayout_7->addWidget(horizontalWidget);


        verticalLayout->addWidget(verticalWidget);

        verticalWidget3 = new QWidget(main);
        verticalWidget3->setObjectName("verticalWidget3");
        verticalLayout_5 = new QVBoxLayout(verticalWidget3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, -1, 0, -1);
        btnSuppr = new QPushButton(verticalWidget3);
        btnSuppr->setObjectName("btnSuppr");
        btnSuppr->setMinimumSize(QSize(300, 100));
        btnSuppr->setMaximumSize(QSize(300, 100));
        btnSuppr->setCursor(QCursor(Qt::PointingHandCursor));
        btnSuppr->setStyleSheet(QString::fromUtf8("#btnSuppr{  \n"
"color: #EFE8E8;\n"
"background-color: #935057;\n"
"border-radius: 10px;\n"
"padding-top: 4px;\n"
"font: 700 14pt \"Couture\";\n"
"}\n"
"#btnSuppr:hover {\n"
"  background-color: #FA7070;\n"
"  color: white;\n"
"}\n"
"\n"
""));

        horizontalLayout_6->addWidget(btnSuppr);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(verticalWidget3);


        verticalLayout_2->addWidget(main);

        SuppressionProduitClass->setCentralWidget(centralWidget);

        retranslateUi(SuppressionProduitClass);

        QMetaObject::connectSlotsByName(SuppressionProduitClass);
    } // setupUi

    void retranslateUi(QMainWindow *SuppressionProduitClass)
    {
        SuppressionProduitClass->setWindowTitle(QCoreApplication::translate("SuppressionProduitClass", "Suppression produit", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("SuppressionProduitClass", "SUPPRESSION DE PRODUIT", nullptr));
        label_2->setText(QCoreApplication::translate("SuppressionProduitClass", "Recherche de produit", nullptr));
        leRecherche->setPlaceholderText(QCoreApplication::translate("SuppressionProduitClass", "Recherche de num\303\251ro de produit ...", nullptr));
        btnRecherche->setText(QString());
        label_3->setText(QCoreApplication::translate("SuppressionProduitClass", "Num\303\251ro de produit", nullptr));
        lbNumProduit->setText(QString());
        label_5->setText(QCoreApplication::translate("SuppressionProduitClass", "Nom de produit", nullptr));
        lbNomProduit->setText(QString());
        btnSuppr->setText(QCoreApplication::translate("SuppressionProduitClass", "SUPPRIMER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuppressionProduitClass: public Ui_SuppressionProduitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRESSIONPRODUIT_H
