/********************************************************************************
** Form generated from reading UI file 'EntreeProduit.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTREEPRODUIT_H
#define UI_ENTREEPRODUIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntreeProduitClass
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
    QLabel *label_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *leNumProduit;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *leNumBonEntree;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *leQteEntree;
    QWidget *horizontalWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDateEdit *deDateEntree;
    QWidget *verticalWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QWidget *verticalWidget1;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLabel *lbDesign;
    QWidget *verticalWidget_21;
    QVBoxLayout *verticalLayout_7;
    QWidget *blockStock1;
    QHBoxLayout *horizontalLayout_9;
    QWidget *verticalWidget2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLabel *lbStockInitial;
    QWidget *verticalWidget_22;
    QVBoxLayout *verticalLayout_9;
    QWidget *blockStock2;
    QHBoxLayout *horizontalLayout_10;
    QWidget *verticalWidget3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLabel *lbStockFinal;
    QWidget *verticalWidget_23;
    QVBoxLayout *verticalLayout_11;
    QWidget *horizontalWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QWidget *verticalWidget4;
    QVBoxLayout *verticalLayout_12;
    QPushButton *btnMaJ;
    QPushButton *btnSuivant;
    QWidget *verticalWidget_24;
    QVBoxLayout *verticalLayout_13;

    void setupUi(QMainWindow *EntreeProduitClass)
    {
        if (EntreeProduitClass->objectName().isEmpty())
            EntreeProduitClass->setObjectName("EntreeProduitClass");
        EntreeProduitClass->resize(1250, 632);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MiseAJour/img/importer.png"), QSize(), QIcon::Normal, QIcon::Off);
        EntreeProduitClass->setWindowIcon(icon);
        centralWidget = new QWidget(EntreeProduitClass);
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
        frame->setStyleSheet(QString::fromUtf8("border-image: url(\":/MiseAJour/img/mise_\303\240_jour-1.png\");\n"
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
        verticalLayout->setContentsMargins(100, 20, 100, 10);
        label_2 = new QLabel(main);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Couture")});
        font1.setPointSize(18);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalWidget_2 = new QWidget(main);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setMinimumSize(QSize(950, 400));
        verticalWidget_2->setMaximumSize(QSize(166899, 500));
        verticalLayout_5 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, 30, -1, 30);
        horizontalWidget_2 = new QWidget(verticalWidget_2);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalWidget_2->setMinimumSize(QSize(0, 50));
        horizontalWidget_2->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 5, 200, 5);
        label_3 = new QLabel(horizontalWidget_2);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(200, 40));
        label_3->setMaximumSize(QSize(200, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font2.setPointSize(14);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        leNumProduit = new QLineEdit(horizontalWidget_2);
        leNumProduit->setObjectName("leNumProduit");
        leNumProduit->setMinimumSize(QSize(500, 40));
        leNumProduit->setMaximumSize(QSize(16689, 40));
        QFont font3;
        font3.setPointSize(12);
        leNumProduit->setFont(font3);
        leNumProduit->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 7px;"));

        horizontalLayout_3->addWidget(leNumProduit);


        verticalLayout_5->addWidget(horizontalWidget_2);

        horizontalWidget_3 = new QWidget(verticalWidget_2);
        horizontalWidget_3->setObjectName("horizontalWidget_3");
        horizontalWidget_3->setMinimumSize(QSize(0, 50));
        horizontalWidget_3->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_4->setSpacing(9);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 5, 200, 5);
        label_4 = new QLabel(horizontalWidget_3);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(200, 40));
        label_4->setMaximumSize(QSize(200, 40));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        leNumBonEntree = new QLineEdit(horizontalWidget_3);
        leNumBonEntree->setObjectName("leNumBonEntree");
        leNumBonEntree->setMinimumSize(QSize(500, 40));
        leNumBonEntree->setMaximumSize(QSize(166564, 40));
        leNumBonEntree->setFont(font3);
        leNumBonEntree->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 7px;"));

        horizontalLayout_4->addWidget(leNumBonEntree);


        verticalLayout_5->addWidget(horizontalWidget_3);

        horizontalWidget_4 = new QWidget(verticalWidget_2);
        horizontalWidget_4->setObjectName("horizontalWidget_4");
        horizontalWidget_4->setMinimumSize(QSize(0, 50));
        horizontalWidget_4->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_6 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_6->setSpacing(9);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 5, 200, 5);
        label_6 = new QLabel(horizontalWidget_4);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(200, 40));
        label_6->setMaximumSize(QSize(200, 40));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_6);

        leQteEntree = new QLineEdit(horizontalWidget_4);
        leQteEntree->setObjectName("leQteEntree");
        leQteEntree->setMinimumSize(QSize(500, 40));
        leQteEntree->setMaximumSize(QSize(1622666, 40));
        leQteEntree->setFont(font3);
        leQteEntree->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 7px;"));

        horizontalLayout_6->addWidget(leQteEntree);


        verticalLayout_5->addWidget(horizontalWidget_4);

        horizontalWidget_5 = new QWidget(verticalWidget_2);
        horizontalWidget_5->setObjectName("horizontalWidget_5");
        horizontalWidget_5->setMinimumSize(QSize(0, 50));
        horizontalWidget_5->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_5);
        horizontalLayout_5->setSpacing(9);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 5, 200, 5);
        label_5 = new QLabel(horizontalWidget_5);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(200, 40));
        label_5->setMaximumSize(QSize(200, 40));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        deDateEntree = new QDateEdit(horizontalWidget_5);
        deDateEntree->setObjectName("deDateEntree");
        deDateEntree->setMinimumSize(QSize(0, 40));
        deDateEntree->setMaximumSize(QSize(16777215, 40));
        deDateEntree->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"font: 16pt \"Segoe UI\";"));
        deDateEntree->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(deDateEntree);


        verticalLayout_5->addWidget(horizontalWidget_5);

        verticalWidget_3 = new QWidget(verticalWidget_2);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setMinimumSize(QSize(0, 50));
        verticalWidget_3->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_8 = new QHBoxLayout(verticalWidget_3);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalWidget1 = new QWidget(verticalWidget_3);
        verticalWidget1->setObjectName("verticalWidget1");
        verticalWidget1->setMinimumSize(QSize(340, 50));
        verticalWidget1->setMaximumSize(QSize(16777215, 50));
        verticalLayout_6 = new QVBoxLayout(verticalWidget1);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");

        horizontalLayout_8->addWidget(verticalWidget1);

        label_7 = new QLabel(verticalWidget_3);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(100, 40));
        label_7->setMaximumSize(QSize(100, 40));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_7);

        lbDesign = new QLabel(verticalWidget_3);
        lbDesign->setObjectName("lbDesign");
        lbDesign->setMinimumSize(QSize(150, 40));
        lbDesign->setMaximumSize(QSize(150, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(12);
        font4.setBold(true);
        lbDesign->setFont(font4);
        lbDesign->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 7px;"));
        lbDesign->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lbDesign);

        verticalWidget_21 = new QWidget(verticalWidget_3);
        verticalWidget_21->setObjectName("verticalWidget_21");
        verticalWidget_21->setMinimumSize(QSize(340, 50));
        verticalWidget_21->setMaximumSize(QSize(16777215, 50));
        verticalLayout_7 = new QVBoxLayout(verticalWidget_21);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");

        horizontalLayout_8->addWidget(verticalWidget_21);


        verticalLayout_5->addWidget(verticalWidget_3);

        blockStock1 = new QWidget(verticalWidget_2);
        blockStock1->setObjectName("blockStock1");
        blockStock1->setMinimumSize(QSize(0, 50));
        blockStock1->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_9 = new QHBoxLayout(blockStock1);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, -1, 0, 0);
        verticalWidget2 = new QWidget(blockStock1);
        verticalWidget2->setObjectName("verticalWidget2");
        verticalWidget2->setMinimumSize(QSize(340, 40));
        verticalWidget2->setMaximumSize(QSize(16777215, 40));
        verticalLayout_8 = new QVBoxLayout(verticalWidget2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");

        horizontalLayout_9->addWidget(verticalWidget2);

        label_8 = new QLabel(blockStock1);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(100, 40));
        label_8->setMaximumSize(QSize(100, 40));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_8);

        lbStockInitial = new QLabel(blockStock1);
        lbStockInitial->setObjectName("lbStockInitial");
        lbStockInitial->setMinimumSize(QSize(150, 40));
        lbStockInitial->setMaximumSize(QSize(150, 40));
        lbStockInitial->setFont(font4);
        lbStockInitial->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 7px;"));
        lbStockInitial->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lbStockInitial);

        verticalWidget_22 = new QWidget(blockStock1);
        verticalWidget_22->setObjectName("verticalWidget_22");
        verticalWidget_22->setMinimumSize(QSize(340, 40));
        verticalWidget_22->setMaximumSize(QSize(16777215, 40));
        verticalLayout_9 = new QVBoxLayout(verticalWidget_22);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");

        horizontalLayout_9->addWidget(verticalWidget_22);


        verticalLayout_5->addWidget(blockStock1);

        blockStock2 = new QWidget(verticalWidget_2);
        blockStock2->setObjectName("blockStock2");
        blockStock2->setMinimumSize(QSize(0, 50));
        blockStock2->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_10 = new QHBoxLayout(blockStock2);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, -1, 0, 0);
        verticalWidget3 = new QWidget(blockStock2);
        verticalWidget3->setObjectName("verticalWidget3");
        verticalWidget3->setMinimumSize(QSize(340, 40));
        verticalWidget3->setMaximumSize(QSize(16777215, 40));
        verticalLayout_10 = new QVBoxLayout(verticalWidget3);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");

        horizontalLayout_10->addWidget(verticalWidget3);

        label_10 = new QLabel(blockStock2);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(100, 40));
        label_10->setMaximumSize(QSize(100, 40));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_10);

        lbStockFinal = new QLabel(blockStock2);
        lbStockFinal->setObjectName("lbStockFinal");
        lbStockFinal->setMinimumSize(QSize(150, 40));
        lbStockFinal->setMaximumSize(QSize(150, 40));
        lbStockFinal->setFont(font4);
        lbStockFinal->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 7px;"));
        lbStockFinal->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(lbStockFinal);

        verticalWidget_23 = new QWidget(blockStock2);
        verticalWidget_23->setObjectName("verticalWidget_23");
        verticalWidget_23->setMinimumSize(QSize(340, 40));
        verticalWidget_23->setMaximumSize(QSize(16777215, 40));
        verticalLayout_11 = new QVBoxLayout(verticalWidget_23);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");

        horizontalLayout_10->addWidget(verticalWidget_23);


        verticalLayout_5->addWidget(blockStock2);


        verticalLayout->addWidget(verticalWidget_2);

        horizontalWidget_6 = new QWidget(main);
        horizontalWidget_6->setObjectName("horizontalWidget_6");
        horizontalWidget_6->setMinimumSize(QSize(0, 80));
        horizontalWidget_6->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_7 = new QHBoxLayout(horizontalWidget_6);
        horizontalLayout_7->setSpacing(40);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, -1, 0, -1);
        verticalWidget4 = new QWidget(horizontalWidget_6);
        verticalWidget4->setObjectName("verticalWidget4");
        verticalWidget4->setMinimumSize(QSize(340, 0));
        verticalLayout_12 = new QVBoxLayout(verticalWidget4);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName("verticalLayout_12");

        horizontalLayout_7->addWidget(verticalWidget4);

        btnMaJ = new QPushButton(horizontalWidget_6);
        btnMaJ->setObjectName("btnMaJ");
        btnMaJ->setMinimumSize(QSize(125, 40));
        btnMaJ->setMaximumSize(QSize(125, 40));
        btnMaJ->setFont(font2);
        btnMaJ->setCursor(QCursor(Qt::PointingHandCursor));
        btnMaJ->setStyleSheet(QString::fromUtf8("#btnMaJ{  \n"
"color: #EFE8E8;\n"
"background-color: #935057;\n"
"border-radius: 5px;\n"
"}\n"
"#btnMaJ:hover {\n"
"  background-color: #9F8772 ;\n"
"color: white;\n"
"}\n"
""));

        horizontalLayout_7->addWidget(btnMaJ);

        btnSuivant = new QPushButton(horizontalWidget_6);
        btnSuivant->setObjectName("btnSuivant");
        btnSuivant->setMinimumSize(QSize(125, 40));
        btnSuivant->setMaximumSize(QSize(125, 40));
        btnSuivant->setFont(font2);
        btnSuivant->setCursor(QCursor(Qt::PointingHandCursor));
        btnSuivant->setStyleSheet(QString::fromUtf8("#btnSuivant{  \n"
"color: #EFE8E8;\n"
"background-color: #935057;\n"
"border-radius: 5px;\n"
"\n"
"}\n"
"#btnSuivant:hover {\n"
"  background-color: #E6CBA8 ;\n"
"  color: white; \n"
"}\n"
""));

        horizontalLayout_7->addWidget(btnSuivant);

        verticalWidget_24 = new QWidget(horizontalWidget_6);
        verticalWidget_24->setObjectName("verticalWidget_24");
        verticalWidget_24->setMinimumSize(QSize(340, 0));
        verticalLayout_13 = new QVBoxLayout(verticalWidget_24);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName("verticalLayout_13");

        horizontalLayout_7->addWidget(verticalWidget_24);


        verticalLayout->addWidget(horizontalWidget_6);


        verticalLayout_2->addWidget(main);

        EntreeProduitClass->setCentralWidget(centralWidget);

        retranslateUi(EntreeProduitClass);

        QMetaObject::connectSlotsByName(EntreeProduitClass);
    } // setupUi

    void retranslateUi(QMainWindow *EntreeProduitClass)
    {
        EntreeProduitClass->setWindowTitle(QCoreApplication::translate("EntreeProduitClass", "Entree produit", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("EntreeProduitClass", "MISE A JOUR DU STOCK DE PRODUIT", nullptr));
        label_2->setText(QCoreApplication::translate("EntreeProduitClass", "ENTREE DE PRODUIT", nullptr));
        label_3->setText(QCoreApplication::translate("EntreeProduitClass", "Num\303\251ro de produit", nullptr));
        label_4->setText(QCoreApplication::translate("EntreeProduitClass", "Num\303\251ro de Bon d'entr\303\251e", nullptr));
        label_6->setText(QCoreApplication::translate("EntreeProduitClass", "Quantit\303\251 d'entr\303\251e", nullptr));
        label_5->setText(QCoreApplication::translate("EntreeProduitClass", "Date d'entr\303\251e", nullptr));
        label_7->setText(QCoreApplication::translate("EntreeProduitClass", "Designation", nullptr));
        lbDesign->setText(QString());
        label_8->setText(QCoreApplication::translate("EntreeProduitClass", "Stock initial", nullptr));
        lbStockInitial->setText(QString());
        label_10->setText(QCoreApplication::translate("EntreeProduitClass", "Stock final", nullptr));
        lbStockFinal->setText(QString());
        btnMaJ->setText(QCoreApplication::translate("EntreeProduitClass", "Mise \303\240 jour", nullptr));
        btnSuivant->setText(QCoreApplication::translate("EntreeProduitClass", "Suivant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntreeProduitClass: public Ui_EntreeProduitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTREEPRODUIT_H
