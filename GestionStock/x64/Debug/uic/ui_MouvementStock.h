/********************************************************************************
** Form generated from reading UI file 'MouvementStock.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUVEMENTSTOCK_H
#define UI_MOUVEMENTSTOCK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MouvementStockClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
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
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *leDesign;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_6;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *lbStock;
    QWidget *verticalWidget_4;
    QVBoxLayout *verticalLayout_7;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QRadioButton *rbEntree;
    QRadioButton *rbSortie;
    QWidget *horizontalWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDateEdit *dateEdit_1;
    QLabel *label_6;
    QDateEdit *dateEdit_2;
    QPushButton *btnOK;
    QPushButton *btnListAll;
    QTableView *tableView;
    QWidget *block_total;
    QHBoxLayout *horizontalLayout_7;
    QWidget *verticalWidget_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLabel *lbTotal;
    QWidget *verticalWidget_6;
    QVBoxLayout *verticalLayout_9;

    void setupUi(QMainWindow *MouvementStockClass)
    {
        if (MouvementStockClass->objectName().isEmpty())
            MouvementStockClass->setObjectName("MouvementStockClass");
        MouvementStockClass->resize(1149, 730);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MenuPrincipal/img/actions.png"), QSize(), QIcon::Normal, QIcon::Off);
        MouvementStockClass->setWindowIcon(icon);
        centralWidget = new QWidget(MouvementStockClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("/*VERTICAL SCROLLBAR */\n"
