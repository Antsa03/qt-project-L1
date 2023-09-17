/********************************************************************************
** Form generated from reading UI file 'GestionStock.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONSTOCK_H
#define UI_GESTIONSTOCK_H

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

class Ui_GestionStockClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *header_2;
    QVBoxLayout *verticalLayout;
    QFrame *header;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QFrame *main;
    QVBoxLayout *verticalLayout_3;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalWidget;
    QLabel *label;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLineEdit *leUserName;
    QLabel *label_3;
    QLineEdit *lePassword;
    QPushButton *btnLogin;
    QWidget *widget;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QMainWindow *GestionStockClass)
    {
        if (GestionStockClass->objectName().isEmpty())
            GestionStockClass->setObjectName("GestionStockClass");
        GestionStockClass->resize(998, 608);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Accueil/img/stocks.png"), QSize(), QIcon::Normal, QIcon::Off);
        GestionStockClass->setWindowIcon(icon);
        centralWidget = new QWidget(GestionStockClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        header_2 = new QWidget(centralWidget);
        header_2->setObjectName("header_2");
        header_2->setMinimumSize(QSize(0, 80));
        header_2->setMaximumSize(QSize(16777215, 80));
        verticalLayout = new QVBoxLayout(header_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        header = new QFrame(header_2);
        header->setObjectName("header");
        header->setMinimumSize(QSize(0, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalan")});
        font.setPointSize(18);
        header->setFont(font);
        header->setStyleSheet(QString::fromUtf8("margin: 0%;\n"
"background-color: #0A043C;"));
        header->setFrameShape(QFrame::StyledPanel);
        header->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(header);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(header);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);


        verticalLayout->addWidget(header);


        verticalLayout_2->addWidget(header_2);

        main = new QFrame(centralWidget);
        main->setObjectName("main");
        main->setStyleSheet(QString::fromUtf8("background-color: #8497AD;"));
        verticalLayout_3 = new QVBoxLayout(main);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalWidget = new QWidget(main);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setMinimumSize(QSize(0, 510));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalWidget1 = new QWidget(horizontalWidget);
        horizontalWidget1->setObjectName("horizontalWidget1");
        horizontalWidget1->setMinimumSize(QSize(150, 0));
        horizontalLayout = new QHBoxLayout(horizontalWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");

        horizontalLayout_3->addWidget(horizontalWidget1);

        verticalWidget = new QWidget(horizontalWidget);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setMinimumSize(QSize(650, 400));
        verticalWidget->setMaximumSize(QSize(650, 400));
        verticalWidget->setStyleSheet(QString::fromUtf8("background-color: #888F9C;\n"
"border-radius: 10px;"));
        label = new QLabel(verticalWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 40, 140, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Couture")});
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: #F8F1F1;"));
        frame = new QFrame(verticalWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 70, 600, 3));
        frame->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(verticalWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 80, 600, 10));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(24, 110, 101, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Couture")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_2->setFont(font2);
        leUserName = new QLineEdit(verticalWidget);
        leUserName->setObjectName("leUserName");
        leUserName->setGeometry(QRect(24, 150, 600, 35));
        QFont font3;
        font3.setPointSize(12);
        leUserName->setFont(font3);
        leUserName->setStyleSheet(QString::fromUtf8("border: 1px solid #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(24, 210, 101, 21));
        label_3->setFont(font2);
        lePassword = new QLineEdit(verticalWidget);
        lePassword->setObjectName("lePassword");
        lePassword->setGeometry(QRect(24, 250, 600, 35));
        lePassword->setFont(font3);
        lePassword->setStyleSheet(QString::fromUtf8("border: 1px solid #ffffff;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        lePassword->setEchoMode(QLineEdit::Password);
        btnLogin = new QPushButton(verticalWidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(275, 320, 125, 40));
        btnLogin->setFont(font2);
        btnLogin->setCursor(QCursor(Qt::PointingHandCursor));
        btnLogin->setStyleSheet(QString::fromUtf8("#btnLogin{  \n"
"color: #ffffff;\n"
"background-color: #9DF0BC;\n"
"border-radius: 5px;\n"
"}\n"
"#btnLogin:hover {\n"
"  background-color: #38E54D;\n"
"  color:black;\n"
"  \n"
"}\n"
""));
        widget = new QWidget(verticalWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(590, 155, 30, 28));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/GestionStock/img/utilisateur.png);"));

        horizontalLayout_3->addWidget(verticalWidget);

        horizontalWidget_2 = new QWidget(horizontalWidget);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalWidget_2->setMinimumSize(QSize(150, 0));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        horizontalLayout_3->addWidget(horizontalWidget_2);


        verticalLayout_3->addWidget(horizontalWidget);


        verticalLayout_2->addWidget(main);

        GestionStockClass->setCentralWidget(centralWidget);

        retranslateUi(GestionStockClass);

        QMetaObject::connectSlotsByName(GestionStockClass);
    } // setupUi

    void retranslateUi(QMainWindow *GestionStockClass)
    {
        GestionStockClass->setWindowTitle(QCoreApplication::translate("GestionStockClass", "Login Page", nullptr));
        label_4->setText(QCoreApplication::translate("GestionStockClass", "GESTION DE STOCK DES PIECES DE RECHANGE", nullptr));
        label->setText(QCoreApplication::translate("GestionStockClass", "ADMIN LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("GestionStockClass", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("GestionStockClass", "PASSWORD", nullptr));
        btnLogin->setText(QCoreApplication::translate("GestionStockClass", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionStockClass: public Ui_GestionStockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONSTOCK_H
