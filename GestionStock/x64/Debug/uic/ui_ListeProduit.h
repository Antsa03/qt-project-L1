/********************************************************************************
** Form generated from reading UI file 'ListeProduit.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEPRODUIT_H
#define UI_LISTEPRODUIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListeProduitClass
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
    QTableView *tableView;

    void setupUi(QMainWindow *ListeProduitClass)
    {
        if (ListeProduitClass->objectName().isEmpty())
            ListeProduitClass->setObjectName("ListeProduitClass");
        ListeProduitClass->resize(1000, 563);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MenuPrincipal/img/liste.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListeProduitClass->setWindowIcon(icon);
        centralWidget = new QWidget(ListeProduitClass);
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
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/ListeProduit/img/liste(2).png);\n"
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
        tableView = new QTableView(main);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("background-color: #DDDDDD;\n"
"border-radius: 10px;"));
        tableView->horizontalHeader()->setDefaultSectionSize(400);
        tableView->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addWidget(main);

        ListeProduitClass->setCentralWidget(centralWidget);

        retranslateUi(ListeProduitClass);

        QMetaObject::connectSlotsByName(ListeProduitClass);
    } // setupUi

    void retranslateUi(QMainWindow *ListeProduitClass)
    {
        ListeProduitClass->setWindowTitle(QCoreApplication::translate("ListeProduitClass", "Liste produit", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("ListeProduitClass", "LISTAGE DE PRODUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListeProduitClass: public Ui_ListeProduitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEPRODUIT_H