"QScrollBar:vertical{\n"
"	border: none;	\n"
"	background-color: rgb(238, 238, 238);\n"
"	width: 14px;\n"
"	margin: 15px 0 15px 0;\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QScrollbar::handle:vertical{\n"
"	background-color: #81C6E8;\n"
"	min-height: 30px;\n"
"	border-radius: 7px;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1133, 740));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        header = new QWidget(scrollAreaWidgetContents);
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
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/MouvementStock/img/mouvement_stock.png);\n"
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


        verticalLayout_10->addWidget(header);

        main = new QWidget(scrollAreaWidgetContents);
        main->setObjectName("main");
        main->setStyleSheet(QString::fromUtf8("background-color: #7FA6C8;"));
        verticalLayout = new QVBoxLayout(main);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, 20, 20, 10);
        verticalWidget_2 = new QWidget(main);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setMinimumSize(QSize(0, 250));
        verticalLayout_5 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalWidget_2 = new QWidget(verticalWidget_2);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalWidget_2->setMinimumSize(QSize(0, 50));
        horizontalWidget_2->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(25, -1, -1, 1);
        label_2 = new QLabel(horizontalWidget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(125, 50));
        label_2->setMaximumSize(QSize(125, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font1.setPointSize(14);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        leDesign = new QLineEdit(horizontalWidget_2);
        leDesign->setObjectName("leDesign");
        leDesign->setMinimumSize(QSize(300, 40));
        leDesign->setMaximumSize(QSize(300, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Lucida Sans Unicode")});
        font2.setPointSize(11);
        leDesign->setFont(font2);
        leDesign->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));

        horizontalLayout_3->addWidget(leDesign);

        verticalWidget_3 = new QWidget(horizontalWidget_2);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setMinimumSize(QSize(200, 0));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Lucida Console")});
        font3.setPointSize(11);
        verticalWidget_3->setFont(font3);
        verticalLayout_6 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");

        horizontalLayout_3->addWidget(verticalWidget_3);

        verticalWidget_3->raise();
        label_2->raise();
        leDesign->raise();

        verticalLayout_5->addWidget(horizontalWidget_2);

        horizontalWidget_3 = new QWidget(verticalWidget_2);
        horizontalWidget_3->setObjectName("horizontalWidget_3");
        horizontalWidget_3->setMinimumSize(QSize(0, 50));
        horizontalWidget_3->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(25, -1, -1, -1);
        label_3 = new QLabel(horizontalWidget_3);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(125, 50));
        label_3->setMaximumSize(QSize(125, 50));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font4.setPointSize(14);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        lbStock = new QLabel(horizontalWidget_3);
        lbStock->setObjectName("lbStock");
        lbStock->setMinimumSize(QSize(100, 40));
        lbStock->setMaximumSize(QSize(100, 40));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        lbStock->setFont(font5);
        lbStock->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"border-radius: 5px;"));
        lbStock->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbStock);

        verticalWidget_4 = new QWidget(horizontalWidget_3);
        verticalWidget_4->setObjectName("verticalWidget_4");
        verticalWidget_4->setMinimumSize(QSize(200, 0));
        verticalLayout_7 = new QVBoxLayout(verticalWidget_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");

        horizontalLayout_4->addWidget(verticalWidget_4);

        verticalWidget_4->raise();
        label_3->raise();
        lbStock->raise();

        verticalLayout_5->addWidget(horizontalWidget_3);

        horizontalWidget_4 = new QWidget(verticalWidget_2);
        horizontalWidget_4->setObjectName("horizontalWidget_4");
        horizontalWidget_4->setMinimumSize(QSize(0, 50));
        horizontalWidget_4->setMaximumSize(QSize(16777214, 50));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(25, -1, 50, 1);
        label_4 = new QLabel(horizontalWidget_4);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(125, 0));
        label_4->setMaximumSize(QSize(125, 16777215));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);

        rbEntree = new QRadioButton(horizontalWidget_4);
        rbEntree->setObjectName("rbEntree");
        rbEntree->setMinimumSize(QSize(200, 0));
        rbEntree->setMaximumSize(QSize(200, 16777215));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font6.setPointSize(12);
        font6.setBold(true);
        rbEntree->setFont(font6);

        horizontalLayout_5->addWidget(rbEntree);

        rbSortie = new QRadioButton(horizontalWidget_4);
        rbSortie->setObjectName("rbSortie");
        rbSortie->setMinimumSize(QSize(200, 0));
        rbSortie->setMaximumSize(QSize(200, 16777215));
        rbSortie->setFont(font6);

        horizontalLayout_5->addWidget(rbSortie);


        verticalLayout_5->addWidget(horizontalWidget_4);

        horizontalWidget_5 = new QWidget(verticalWidget_2);
        horizontalWidget_5->setObjectName("horizontalWidget_5");
        horizontalWidget_5->setMinimumSize(QSize(0, 50));
        horizontalWidget_5->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_6 = new QHBoxLayout(horizontalWidget_5);
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(25, -1, 50, -1);
        label_5 = new QLabel(horizontalWidget_5);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(125, 50));
        label_5->setMaximumSize(QSize(125, 50));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_5);

        dateEdit_1 = new QDateEdit(horizontalWidget_5);
        dateEdit_1->setObjectName("dateEdit_1");
        dateEdit_1->setMinimumSize(QSize(200, 40));
        dateEdit_1->setMaximumSize(QSize(200, 40));
        QFont font7;
        font7.setPointSize(12);
        dateEdit_1->setFont(font7);
        dateEdit_1->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"border-radius: 5px;"));
        dateEdit_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(dateEdit_1);

        label_6 = new QLabel(horizontalWidget_5);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(20, 50));
        label_6->setMaximumSize(QSize(20, 50));
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        dateEdit_2 = new QDateEdit(horizontalWidget_5);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setMinimumSize(QSize(200, 40));
        dateEdit_2->setMaximumSize(QSize(200, 40));
        dateEdit_2->setFont(font7);
        dateEdit_2->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"border-radius: 5px;"));
        dateEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(dateEdit_2);

        btnOK = new QPushButton(horizontalWidget_5);
        btnOK->setObjectName("btnOK");
        btnOK->setMinimumSize(QSize(75, 40));
        btnOK->setMaximumSize(QSize(75, 40));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe UI")});
        font8.setPointSize(12);
        font8.setBold(true);
        btnOK->setFont(font8);
        btnOK->setCursor(QCursor(Qt::PointingHandCursor));
        btnOK->setStyleSheet(QString::fromUtf8("#btnOK{\n"
"	border-radius: 5px;\n"
"	background-color: #E14D2A;\n"
"	color: #fff;\n"
"}\n"
"#btnOK:hover{\n"
"	transition: 1s;\n"
"	background-color: #FD841F;\n"
"}\n"
""));

        horizontalLayout_6->addWidget(btnOK);

        btnListAll = new QPushButton(horizontalWidget_5);
        btnListAll->setObjectName("btnListAll");
        btnListAll->setMinimumSize(QSize(125, 40));
        btnListAll->setMaximumSize(QSize(125, 40));
        btnListAll->setFont(font5);
        btnListAll->setCursor(QCursor(Qt::PointingHandCursor));
        btnListAll->setStyleSheet(QString::fromUtf8("#btnListAll{\n"
"	border-radius: 5px;\n"
"	background-color: #E64848;\n"
"	color: #fff;\n"
"}\n"
"#btnListAll:hover{\n"
"	background-color: #E97777;\n"
"}"));

        horizontalLayout_6->addWidget(btnListAll);

        label_5->raise();
        label_6->raise();
        dateEdit_1->raise();
        dateEdit_2->raise();
        btnOK->raise();
        btnListAll->raise();

        verticalLayout_5->addWidget(horizontalWidget_5);


        verticalLayout->addWidget(verticalWidget_2);

        tableView = new QTableView(main);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(0, 300));
        tableView->setFont(font7);
        tableView->setStyleSheet(QString::fromUtf8("background-color: #DDDDDD;\n"
"border-radius: 10px;"));
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setMinimumSectionSize(100);
        tableView->horizontalHeader()->setDefaultSectionSize(400);

        verticalLayout->addWidget(tableView);

        block_total = new QWidget(main);
        block_total->setObjectName("block_total");
        block_total->setMinimumSize(QSize(0, 60));
        block_total->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_7 = new QHBoxLayout(block_total);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalWidget_5 = new QWidget(block_total);
        verticalWidget_5->setObjectName("verticalWidget_5");
        verticalLayout_8 = new QVBoxLayout(verticalWidget_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");

        horizontalLayout_7->addWidget(verticalWidget_5);

        label_7 = new QLabel(block_total);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(125, 50));
        label_7->setMaximumSize(QSize(125, 50));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font9.setPointSize(16);
        label_7->setFont(font9);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);

        lbTotal = new QLabel(block_total);
        lbTotal->setObjectName("lbTotal");
        lbTotal->setMinimumSize(QSize(125, 45));
        lbTotal->setMaximumSize(QSize(125, 45));
        lbTotal->setFont(font5);
        lbTotal->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        lbTotal->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lbTotal);

        verticalWidget_6 = new QWidget(block_total);
        verticalWidget_6->setObjectName("verticalWidget_6");
        verticalLayout_9 = new QVBoxLayout(verticalWidget_6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");

        horizontalLayout_7->addWidget(verticalWidget_6);


        verticalLayout->addWidget(block_total);

        verticalWidget_2->raise();
        block_total->raise();
        tableView->raise();

        verticalLayout_10->addWidget(main);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        MouvementStockClass->setCentralWidget(centralWidget);

        retranslateUi(MouvementStockClass);

        QMetaObject::connectSlotsByName(MouvementStockClass);
    } // setupUi

    void retranslateUi(QMainWindow *MouvementStockClass)
    {
        MouvementStockClass->setWindowTitle(QCoreApplication::translate("MouvementStockClass", "Mouvement stock", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("MouvementStockClass", "MOUVEMENT DE STOCK", nullptr));
        label_2->setText(QCoreApplication::translate("MouvementStockClass", "DESIGNATION:", nullptr));
        leDesign->setPlaceholderText(QCoreApplication::translate("MouvementStockClass", "Nom du produit ...", nullptr));
        label_3->setText(QCoreApplication::translate("MouvementStockClass", "STOCK ACTUEL:", nullptr));
        lbStock->setText(QString());
        label_4->setText(QCoreApplication::translate("MouvementStockClass", "Op\303\251ration:", nullptr));
        rbEntree->setText(QCoreApplication::translate("MouvementStockClass", "ENTREE", nullptr));
        rbSortie->setText(QCoreApplication::translate("MouvementStockClass", "SORTIE", nullptr));
        label_5->setText(QCoreApplication::translate("MouvementStockClass", "DATE:", nullptr));
        label_6->setText(QCoreApplication::translate("MouvementStockClass", "\303\240", nullptr));
        btnOK->setText(QCoreApplication::translate("MouvementStockClass", "OK", nullptr));
        btnListAll->setText(QCoreApplication::translate("MouvementStockClass", "Tout lister", nullptr));
        label_7->setText(QCoreApplication::translate("MouvementStockClass", "Total:", nullptr));
        lbTotal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MouvementStockClass: public Ui_MouvementStockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUVEMENTSTOCK_H
