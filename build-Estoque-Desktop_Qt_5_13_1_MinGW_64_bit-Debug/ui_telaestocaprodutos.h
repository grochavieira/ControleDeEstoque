/********************************************************************************
** Form generated from reading UI file 'telaestocaprodutos.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAESTOCAPRODUTOS_H
#define UI_TELAESTOCAPRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_telaEstocaProdutos
{
public:
    QLabel *lblCaixa19;
    QLabel *lblCaixa5;
    QLabel *lblProduto8;
    QPushButton *buttonEnviaTudo;
    QLabel *lblProduto13;
    QLabel *lblCaixa7;
    QLabel *label_9;
    QLabel *lblProduto3;
    QLabel *lblProduto7;
    QLabel *lblProduto16;
    QLabel *lblProduto20;
    QPushButton *buttonEnviaProduto;
    QLabel *lblProduto14;
    QLabel *lblProduto4;
    QLabel *lblProduto6;
    QLabel *lblCaixa16;
    QLabel *lblProduto12;
    QLabel *lblCaminhao;
    QLabel *lblCaixa15;
    QLabel *label_7;
    QLabel *lblCaixa4;
    QLabel *lblProduto2;
    QLabel *lblCaixa9;
    QLabel *lblProduto18;
    QLabel *lblCaixa18;
    QTableWidget *twPilhaEstoque;
    QLabel *lblProduto9;
    QLabel *label_8;
    QLabel *lblProduto1;
    QLabel *lblCaixa11;
    QLabel *lblCaixa20;
    QLabel *lblCaixa12;
    QLabel *lblCaixa3;
    QLabel *lblProduto10;
    QLabel *lblProduto11;
    QLabel *lblCaixa2;
    QLabel *lblCaixa13;
    QLabel *lblProduto15;
    QLabel *lblCaixa1;
    QLabel *lblCaixa17;
    QLabel *lblProduto19;
    QLabel *lblCaixa10;
    QLabel *lblProduto5;
    QLabel *lblProduto17;
    QLabel *lblCaixa8;
    QLabel *lblCaixa6;
    QTableWidget *twListaPrioridade;
    QLabel *lblCaixa14;
    QPushButton *buttonEnviaCaminhao;

    void setupUi(QDialog *telaEstocaProdutos)
    {
        if (telaEstocaProdutos->objectName().isEmpty())
            telaEstocaProdutos->setObjectName(QString::fromUtf8("telaEstocaProdutos"));
        telaEstocaProdutos->resize(1228, 527);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        telaEstocaProdutos->setFont(font);
        lblCaixa19 = new QLabel(telaEstocaProdutos);
        lblCaixa19->setObjectName(QString::fromUtf8("lblCaixa19"));
        lblCaixa19->setGeometry(QRect(1010, 160, 61, 71));
        lblCaixa19->setStyleSheet(QString::fromUtf8(""));
        lblCaixa19->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa19->setScaledContents(true);
        lblCaixa5 = new QLabel(telaEstocaProdutos);
        lblCaixa5->setObjectName(QString::fromUtf8("lblCaixa5"));
        lblCaixa5->setGeometry(QRect(770, 300, 61, 71));
        lblCaixa5->setStyleSheet(QString::fromUtf8(""));
        lblCaixa5->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa5->setScaledContents(true);
        lblProduto8 = new QLabel(telaEstocaProdutos);
        lblProduto8->setObjectName(QString::fromUtf8("lblProduto8"));
        lblProduto8->setGeometry(QRect(770, 130, 61, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(6);
        font1.setBold(true);
        font1.setWeight(75);
        lblProduto8->setFont(font1);
        lblProduto8->setAlignment(Qt::AlignCenter);
        buttonEnviaTudo = new QPushButton(telaEstocaProdutos);
        buttonEnviaTudo->setObjectName(QString::fromUtf8("buttonEnviaTudo"));
        buttonEnviaTudo->setGeometry(QRect(10, 470, 311, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Caviar Dreams"));
        font2.setPointSize(12);
        buttonEnviaTudo->setFont(font2);
        buttonEnviaTudo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        lblProduto13 = new QLabel(telaEstocaProdutos);
        lblProduto13->setObjectName(QString::fromUtf8("lblProduto13"));
        lblProduto13->setGeometry(QRect(930, 340, 61, 21));
        lblProduto13->setFont(font1);
        lblProduto13->setAlignment(Qt::AlignCenter);
        lblCaixa7 = new QLabel(telaEstocaProdutos);
        lblCaixa7->setObjectName(QString::fromUtf8("lblCaixa7"));
        lblCaixa7->setGeometry(QRect(770, 160, 61, 71));
        lblCaixa7->setStyleSheet(QString::fromUtf8(""));
        lblCaixa7->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa7->setScaledContents(true);
        label_9 = new QLabel(telaEstocaProdutos);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 10, 251, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        lblProduto3 = new QLabel(telaEstocaProdutos);
        lblProduto3->setObjectName(QString::fromUtf8("lblProduto3"));
        lblProduto3->setGeometry(QRect(690, 200, 61, 21));
        lblProduto3->setFont(font1);
        lblProduto3->setAlignment(Qt::AlignCenter);
        lblProduto7 = new QLabel(telaEstocaProdutos);
        lblProduto7->setObjectName(QString::fromUtf8("lblProduto7"));
        lblProduto7->setGeometry(QRect(770, 200, 61, 21));
        lblProduto7->setFont(font1);
        lblProduto7->setAlignment(Qt::AlignCenter);
        lblProduto16 = new QLabel(telaEstocaProdutos);
        lblProduto16->setObjectName(QString::fromUtf8("lblProduto16"));
        lblProduto16->setGeometry(QRect(930, 130, 61, 21));
        lblProduto16->setFont(font1);
        lblProduto16->setAlignment(Qt::AlignCenter);
        lblProduto20 = new QLabel(telaEstocaProdutos);
        lblProduto20->setObjectName(QString::fromUtf8("lblProduto20"));
        lblProduto20->setGeometry(QRect(1010, 130, 61, 21));
        lblProduto20->setFont(font1);
        lblProduto20->setAlignment(Qt::AlignCenter);
        buttonEnviaProduto = new QPushButton(telaEstocaProdutos);
        buttonEnviaProduto->setObjectName(QString::fromUtf8("buttonEnviaProduto"));
        buttonEnviaProduto->setGeometry(QRect(10, 420, 311, 41));
        buttonEnviaProduto->setFont(font2);
        buttonEnviaProduto->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        lblProduto14 = new QLabel(telaEstocaProdutos);
        lblProduto14->setObjectName(QString::fromUtf8("lblProduto14"));
        lblProduto14->setGeometry(QRect(930, 270, 61, 21));
        lblProduto14->setFont(font1);
        lblProduto14->setAlignment(Qt::AlignCenter);
        lblProduto4 = new QLabel(telaEstocaProdutos);
        lblProduto4->setObjectName(QString::fromUtf8("lblProduto4"));
        lblProduto4->setGeometry(QRect(690, 130, 61, 21));
        lblProduto4->setFont(font1);
        lblProduto4->setAlignment(Qt::AlignCenter);
        lblProduto6 = new QLabel(telaEstocaProdutos);
        lblProduto6->setObjectName(QString::fromUtf8("lblProduto6"));
        lblProduto6->setGeometry(QRect(770, 270, 61, 21));
        lblProduto6->setFont(font1);
        lblProduto6->setAlignment(Qt::AlignCenter);
        lblCaixa16 = new QLabel(telaEstocaProdutos);
        lblCaixa16->setObjectName(QString::fromUtf8("lblCaixa16"));
        lblCaixa16->setGeometry(QRect(930, 90, 61, 71));
        lblCaixa16->setStyleSheet(QString::fromUtf8(""));
        lblCaixa16->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa16->setScaledContents(true);
        lblProduto12 = new QLabel(telaEstocaProdutos);
        lblProduto12->setObjectName(QString::fromUtf8("lblProduto12"));
        lblProduto12->setGeometry(QRect(850, 130, 61, 21));
        lblProduto12->setFont(font1);
        lblProduto12->setAlignment(Qt::AlignCenter);
        lblCaminhao = new QLabel(telaEstocaProdutos);
        lblCaminhao->setObjectName(QString::fromUtf8("lblCaminhao"));
        lblCaminhao->setEnabled(true);
        lblCaminhao->setGeometry(QRect(660, 70, 551, 391));
        lblCaminhao->setAutoFillBackground(false);
        lblCaminhao->setStyleSheet(QString::fromUtf8(""));
        lblCaminhao->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/truck.png")));
        lblCaminhao->setScaledContents(false);
        lblCaixa15 = new QLabel(telaEstocaProdutos);
        lblCaixa15->setObjectName(QString::fromUtf8("lblCaixa15"));
        lblCaixa15->setGeometry(QRect(930, 160, 61, 71));
        lblCaixa15->setStyleSheet(QString::fromUtf8(""));
        lblCaixa15->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa15->setScaledContents(true);
        label_7 = new QLabel(telaEstocaProdutos);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 10, 191, 21));
        label_7->setFont(font3);
        lblCaixa4 = new QLabel(telaEstocaProdutos);
        lblCaixa4->setObjectName(QString::fromUtf8("lblCaixa4"));
        lblCaixa4->setGeometry(QRect(690, 90, 61, 71));
        lblCaixa4->setStyleSheet(QString::fromUtf8(""));
        lblCaixa4->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa4->setScaledContents(true);
        lblProduto2 = new QLabel(telaEstocaProdutos);
        lblProduto2->setObjectName(QString::fromUtf8("lblProduto2"));
        lblProduto2->setGeometry(QRect(690, 270, 61, 21));
        lblProduto2->setFont(font1);
        lblProduto2->setAlignment(Qt::AlignCenter);
        lblCaixa9 = new QLabel(telaEstocaProdutos);
        lblCaixa9->setObjectName(QString::fromUtf8("lblCaixa9"));
        lblCaixa9->setGeometry(QRect(850, 300, 61, 71));
        lblCaixa9->setStyleSheet(QString::fromUtf8(""));
        lblCaixa9->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa9->setScaledContents(true);
        lblProduto18 = new QLabel(telaEstocaProdutos);
        lblProduto18->setObjectName(QString::fromUtf8("lblProduto18"));
        lblProduto18->setGeometry(QRect(1010, 270, 61, 21));
        lblProduto18->setFont(font1);
        lblProduto18->setAlignment(Qt::AlignCenter);
        lblCaixa18 = new QLabel(telaEstocaProdutos);
        lblCaixa18->setObjectName(QString::fromUtf8("lblCaixa18"));
        lblCaixa18->setGeometry(QRect(1010, 230, 61, 71));
        lblCaixa18->setStyleSheet(QString::fromUtf8(""));
        lblCaixa18->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa18->setScaledContents(true);
        twPilhaEstoque = new QTableWidget(telaEstocaProdutos);
        twPilhaEstoque->setObjectName(QString::fromUtf8("twPilhaEstoque"));
        twPilhaEstoque->setGeometry(QRect(330, 30, 311, 381));
        QFont font4;
        font4.setPointSize(12);
        twPilhaEstoque->setFont(font4);
        twPilhaEstoque->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        lblProduto9 = new QLabel(telaEstocaProdutos);
        lblProduto9->setObjectName(QString::fromUtf8("lblProduto9"));
        lblProduto9->setGeometry(QRect(850, 340, 61, 21));
        lblProduto9->setFont(font1);
        lblProduto9->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(telaEstocaProdutos);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(-200, -60, 1431, 641));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Pedidos 2.png")));
        label_8->setScaledContents(true);
        lblProduto1 = new QLabel(telaEstocaProdutos);
        lblProduto1->setObjectName(QString::fromUtf8("lblProduto1"));
        lblProduto1->setGeometry(QRect(690, 340, 61, 21));
        lblProduto1->setFont(font1);
        lblProduto1->setAlignment(Qt::AlignCenter);
        lblCaixa11 = new QLabel(telaEstocaProdutos);
        lblCaixa11->setObjectName(QString::fromUtf8("lblCaixa11"));
        lblCaixa11->setGeometry(QRect(850, 160, 61, 71));
        lblCaixa11->setStyleSheet(QString::fromUtf8(""));
        lblCaixa11->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa11->setScaledContents(true);
        lblCaixa20 = new QLabel(telaEstocaProdutos);
        lblCaixa20->setObjectName(QString::fromUtf8("lblCaixa20"));
        lblCaixa20->setGeometry(QRect(1010, 90, 61, 71));
        lblCaixa20->setStyleSheet(QString::fromUtf8(""));
        lblCaixa20->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa20->setScaledContents(true);
        lblCaixa12 = new QLabel(telaEstocaProdutos);
        lblCaixa12->setObjectName(QString::fromUtf8("lblCaixa12"));
        lblCaixa12->setGeometry(QRect(850, 90, 61, 71));
        lblCaixa12->setStyleSheet(QString::fromUtf8(""));
        lblCaixa12->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa12->setScaledContents(true);
        lblCaixa3 = new QLabel(telaEstocaProdutos);
        lblCaixa3->setObjectName(QString::fromUtf8("lblCaixa3"));
        lblCaixa3->setGeometry(QRect(690, 160, 61, 71));
        lblCaixa3->setStyleSheet(QString::fromUtf8(""));
        lblCaixa3->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa3->setScaledContents(true);
        lblProduto10 = new QLabel(telaEstocaProdutos);
        lblProduto10->setObjectName(QString::fromUtf8("lblProduto10"));
        lblProduto10->setGeometry(QRect(850, 270, 61, 21));
        lblProduto10->setFont(font1);
        lblProduto10->setAlignment(Qt::AlignCenter);
        lblProduto11 = new QLabel(telaEstocaProdutos);
        lblProduto11->setObjectName(QString::fromUtf8("lblProduto11"));
        lblProduto11->setGeometry(QRect(850, 200, 61, 21));
        lblProduto11->setFont(font1);
        lblProduto11->setAlignment(Qt::AlignCenter);
        lblCaixa2 = new QLabel(telaEstocaProdutos);
        lblCaixa2->setObjectName(QString::fromUtf8("lblCaixa2"));
        lblCaixa2->setGeometry(QRect(690, 230, 61, 71));
        lblCaixa2->setStyleSheet(QString::fromUtf8(""));
        lblCaixa2->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa2->setScaledContents(true);
        lblCaixa13 = new QLabel(telaEstocaProdutos);
        lblCaixa13->setObjectName(QString::fromUtf8("lblCaixa13"));
        lblCaixa13->setGeometry(QRect(930, 300, 61, 71));
        lblCaixa13->setStyleSheet(QString::fromUtf8(""));
        lblCaixa13->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa13->setScaledContents(true);
        lblProduto15 = new QLabel(telaEstocaProdutos);
        lblProduto15->setObjectName(QString::fromUtf8("lblProduto15"));
        lblProduto15->setGeometry(QRect(930, 200, 61, 21));
        lblProduto15->setFont(font1);
        lblProduto15->setAlignment(Qt::AlignCenter);
        lblCaixa1 = new QLabel(telaEstocaProdutos);
        lblCaixa1->setObjectName(QString::fromUtf8("lblCaixa1"));
        lblCaixa1->setGeometry(QRect(690, 300, 61, 71));
        lblCaixa1->setStyleSheet(QString::fromUtf8(""));
        lblCaixa1->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa1->setScaledContents(true);
        lblCaixa17 = new QLabel(telaEstocaProdutos);
        lblCaixa17->setObjectName(QString::fromUtf8("lblCaixa17"));
        lblCaixa17->setGeometry(QRect(1010, 300, 61, 71));
        lblCaixa17->setStyleSheet(QString::fromUtf8(""));
        lblCaixa17->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa17->setScaledContents(true);
        lblProduto19 = new QLabel(telaEstocaProdutos);
        lblProduto19->setObjectName(QString::fromUtf8("lblProduto19"));
        lblProduto19->setGeometry(QRect(1010, 200, 61, 21));
        lblProduto19->setFont(font1);
        lblProduto19->setAlignment(Qt::AlignCenter);
        lblCaixa10 = new QLabel(telaEstocaProdutos);
        lblCaixa10->setObjectName(QString::fromUtf8("lblCaixa10"));
        lblCaixa10->setGeometry(QRect(850, 230, 61, 71));
        lblCaixa10->setStyleSheet(QString::fromUtf8(""));
        lblCaixa10->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa10->setScaledContents(true);
        lblProduto5 = new QLabel(telaEstocaProdutos);
        lblProduto5->setObjectName(QString::fromUtf8("lblProduto5"));
        lblProduto5->setGeometry(QRect(770, 340, 61, 21));
        lblProduto5->setFont(font1);
        lblProduto5->setAlignment(Qt::AlignCenter);
        lblProduto17 = new QLabel(telaEstocaProdutos);
        lblProduto17->setObjectName(QString::fromUtf8("lblProduto17"));
        lblProduto17->setGeometry(QRect(1010, 340, 61, 21));
        lblProduto17->setFont(font1);
        lblProduto17->setAlignment(Qt::AlignCenter);
        lblCaixa8 = new QLabel(telaEstocaProdutos);
        lblCaixa8->setObjectName(QString::fromUtf8("lblCaixa8"));
        lblCaixa8->setGeometry(QRect(770, 90, 61, 71));
        lblCaixa8->setStyleSheet(QString::fromUtf8(""));
        lblCaixa8->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa8->setScaledContents(true);
        lblCaixa6 = new QLabel(telaEstocaProdutos);
        lblCaixa6->setObjectName(QString::fromUtf8("lblCaixa6"));
        lblCaixa6->setGeometry(QRect(770, 230, 61, 71));
        lblCaixa6->setStyleSheet(QString::fromUtf8(""));
        lblCaixa6->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa6->setScaledContents(true);
        twListaPrioridade = new QTableWidget(telaEstocaProdutos);
        twListaPrioridade->setObjectName(QString::fromUtf8("twListaPrioridade"));
        twListaPrioridade->setGeometry(QRect(10, 30, 311, 381));
        twListaPrioridade->setFont(font4);
        twListaPrioridade->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        lblCaixa14 = new QLabel(telaEstocaProdutos);
        lblCaixa14->setObjectName(QString::fromUtf8("lblCaixa14"));
        lblCaixa14->setGeometry(QRect(930, 230, 61, 71));
        lblCaixa14->setStyleSheet(QString::fromUtf8(""));
        lblCaixa14->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa14->setScaledContents(true);
        buttonEnviaCaminhao = new QPushButton(telaEstocaProdutos);
        buttonEnviaCaminhao->setObjectName(QString::fromUtf8("buttonEnviaCaminhao"));
        buttonEnviaCaminhao->setGeometry(QRect(330, 420, 311, 41));
        buttonEnviaCaminhao->setFont(font2);
        buttonEnviaCaminhao->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgba(0,0,0,60);\n"
"	color:white;\n"
"	border-style: solid;\n"
"	border-width:3px;\n"
"	border-color: white;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgba(255,255,255,60);\n"
"	color:black;\n"
"	border-style: solid;\n"
"	border-width:4px;\n"
"	border-color: black;\n"
"	border-radius: 6px;\n"
"\n"
"}"));
        label_8->raise();
        lblCaminhao->raise();
        lblCaixa19->raise();
        lblCaixa5->raise();
        buttonEnviaTudo->raise();
        lblCaixa7->raise();
        label_9->raise();
        buttonEnviaProduto->raise();
        lblCaixa16->raise();
        lblCaixa15->raise();
        label_7->raise();
        lblCaixa4->raise();
        lblCaixa9->raise();
        lblCaixa18->raise();
        twPilhaEstoque->raise();
        lblCaixa11->raise();
        lblCaixa20->raise();
        lblCaixa12->raise();
        lblCaixa3->raise();
        lblCaixa2->raise();
        lblCaixa13->raise();
        lblCaixa1->raise();
        lblCaixa17->raise();
        lblCaixa10->raise();
        lblCaixa8->raise();
        lblCaixa6->raise();
        twListaPrioridade->raise();
        lblCaixa14->raise();
        buttonEnviaCaminhao->raise();
        lblProduto4->raise();
        lblProduto1->raise();
        lblProduto6->raise();
        lblProduto3->raise();
        lblProduto17->raise();
        lblProduto14->raise();
        lblProduto20->raise();
        lblProduto5->raise();
        lblProduto7->raise();
        lblProduto19->raise();
        lblProduto18->raise();
        lblProduto11->raise();
        lblProduto10->raise();
        lblProduto13->raise();
        lblProduto16->raise();
        lblProduto12->raise();
        lblProduto15->raise();
        lblProduto9->raise();
        lblProduto2->raise();
        lblProduto8->raise();

        retranslateUi(telaEstocaProdutos);

        QMetaObject::connectSlotsByName(telaEstocaProdutos);
    } // setupUi

    void retranslateUi(QDialog *telaEstocaProdutos)
    {
        telaEstocaProdutos->setWindowTitle(QCoreApplication::translate("telaEstocaProdutos", "Dialog", nullptr));
        lblCaixa19->setText(QString());
        lblCaixa5->setText(QString());
        lblProduto8->setText(QString());
        buttonEnviaTudo->setText(QCoreApplication::translate("telaEstocaProdutos", "ENVIAR TUDO PARA REPOSI\303\207\303\203O", nullptr));
        lblProduto13->setText(QString());
        lblCaixa7->setText(QString());
        label_9->setText(QCoreApplication::translate("telaEstocaProdutos", "PRODUTOS DO CAMINH\303\203O", nullptr));
        lblProduto3->setText(QString());
        lblProduto7->setText(QString());
        lblProduto16->setText(QString());
        lblProduto20->setText(QString());
        buttonEnviaProduto->setText(QCoreApplication::translate("telaEstocaProdutos", "ENVIAR PARA O CAMINH\303\203O", nullptr));
        lblProduto14->setText(QString());
        lblProduto4->setText(QString());
        lblProduto6->setText(QString());
        lblCaixa16->setText(QString());
        lblProduto12->setText(QString());
        lblCaminhao->setText(QString());
        lblCaixa15->setText(QString());
        label_7->setText(QCoreApplication::translate("telaEstocaProdutos", "LISTA DE PRIORIDADE", nullptr));
        lblCaixa4->setText(QString());
        lblProduto2->setText(QString());
        lblCaixa9->setText(QString());
        lblProduto18->setText(QString());
        lblCaixa18->setText(QString());
        lblProduto9->setText(QString());
        label_8->setText(QString());
        lblProduto1->setText(QString());
        lblCaixa11->setText(QString());
        lblCaixa20->setText(QString());
        lblCaixa12->setText(QString());
        lblCaixa3->setText(QString());
        lblProduto10->setText(QString());
        lblProduto11->setText(QString());
        lblCaixa2->setText(QString());
        lblCaixa13->setText(QString());
        lblProduto15->setText(QString());
        lblCaixa1->setText(QString());
        lblCaixa17->setText(QString());
        lblProduto19->setText(QString());
        lblCaixa10->setText(QString());
        lblProduto5->setText(QString());
        lblProduto17->setText(QString());
        lblCaixa8->setText(QString());
        lblCaixa6->setText(QString());
        lblCaixa14->setText(QString());
        buttonEnviaCaminhao->setText(QCoreApplication::translate("telaEstocaProdutos", "ENVIAR PEDIDOS PARA REPOSI\303\207\303\203O", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaEstocaProdutos: public Ui_telaEstocaProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAESTOCAPRODUTOS_H
