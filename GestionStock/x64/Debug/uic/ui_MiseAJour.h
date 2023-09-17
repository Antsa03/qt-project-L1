/********************************************************************************
** Form generated from reading UI file 'MiseAJour.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISEAJOUR_H
#define UI_MISEAJOUR_H

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

class Ui_MiseAJourClass
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnSortieProd;
    QLabel *label_2;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnEntreeProd;
    QLabel *label_3;

    void setupUi(QMainWindow *MiseAJourClass)
    {
        if (MiseAJourClass->objectName().isEmpty())
            MiseAJourClass->setObjectName("MiseAJourClass");
        MiseAJourClass->resize(1000, 620);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MenuPrincipal/img/mis-a-jour.png"), QSize(), QIcon::Normal, QIcon::Off);
        MiseAJourClass->setWindowIcon(icon);
        centralWidget = new QWidget(MiseAJourClass);
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
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        widget = new QWidget(main);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 500));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(50, 50, 50, 50);
        verticalWidget_2 = new QWidget(widget);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setMinimumSize(QSize(250, 200));
        verticalWidget_2->setMaximumSize(QSize(300, 250));
        verticalWidget_2->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #C8DBBE ;\n"
"}\n"
"\n"
""));
        verticalLayout_6 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        btnSortieProd = new QPushButton(verticalWidget_2);
        btnSortieProd->setObjectName("btnSortieProd");
        btnSortieProd->setCursor(QCursor(Qt::PointingHandCursor));
        btnSortieProd->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MiseAJour/img/exporter.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSortieProd->setIcon(icon2);
        btnSortieProd->setIconSize(QSize(150, 150));

        verticalLayout_6->addWidget(btnSortieProd);

        label_2 = new QLabel(verticalWidget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Couture")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);


        horizontalLayout_3->addWidget(verticalWidget_2);

        verticalWidget_3 = new QWidget(widget);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setMinimumSize(QSize(250, 200));
        verticalWidget_3->setMaximumSize(QSize(300, 250));
        verticalWidget_3->setStyleSheet(QString::fromUtf8("*{background-color:#dddddd;\n"
"border-radius:15px;\n"
"transition:1s;\n"
"}\n"
"\n"
"*:hover {\n"
"  background-color: #C8DBBE;\n"
"}\n"
"\n"
""));
        verticalLayout_5 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        btnEntreeProd = new QPushButton(verticalWidget_3);
        btnEntreeProd->setObjectName("btnEntreeProd");
        btnEntreeProd->setCursor(QCursor(Qt::PointingHandCursor));
        btnEntreeProd->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MiseAJour/img/importer.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEntreeProd->setIcon(icon3);
        btnEntreeProd->setIconSize(QSize(150, 150));

        verticalLayout_5->addWidget(btnEntreeProd);

        label_3 = new QLabel(verticalWidget_3);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);


        horizontalLayout_3->addWidget(verticalWidget_3);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(main);

        MiseAJourClass->setCentralWidget(centralWidget);

        retranslateUi(MiseAJourClass);

        QMetaObject::connectSlotsByName(MiseAJourClass);
    } // setupUi

    void retranslateUi(QMainWindow *MiseAJourClass)
    {
        MiseAJourClass->setWindowTitle(QCoreApplication::translate("MiseAJourClass", "Mise \303\240 jour", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("MiseAJourClass", "MISE A JOUR DU STOCK DE PRODUIT", nullptr));
        btnSortieProd->setText(QString());
        label_2->setText(QCoreApplication::translate("MiseAJourClass", "SORTIE DE PRODUIT", nullptr));
        btnEntreeProd->setText(QString());
        label_3->setText(QCoreApplication::translate("MiseAJourClass", "ENTREE DE PRODUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiseAJourClass: public Ui_MiseAJourClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISEAJOUR_H
