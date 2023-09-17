/********************************************************************************
** Form generated from reading UI file 'Accueil.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

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

class Ui_AccueilClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *header_2;
    QVBoxLayout *header;
    QLabel *label;
    QWidget *main_2;
    QVBoxLayout *verticalLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnMenuPrinc;
    QLabel *label_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_3;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_8;

    void setupUi(QMainWindow *AccueilClass)
    {
        if (AccueilClass->objectName().isEmpty())
            AccueilClass->setObjectName("AccueilClass");
        AccueilClass->resize(1145, 630);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Accueil/img/stocks.png"), QSize(), QIcon::Normal, QIcon::Off);
        AccueilClass->setWindowIcon(icon);
        centralWidget = new QWidget(AccueilClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        header_2 = new QWidget(centralWidget);
        header_2->setObjectName("header_2");
        header_2->setMinimumSize(QSize(0, 80));
        header_2->setMaximumSize(QSize(16777215, 80));
        header_2->setStyleSheet(QString::fromUtf8("background-color: #0A043C;"));
        header = new QVBoxLayout(header_2);
        header->setSpacing(0);
        header->setContentsMargins(11, 11, 11, 11);
        header->setObjectName("header");
        header->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(header_2);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalan")});
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        label->setAlignment(Qt::AlignCenter);

        header->addWidget(label);


        verticalLayout_3->addWidget(header_2);

        main_2 = new QWidget(centralWidget);
        main_2->setObjectName("main_2");
        main_2->setStyleSheet(QString::fromUtf8("background-color: #647C98;"));
        verticalLayout = new QVBoxLayout(main_2);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalWidget = new QWidget(main_2);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setMinimumSize(QSize(0, 100));
        verticalWidget->setMaximumSize(QSize(16777215, 90));
        verticalLayout_2 = new QVBoxLayout(verticalWidget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 10, -1, 0);
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("James Ariyale")});
        font1.setPointSize(72);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        verticalLayout->addWidget(verticalWidget);

        horizontalWidget = new QWidget(main_2);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setMinimumSize(QSize(900, 360));
        horizontalWidget->setMaximumSize(QSize(16777215, 360));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        widget = new QWidget(horizontalWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(360, 0));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(100, -1, 50, -1);
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(150, 150));
        frame->setMaximumSize(QSize(150, 150));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/Accueil/img/stock.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_5->addWidget(frame);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(horizontalWidget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(390, 300));
        widget_2->setMaximumSize(QSize(390, 300));
        widget_2->setCursor(QCursor(Qt::ArrowCursor));
        widget_2->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #E6CBA8 ;\n"
"}\n"
"\n"
""));
        verticalLayout_6 = new QVBoxLayout(widget_2);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        btnMenuPrinc = new QPushButton(widget_2);
        btnMenuPrinc->setObjectName("btnMenuPrinc");
        btnMenuPrinc->setCursor(QCursor(Qt::PointingHandCursor));
        btnMenuPrinc->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Accueil/img/menu-principal.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMenuPrinc->setIcon(icon1);
        btnMenuPrinc->setIconSize(QSize(150, 200));

        verticalLayout_6->addWidget(btnMenuPrinc);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft JhengHei")});
        font2.setPointSize(24);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_3);


        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(horizontalWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(360, 0));
        widget_3->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(50, 9, 100, -1);
        frame_3 = new QFrame(widget_3);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(150, 150));
        frame_3->setMaximumSize(QSize(150, 150));
        frame_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Accueil/img/stocks.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(frame_3);


        horizontalLayout->addWidget(widget_3);

        widget->raise();
        widget_3->raise();
        widget_2->raise();

        verticalLayout->addWidget(horizontalWidget);

        verticalWidget_2 = new QWidget(main_2);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setMinimumSize(QSize(0, 70));
        verticalWidget_2->setMaximumSize(QSize(16777215, 70));
        verticalWidget_2->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_8 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(-1, -1, 50, -1);

        verticalLayout->addWidget(verticalWidget_2);


        verticalLayout_3->addWidget(main_2);

        AccueilClass->setCentralWidget(centralWidget);

        retranslateUi(AccueilClass);

        QMetaObject::connectSlotsByName(AccueilClass);
    } // setupUi

    void retranslateUi(QMainWindow *AccueilClass)
    {
        AccueilClass->setWindowTitle(QCoreApplication::translate("AccueilClass", "Accueil", nullptr));
        label->setText(QCoreApplication::translate("AccueilClass", "GESTION DE STOCK DES PIECES DE RECHANGE", nullptr));
        label_2->setText(QCoreApplication::translate("AccueilClass", "TONGASOA", nullptr));
        btnMenuPrinc->setText(QString());
        label_3->setText(QCoreApplication::translate("AccueilClass", "Menu principal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccueilClass: public Ui_AccueilClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
