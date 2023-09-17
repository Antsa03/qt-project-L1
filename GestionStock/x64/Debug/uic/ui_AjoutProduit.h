/********************************************************************************
** Form generated from reading UI file 'AjoutProduit.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTPRODUIT_H
#define UI_AJOUTPRODUIT_H

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

class Ui_AjoutProduitClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *header;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnRetour;
    QFrame *titleBox;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QLabel *label;
    QFrame *frame;
    QWidget *main;
    QVBoxLayout *vboxLayout;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_13;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QFrame *input2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *leNumProduit;
    QLabel *label_2;
    QFrame *input1;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *leNomProduit;
    QLabel *label_4;
    QFrame *input3;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *leNbrStock;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_12;
    QWidget *verticalWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *block_recherche;
    QVBoxLayout *verticalLayout_8;
    QPushButton *btnRechercher;
    QLabel *label_6;
    QWidget *verticalWidget_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btnAjout;
    QLabel *label_5;
    QWidget *verticalWidget_5;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btnSuivant;
    QLabel *label_7;

    void setupUi(QMainWindow *AjoutProduitClass)
    {
        if (AjoutProduitClass->objectName().isEmpty())
            AjoutProduitClass->setObjectName("AjoutProduitClass");
        AjoutProduitClass->resize(1055, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MenuPrincipal/img/ajouter-un-produit-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjoutProduitClass->setWindowIcon(icon);
        centralWidget = new QWidget(AjoutProduitClass);
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
        frame_2 = new QFrame(header);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(250, 80));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnRetour = new QPushButton(frame_2);
        btnRetour->setObjectName("btnRetour");
        btnRetour->setMinimumSize(QSize(90, 80));
        btnRetour->setMaximumSize(QSize(90, 80));
        btnRetour->setCursor(QCursor(Qt::PointingHandCursor));
        btnRetour->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/AjoutProduit/img/retour.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRetour->setIcon(icon1);
        btnRetour->setIconSize(QSize(80, 80));

        verticalLayout->addWidget(btnRetour);


        horizontalLayout->addWidget(frame_2);

        titleBox = new QFrame(header);
        titleBox->setObjectName("titleBox");
        titleBox->setMinimumSize(QSize(500, 80));
        titleBox->setMaximumSize(QSize(500, 80));
        titleBox->setFrameShape(QFrame::StyledPanel);
        titleBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(titleBox);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(titleBox);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(70, 80));
        frame_4->setMaximumSize(QSize(70, 80));
        frame_4->setStyleSheet(QString::fromUtf8("border-image: url(:/AjoutProduit/img/ajout de produit - 2.png);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_4);

        label = new QLabel(titleBox);
        label->setObjectName("label");
        label->setMinimumSize(QSize(400, 80));
        label->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalan")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(titleBox);

        frame = new QFrame(header);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(250, 80));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);


        verticalLayout_2->addWidget(header);

        main = new QWidget(centralWidget);
        main->setObjectName("main");
        main->setCursor(QCursor(Qt::ArrowCursor));
        main->setStyleSheet(QString::fromUtf8("background-color: #7FA6C8;"));
        vboxLayout = new QVBoxLayout(main);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(-1, -1, -1, 10);
        horizontalWidget = new QWidget(main);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setMinimumSize(QSize(200, 0));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalWidget = new QWidget(horizontalWidget);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setMinimumSize(QSize(200, 0));
        verticalWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_13 = new QVBoxLayout(verticalWidget);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName("verticalLayout_13");

        horizontalLayout_4->addWidget(verticalWidget);

        verticalFrame = new QFrame(horizontalWidget);
        verticalFrame->setObjectName("verticalFrame");
        verticalFrame->setMinimumSize(QSize(580, 400));
        verticalFrame->setMaximumSize(QSize(580, 400));
        verticalLayout_3 = new QVBoxLayout(verticalFrame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(20, -1, 30, -1);
        label_3 = new QLabel(verticalFrame);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 60));
        label_3->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Couture")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        input2 = new QFrame(verticalFrame);
        input2->setObjectName("input2");
        input2->setMinimumSize(QSize(0, 50));
        input2->setMaximumSize(QSize(16777215, 50));
        input2->setStyleSheet(QString::fromUtf8("background-color: #7E6D6D;\n"
"border-radius: 10px;"));
        input2->setFrameShape(QFrame::StyledPanel);
        input2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(input2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        leNumProduit = new QLineEdit(input2);
        leNumProduit->setObjectName("leNumProduit");
        leNumProduit->setMinimumSize(QSize(0, 40));
        leNumProduit->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(12);
        leNumProduit->setFont(font2);
        leNumProduit->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"padding-left: 5px;"));

        verticalLayout_5->addWidget(leNumProduit);


        verticalLayout_3->addWidget(input2);

        label_2 = new QLabel(verticalFrame);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 60));
        label_2->setMaximumSize(QSize(16777215, 60));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        input1 = new QFrame(verticalFrame);
        input1->setObjectName("input1");
        input1->setMinimumSize(QSize(0, 50));
        input1->setMaximumSize(QSize(16777215, 50));
        input1->setStyleSheet(QString::fromUtf8("background-color: #7E6D6D;\n"
"border-radius: 10px;"));
        input1->setFrameShape(QFrame::StyledPanel);
        input1->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(input1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        leNomProduit = new QLineEdit(input1);
        leNomProduit->setObjectName("leNomProduit");
        leNomProduit->setMinimumSize(QSize(0, 40));
        leNomProduit->setMaximumSize(QSize(16777215, 40));
        leNomProduit->setFont(font2);
        leNomProduit->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"padding-left: 5px;"));

        verticalLayout_4->addWidget(leNomProduit);


        verticalLayout_3->addWidget(input1);

        label_4 = new QLabel(verticalFrame);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 60));
        label_4->setMaximumSize(QSize(16777215, 60));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        input3 = new QFrame(verticalFrame);
        input3->setObjectName("input3");
        input3->setMinimumSize(QSize(0, 50));
        input3->setMaximumSize(QSize(16777215, 50));
        input3->setStyleSheet(QString::fromUtf8("background-color: #7E6D6D;\n"
"border-radius: 10px;"));
        input3->setFrameShape(QFrame::StyledPanel);
        input3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(input3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        leNbrStock = new QLineEdit(input3);
        leNbrStock->setObjectName("leNbrStock");
        leNbrStock->setMinimumSize(QSize(0, 40));
        leNbrStock->setMaximumSize(QSize(16777215, 40));
        leNbrStock->setFont(font2);
        leNbrStock->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"padding-left: 5px;"));

        verticalLayout_6->addWidget(leNbrStock);


        verticalLayout_3->addWidget(input3);


        horizontalLayout_4->addWidget(verticalFrame);

        verticalWidget_2 = new QWidget(horizontalWidget);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setMinimumSize(QSize(200, 0));
        verticalWidget_2->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_12 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName("verticalLayout_12");

        horizontalLayout_4->addWidget(verticalWidget_2);


        vboxLayout->addWidget(horizontalWidget);

        verticalWidget_3 = new QWidget(main);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setMinimumSize(QSize(0, 135));
        verticalWidget_3->setMaximumSize(QSize(16777215, 135));
        horizontalLayout_3 = new QHBoxLayout(verticalWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(125, -1, 125, 9);
        block_recherche = new QWidget(verticalWidget_3);
        block_recherche->setObjectName("block_recherche");
        block_recherche->setMinimumSize(QSize(150, 135));
        block_recherche->setMaximumSize(QSize(150, 135));
        block_recherche->setStyleSheet(QString::fromUtf8("*{background-color:transparent;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"*:hover {\n"
"  background-color: #C8DBBE;\n"
"}\n"
""));
        verticalLayout_8 = new QVBoxLayout(block_recherche);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(-1, -1, -1, 5);
        btnRechercher = new QPushButton(block_recherche);
        btnRechercher->setObjectName("btnRechercher");
        btnRechercher->setMinimumSize(QSize(0, 90));
        btnRechercher->setMaximumSize(QSize(16777215, 90));
        btnRechercher->setCursor(QCursor(Qt::PointingHandCursor));
        btnRechercher->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/AjoutProduit/img/loupe.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRechercher->setIcon(icon2);
        btnRechercher->setIconSize(QSize(70, 70));

        verticalLayout_8->addWidget(btnRechercher);

        label_6 = new QLabel(block_recherche);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 30));
        label_6->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setPointSize(11);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_6);


        horizontalLayout_3->addWidget(block_recherche);

        verticalWidget_4 = new QWidget(verticalWidget_3);
        verticalWidget_4->setObjectName("verticalWidget_4");
        verticalWidget_4->setMinimumSize(QSize(150, 135));
        verticalWidget_4->setMaximumSize(QSize(150, 135));
        verticalWidget_4->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:transparent;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #C8DBBE;\n"
"}\n"
""));
        verticalLayout_7 = new QVBoxLayout(verticalWidget_4);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(-1, -1, -1, 5);
        btnAjout = new QPushButton(verticalWidget_4);
        btnAjout->setObjectName("btnAjout");
        btnAjout->setMinimumSize(QSize(0, 90));
        btnAjout->setMaximumSize(QSize(16777215, 90));
        btnAjout->setCursor(QCursor(Qt::PointingHandCursor));
        btnAjout->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(255, 255, 255,0);\n"
"background-color: rgba(255, 255, 255,0);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/AjoutProduit/img/inviter.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAjout->setIcon(icon3);
        btnAjout->setIconSize(QSize(90, 90));

        verticalLayout_7->addWidget(btnAjout);

        label_5 = new QLabel(verticalWidget_4);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_5);


        horizontalLayout_3->addWidget(verticalWidget_4);

        verticalWidget_5 = new QWidget(verticalWidget_3);
        verticalWidget_5->setObjectName("verticalWidget_5");
        verticalWidget_5->setMinimumSize(QSize(150, 135));
        verticalWidget_5->setMaximumSize(QSize(150, 135));
        verticalWidget_5->setStyleSheet(QString::fromUtf8("*{background-color:transparent;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #C8DBBE;\n"
"}\n"
""));
        verticalLayout_9 = new QVBoxLayout(verticalWidget_5);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(-1, -1, -1, 5);
        btnSuivant = new QPushButton(verticalWidget_5);
        btnSuivant->setObjectName("btnSuivant");
        btnSuivant->setMinimumSize(QSize(0, 90));
        btnSuivant->setMaximumSize(QSize(16777215, 90));
        btnSuivant->setCursor(QCursor(Qt::PointingHandCursor));
        btnSuivant->setStyleSheet(QString::fromUtf8("border: 0;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/AjoutProduit/img/suivant.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSuivant->setIcon(icon4);
        btnSuivant->setIconSize(QSize(70, 70));

        verticalLayout_9->addWidget(btnSuivant);

        label_7 = new QLabel(verticalWidget_5);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setMaximumSize(QSize(16777215, 30));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_7);


        horizontalLayout_3->addWidget(verticalWidget_5);


        vboxLayout->addWidget(verticalWidget_3);


        verticalLayout_2->addWidget(main);

        AjoutProduitClass->setCentralWidget(centralWidget);

        retranslateUi(AjoutProduitClass);

        QMetaObject::connectSlotsByName(AjoutProduitClass);
    } // setupUi

    void retranslateUi(QMainWindow *AjoutProduitClass)
    {
        AjoutProduitClass->setWindowTitle(QCoreApplication::translate("AjoutProduitClass", "Ajout produit", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("AjoutProduitClass", "AJOUT D'UN NOUVEAU PRODUIT", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutProduitClass", "NUMERO DU PRODUIT", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutProduitClass", "NOM DU PRODUIT", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutProduitClass", "STOCK", nullptr));
        btnRechercher->setText(QString());
        label_6->setText(QCoreApplication::translate("AjoutProduitClass", "Rechercher", nullptr));
        btnAjout->setText(QString());
        label_5->setText(QCoreApplication::translate("AjoutProduitClass", "Ajout de produit", nullptr));
        btnSuivant->setText(QString());
        label_7->setText(QCoreApplication::translate("AjoutProduitClass", "Suivant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutProduitClass: public Ui_AjoutProduitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTPRODUIT_H
