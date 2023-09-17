/********************************************************************************
** Form generated from reading UI file 'ModificationSuppressionBon.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICATIONSUPPRESSIONBON_H
#define UI_MODIFICATIONSUPPRESSIONBON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModificationSuppressionBonClass
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
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QWidget *verticalWidget1;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rbEntree;
    QRadioButton *rbSortie;
    QLabel *label_2;
    QFrame *frame_3;
    QLineEdit *leRecherche;
    QPushButton *btnRecherche;
    QWidget *verticalWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *verticalWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbNomProduit;
    QWidget *verticalWidget4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnSuppr;
    QWidget *block_modification;
    QVBoxLayout *verticalLayout_8;
    QWidget *verticalWidget_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_5;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *leQte;
    QWidget *verticalWidget_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnValider;

    void setupUi(QMainWindow *ModificationSuppressionBonClass)
    {
        if (ModificationSuppressionBonClass->objectName().isEmpty())
            ModificationSuppressionBonClass->setObjectName("ModificationSuppressionBonClass");
        ModificationSuppressionBonClass->resize(1000, 670);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MenuPrincipal/img/editing.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModificationSuppressionBonClass->setWindowIcon(icon);
        centralWidget = new QWidget(ModificationSuppressionBonClass);
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
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/ModificationProduit/img/modification.png);\n"
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
        frame_2->setMinimumSize(QSize(0, 70));
        frame_2->setMaximumSize(QSize(16777215, 70));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        horizontalWidget1 = new QWidget(frame_2);
        horizontalWidget1->setObjectName("horizontalWidget1");
        horizontalWidget1->setMinimumSize(QSize(350, 60));
        horizontalWidget1->setMaximumSize(QSize(350, 60));
        horizontalLayout_8 = new QHBoxLayout(horizontalWidget1);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        label_8 = new QLabel(horizontalWidget1);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(90, 0));
        label_8->setMaximumSize(QSize(90, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font1.setPointSize(14);
        font1.setBold(false);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("padding-top: 5px;"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_8);

        verticalWidget1 = new QWidget(horizontalWidget1);
        verticalWidget1->setObjectName("verticalWidget1");
        verticalWidget1->setMinimumSize(QSize(150, 45));
        verticalWidget1->setMaximumSize(QSize(150, 45));
        verticalWidget1->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(verticalWidget1);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(-1, 0, -1, 15);
        rbEntree = new QRadioButton(verticalWidget1);
        rbEntree->setObjectName("rbEntree");
        rbEntree->setMinimumSize(QSize(100, 20));
        rbEntree->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font2.setPointSize(12);
        rbEntree->setFont(font2);

        verticalLayout_6->addWidget(rbEntree);

        rbSortie = new QRadioButton(verticalWidget1);
        rbSortie->setObjectName("rbSortie");
        rbSortie->setMinimumSize(QSize(100, 20));
        rbSortie->setMaximumSize(QSize(100, 16777215));
        rbSortie->setFont(font2);

        verticalLayout_6->addWidget(rbSortie);


        horizontalLayout_8->addWidget(verticalWidget1);


        horizontalLayout_3->addWidget(horizontalWidget1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(150, 45));
        label_2->setMaximumSize(QSize(150, 40));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Aveny T WEB")});
        font3.setPointSize(14);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(440, 0));
        frame_3->setMaximumSize(QSize(440, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        leRecherche = new QLineEdit(frame_3);
        leRecherche->setObjectName("leRecherche");
        leRecherche->setGeometry(QRect(0, 10, 440, 40));
        QFont font4;
        font4.setPointSize(11);
        leRecherche->setFont(font4);
        leRecherche->setCursor(QCursor(Qt::IBeamCursor));
        leRecherche->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #ffffff;\n"
"padding-left: 10px;"));
        btnRecherche = new QPushButton(frame_3);
        btnRecherche->setObjectName("btnRecherche");
        btnRecherche->setGeometry(QRect(389, 10, 51, 40));
        btnRecherche->setCursor(QCursor(Qt::PointingHandCursor));
        btnRecherche->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/AjoutProduit/img/loupe.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRecherche->setIcon(icon2);
        btnRecherche->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(frame_3);


        verticalLayout->addWidget(frame_2);

        verticalWidget2 = new QWidget(main);
        verticalWidget2->setObjectName("verticalWidget2");
        verticalWidget2->setMinimumSize(QSize(0, 225));
        verticalWidget2->setStyleSheet(QString::fromUtf8("background-color: #D6E4E5;\n"
"border-radius: 10px"));
        verticalLayout_5 = new QVBoxLayout(verticalWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, -1, -1, 9);
        label_4 = new QLabel(verticalWidget2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 45));
        label_4->setMaximumSize(QSize(16777215, 45));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Couture")});
        font5.setPointSize(14);
        font5.setBold(true);
        label_4->setFont(font5);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        label_6 = new QLabel(verticalWidget2);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 40));
        label_6->setMaximumSize(QSize(16777215, 40));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        verticalWidget3 = new QWidget(verticalWidget2);
        verticalWidget3->setObjectName("verticalWidget3");
        verticalWidget3->setMinimumSize(QSize(0, 65));
        verticalWidget3->setMaximumSize(QSize(16777215, 65));
        horizontalLayout_6 = new QHBoxLayout(verticalWidget3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lbNomProduit = new QLabel(verticalWidget3);
        lbNomProduit->setObjectName("lbNomProduit");
        lbNomProduit->setMinimumSize(QSize(200, 45));
        lbNomProduit->setMaximumSize(QSize(200, 45));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        lbNomProduit->setFont(font6);
        lbNomProduit->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"border-radius: 5px;"));
        lbNomProduit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lbNomProduit);


        verticalLayout_5->addWidget(verticalWidget3);

        verticalWidget4 = new QWidget(verticalWidget2);
        verticalWidget4->setObjectName("verticalWidget4");
        verticalWidget4->setMinimumSize(QSize(0, 65));
        verticalWidget4->setMaximumSize(QSize(16777215, 65));
        horizontalLayout_7 = new QHBoxLayout(verticalWidget4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        btnSuppr = new QPushButton(verticalWidget4);
        btnSuppr->setObjectName("btnSuppr");
        btnSuppr->setMinimumSize(QSize(150, 40));
        btnSuppr->setMaximumSize(QSize(150, 40));
        btnSuppr->setSizeIncrement(QSize(0, 0));
        btnSuppr->setFont(font3);
        btnSuppr->setCursor(QCursor(Qt::PointingHandCursor));
        btnSuppr->setStyleSheet(QString::fromUtf8("#btnSuppr{  \n"
"color: #EFE8E8;\n"
"background-color: #935057;\n"
"border-radius: 10px;\n"
"padding-top: 4px;\n"
"}\n"
"#btnSuppr:hover {\n"
"  background-color: #9F8772;\n"
"  color: white; \n"
"}\n"
"\n"
""));

        horizontalLayout_7->addWidget(btnSuppr);


        verticalLayout_5->addWidget(verticalWidget4);


        verticalLayout->addWidget(verticalWidget2);

        block_modification = new QWidget(main);
        block_modification->setObjectName("block_modification");
        block_modification->setStyleSheet(QString::fromUtf8("background-color: #D6E4E5;\n"
"border-radius: 10px"));
        verticalLayout_8 = new QVBoxLayout(block_modification);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(-1, -1, -1, 10);
        verticalWidget_5 = new QWidget(block_modification);
        verticalWidget_5->setObjectName("verticalWidget_5");
        verticalWidget_5->setMinimumSize(QSize(0, 160));
        verticalWidget_5->setMaximumSize(QSize(16777215, 150));
        verticalLayout_10 = new QVBoxLayout(verticalWidget_5);
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(-1, 0, -1, -1);
        label_5 = new QLabel(verticalWidget_5);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 45));
        label_5->setMaximumSize(QSize(16777215, 45));
        label_5->setFont(font5);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_5);

        label_3 = new QLabel(verticalWidget_5);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 40));
        label_3->setMaximumSize(QSize(16777215, 40));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_3);

        widget = new QWidget(verticalWidget_5);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 65));
        widget->setMaximumSize(QSize(16777215, 65));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        leQte = new QLineEdit(widget);
        leQte->setObjectName("leQte");
        leQte->setMinimumSize(QSize(150, 45));
        leQte->setMaximumSize(QSize(150, 45));
        leQte->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 5px;\n"
"font: 12pt \"Segoe UI\";"));
        leQte->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(leQte);


        verticalLayout_10->addWidget(widget);


        verticalLayout_8->addWidget(verticalWidget_5);

        verticalWidget_6 = new QWidget(block_modification);
        verticalWidget_6->setObjectName("verticalWidget_6");
        verticalWidget_6->setMinimumSize(QSize(0, 65));
        verticalWidget_6->setMaximumSize(QSize(16777215, 65));
        horizontalLayout_5 = new QHBoxLayout(verticalWidget_6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, -1, 0, -1);
        btnValider = new QPushButton(verticalWidget_6);
        btnValider->setObjectName("btnValider");
        btnValider->setMinimumSize(QSize(125, 40));
        btnValider->setMaximumSize(QSize(125, 40));
        btnValider->setFont(font3);
        btnValider->setCursor(QCursor(Qt::PointingHandCursor));
        btnValider->setStyleSheet(QString::fromUtf8("#btnValider{  \n"
"color: #EFE8E8;\n"
"background-color: #935057;\n"
"border-radius: 10px;\n"
"padding-top: 4px;\n"
"}\n"
"#btnValider:hover {\n"
"  background-color: #9F8772;\n"
"  color: white; \n"
"}\n"
"\n"
""));

        horizontalLayout_5->addWidget(btnValider);


        verticalLayout_8->addWidget(verticalWidget_6);


        verticalLayout->addWidget(block_modification);


        verticalLayout_2->addWidget(main);

        ModificationSuppressionBonClass->setCentralWidget(centralWidget);

        retranslateUi(ModificationSuppressionBonClass);

        QMetaObject::connectSlotsByName(ModificationSuppressionBonClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModificationSuppressionBonClass)
    {
        ModificationSuppressionBonClass->setWindowTitle(QCoreApplication::translate("ModificationSuppressionBonClass", "Modification ou suppression de bon", nullptr));
        btnRetour->setText(QString());
        label->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "MODIFICATION OU SUPPRESSION", nullptr));
        label_8->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "Op\303\251ration", nullptr));
        rbEntree->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "Entree", nullptr));
        rbSortie->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "Sortie", nullptr));
        label_2->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "Recherche de bon", nullptr));
        leRecherche->setPlaceholderText(QCoreApplication::translate("ModificationSuppressionBonClass", "Recherche de num\303\251ro de bon ...", nullptr));
        btnRecherche->setText(QString());
        label_4->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "SUPPRESSION DE BON", nullptr));
        label_6->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "NOM DU PRODUIT", nullptr));
        lbNomProduit->setText(QString());
        btnSuppr->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "SUPPRIMER", nullptr));
        label_5->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "MODIFICATION DE BON", nullptr));
        label_3->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "ENTRER LE NOUVEAU QUANTITE", nullptr));
        btnValider->setText(QCoreApplication::translate("ModificationSuppressionBonClass", "VALIDER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificationSuppressionBonClass: public Ui_ModificationSuppressionBonClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICATIONSUPPRESSIONBON_H
