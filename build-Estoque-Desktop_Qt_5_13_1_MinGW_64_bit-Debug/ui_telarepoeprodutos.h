/********************************************************************************
** Form generated from reading UI file 'telarepoeprodutos.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAREPOEPRODUTOS_H
#define UI_TELAREPOEPRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaRepoeProdutos
{
public:
    QPushButton *btnEnviarTudoEstoque;
    QPushButton *btnEnviarEstoque;
    QLabel *label_7;
    QTableWidget *twProdutosCaminhao;
    QPushButton *btnConcluirDescarga;
    QLabel *label_3;
    QLabel *lblCaixa6;
    QLabel *lblCaixa1;
    QLabel *lblProduto20;
    QLabel *lblProduto16;
    QLabel *lblCaixa8;
    QLabel *lblCaixa19;
    QLabel *lblCaixa5;
    QLabel *lblProduto13;
    QLabel *lblProduto6;
    QLabel *lblCaixa9;
    QLabel *lblProduto12;
    QLabel *lblProduto15;
    QLabel *lblCaixa11;
    QLabel *lblCaixa13;
    QLabel *lblProduto10;
    QLabel *lblCaixa20;
    QLabel *lblProduto5;
    QLabel *lblProduto2;
    QLabel *lblProduto1;
    QLabel *lblProduto7;
    QLabel *lblCaixa15;
    QLabel *lblCaixa18;
    QLabel *lblCaminhao;
    QLabel *lblCaixa4;
    QLabel *lblCaixa17;
    QLabel *lblProduto3;
    QLabel *lblCaixa14;
    QLabel *lblProduto11;
    QLabel *lblProduto8;
    QLabel *lblProduto14;
    QLabel *lblCaixa16;
    QLabel *lblProduto19;
    QLabel *lblProduto17;
    QLabel *lblCaixa3;
    QLabel *lblCaixa12;
    QLabel *lblCaixa7;
    QLabel *lblCaixa10;
    QLabel *lblProduto4;
    QLabel *lblProduto9;
    QLabel *lblCaixa2;
    QLabel *lblProduto18;
    QTableWidget *twProdutosDescarregados;
    QLabel *label_8;

    void setupUi(QDialog *TelaRepoeProdutos)
    {
        if (TelaRepoeProdutos->objectName().isEmpty())
            TelaRepoeProdutos->setObjectName(QString::fromUtf8("TelaRepoeProdutos"));
        TelaRepoeProdutos->resize(1201, 511);
        btnEnviarTudoEstoque = new QPushButton(TelaRepoeProdutos);
        btnEnviarTudoEstoque->setObjectName(QString::fromUtf8("btnEnviarTudoEstoque"));
        btnEnviarTudoEstoque->setGeometry(QRect(10, 460, 311, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(12);
        btnEnviarTudoEstoque->setFont(font);
        btnEnviarTudoEstoque->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnEnviarEstoque = new QPushButton(TelaRepoeProdutos);
        btnEnviarEstoque->setObjectName(QString::fromUtf8("btnEnviarEstoque"));
        btnEnviarEstoque->setGeometry(QRect(10, 410, 311, 41));
        btnEnviarEstoque->setFont(font);
        btnEnviarEstoque->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_7 = new QLabel(TelaRepoeProdutos);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 0, 221, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        twProdutosCaminhao = new QTableWidget(TelaRepoeProdutos);
        twProdutosCaminhao->setObjectName(QString::fromUtf8("twProdutosCaminhao"));
        twProdutosCaminhao->setGeometry(QRect(10, 20, 311, 381));
        QFont font2;
        font2.setPointSize(12);
        twProdutosCaminhao->setFont(font2);
        twProdutosCaminhao->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        btnConcluirDescarga = new QPushButton(TelaRepoeProdutos);
        btnConcluirDescarga->setObjectName(QString::fromUtf8("btnConcluirDescarga"));
        btnConcluirDescarga->setGeometry(QRect(880, 410, 311, 41));
        btnConcluirDescarga->setFont(font);
        btnConcluirDescarga->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_3 = new QLabel(TelaRepoeProdutos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-210, -10, 1461, 571));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Pedidos.png")));
        label_3->setScaledContents(true);
        lblCaixa6 = new QLabel(TelaRepoeProdutos);
        lblCaixa6->setObjectName(QString::fromUtf8("lblCaixa6"));
        lblCaixa6->setGeometry(QRect(430, 200, 61, 71));
        lblCaixa6->setStyleSheet(QString::fromUtf8(""));
        lblCaixa6->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa6->setScaledContents(true);
        lblCaixa1 = new QLabel(TelaRepoeProdutos);
        lblCaixa1->setObjectName(QString::fromUtf8("lblCaixa1"));
        lblCaixa1->setGeometry(QRect(350, 270, 61, 71));
        lblCaixa1->setStyleSheet(QString::fromUtf8(""));
        lblCaixa1->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa1->setScaledContents(true);
        lblProduto20 = new QLabel(TelaRepoeProdutos);
        lblProduto20->setObjectName(QString::fromUtf8("lblProduto20"));
        lblProduto20->setGeometry(QRect(670, 100, 61, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(6);
        font3.setBold(true);
        font3.setWeight(75);
        lblProduto20->setFont(font3);
        lblProduto20->setAlignment(Qt::AlignCenter);
        lblProduto16 = new QLabel(TelaRepoeProdutos);
        lblProduto16->setObjectName(QString::fromUtf8("lblProduto16"));
        lblProduto16->setGeometry(QRect(590, 100, 61, 21));
        lblProduto16->setFont(font3);
        lblProduto16->setAlignment(Qt::AlignCenter);
        lblCaixa8 = new QLabel(TelaRepoeProdutos);
        lblCaixa8->setObjectName(QString::fromUtf8("lblCaixa8"));
        lblCaixa8->setGeometry(QRect(430, 60, 61, 71));
        lblCaixa8->setStyleSheet(QString::fromUtf8(""));
        lblCaixa8->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa8->setScaledContents(true);
        lblCaixa19 = new QLabel(TelaRepoeProdutos);
        lblCaixa19->setObjectName(QString::fromUtf8("lblCaixa19"));
        lblCaixa19->setGeometry(QRect(670, 130, 61, 71));
        lblCaixa19->setStyleSheet(QString::fromUtf8(""));
        lblCaixa19->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa19->setScaledContents(true);
        lblCaixa5 = new QLabel(TelaRepoeProdutos);
        lblCaixa5->setObjectName(QString::fromUtf8("lblCaixa5"));
        lblCaixa5->setGeometry(QRect(430, 270, 61, 71));
        lblCaixa5->setStyleSheet(QString::fromUtf8(""));
        lblCaixa5->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa5->setScaledContents(true);
        lblProduto13 = new QLabel(TelaRepoeProdutos);
        lblProduto13->setObjectName(QString::fromUtf8("lblProduto13"));
        lblProduto13->setGeometry(QRect(590, 310, 61, 21));
        lblProduto13->setFont(font3);
        lblProduto13->setAlignment(Qt::AlignCenter);
        lblProduto6 = new QLabel(TelaRepoeProdutos);
        lblProduto6->setObjectName(QString::fromUtf8("lblProduto6"));
        lblProduto6->setGeometry(QRect(430, 240, 61, 21));
        lblProduto6->setFont(font3);
        lblProduto6->setAlignment(Qt::AlignCenter);
        lblCaixa9 = new QLabel(TelaRepoeProdutos);
        lblCaixa9->setObjectName(QString::fromUtf8("lblCaixa9"));
        lblCaixa9->setGeometry(QRect(510, 270, 61, 71));
        lblCaixa9->setStyleSheet(QString::fromUtf8(""));
        lblCaixa9->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa9->setScaledContents(true);
        lblProduto12 = new QLabel(TelaRepoeProdutos);
        lblProduto12->setObjectName(QString::fromUtf8("lblProduto12"));
        lblProduto12->setGeometry(QRect(510, 100, 61, 21));
        lblProduto12->setFont(font3);
        lblProduto12->setAlignment(Qt::AlignCenter);
        lblProduto15 = new QLabel(TelaRepoeProdutos);
        lblProduto15->setObjectName(QString::fromUtf8("lblProduto15"));
        lblProduto15->setGeometry(QRect(590, 170, 61, 21));
        lblProduto15->setFont(font3);
        lblProduto15->setAlignment(Qt::AlignCenter);
        lblCaixa11 = new QLabel(TelaRepoeProdutos);
        lblCaixa11->setObjectName(QString::fromUtf8("lblCaixa11"));
        lblCaixa11->setGeometry(QRect(510, 130, 61, 71));
        lblCaixa11->setStyleSheet(QString::fromUtf8(""));
        lblCaixa11->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa11->setScaledContents(true);
        lblCaixa13 = new QLabel(TelaRepoeProdutos);
        lblCaixa13->setObjectName(QString::fromUtf8("lblCaixa13"));
        lblCaixa13->setGeometry(QRect(590, 270, 61, 71));
        lblCaixa13->setStyleSheet(QString::fromUtf8(""));
        lblCaixa13->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa13->setScaledContents(true);
        lblProduto10 = new QLabel(TelaRepoeProdutos);
        lblProduto10->setObjectName(QString::fromUtf8("lblProduto10"));
        lblProduto10->setGeometry(QRect(510, 240, 61, 21));
        lblProduto10->setFont(font3);
        lblProduto10->setAlignment(Qt::AlignCenter);
        lblCaixa20 = new QLabel(TelaRepoeProdutos);
        lblCaixa20->setObjectName(QString::fromUtf8("lblCaixa20"));
        lblCaixa20->setGeometry(QRect(670, 60, 61, 71));
        lblCaixa20->setStyleSheet(QString::fromUtf8(""));
        lblCaixa20->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa20->setScaledContents(true);
        lblProduto5 = new QLabel(TelaRepoeProdutos);
        lblProduto5->setObjectName(QString::fromUtf8("lblProduto5"));
        lblProduto5->setGeometry(QRect(430, 310, 61, 21));
        lblProduto5->setFont(font3);
        lblProduto5->setAlignment(Qt::AlignCenter);
        lblProduto2 = new QLabel(TelaRepoeProdutos);
        lblProduto2->setObjectName(QString::fromUtf8("lblProduto2"));
        lblProduto2->setGeometry(QRect(350, 240, 61, 21));
        lblProduto2->setFont(font3);
        lblProduto2->setAlignment(Qt::AlignCenter);
        lblProduto1 = new QLabel(TelaRepoeProdutos);
        lblProduto1->setObjectName(QString::fromUtf8("lblProduto1"));
        lblProduto1->setGeometry(QRect(350, 310, 61, 21));
        lblProduto1->setFont(font3);
        lblProduto1->setAlignment(Qt::AlignCenter);
        lblProduto7 = new QLabel(TelaRepoeProdutos);
        lblProduto7->setObjectName(QString::fromUtf8("lblProduto7"));
        lblProduto7->setGeometry(QRect(430, 170, 61, 21));
        lblProduto7->setFont(font3);
        lblProduto7->setAlignment(Qt::AlignCenter);
        lblCaixa15 = new QLabel(TelaRepoeProdutos);
        lblCaixa15->setObjectName(QString::fromUtf8("lblCaixa15"));
        lblCaixa15->setGeometry(QRect(590, 130, 61, 71));
        lblCaixa15->setStyleSheet(QString::fromUtf8(""));
        lblCaixa15->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa15->setScaledContents(true);
        lblCaixa18 = new QLabel(TelaRepoeProdutos);
        lblCaixa18->setObjectName(QString::fromUtf8("lblCaixa18"));
        lblCaixa18->setGeometry(QRect(670, 200, 61, 71));
        lblCaixa18->setStyleSheet(QString::fromUtf8(""));
        lblCaixa18->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa18->setScaledContents(true);
        lblCaminhao = new QLabel(TelaRepoeProdutos);
        lblCaminhao->setObjectName(QString::fromUtf8("lblCaminhao"));
        lblCaminhao->setGeometry(QRect(330, 40, 541, 401));
        lblCaminhao->setStyleSheet(QString::fromUtf8(""));
        lblCaminhao->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/truck.png")));
        lblCaixa4 = new QLabel(TelaRepoeProdutos);
        lblCaixa4->setObjectName(QString::fromUtf8("lblCaixa4"));
        lblCaixa4->setGeometry(QRect(350, 60, 61, 71));
        lblCaixa4->setStyleSheet(QString::fromUtf8(""));
        lblCaixa4->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa4->setScaledContents(true);
        lblCaixa17 = new QLabel(TelaRepoeProdutos);
        lblCaixa17->setObjectName(QString::fromUtf8("lblCaixa17"));
        lblCaixa17->setGeometry(QRect(670, 270, 61, 71));
        lblCaixa17->setStyleSheet(QString::fromUtf8(""));
        lblCaixa17->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa17->setScaledContents(true);
        lblProduto3 = new QLabel(TelaRepoeProdutos);
        lblProduto3->setObjectName(QString::fromUtf8("lblProduto3"));
        lblProduto3->setGeometry(QRect(350, 170, 61, 21));
        lblProduto3->setFont(font3);
        lblProduto3->setAlignment(Qt::AlignCenter);
        lblCaixa14 = new QLabel(TelaRepoeProdutos);
        lblCaixa14->setObjectName(QString::fromUtf8("lblCaixa14"));
        lblCaixa14->setGeometry(QRect(590, 200, 61, 71));
        lblCaixa14->setStyleSheet(QString::fromUtf8(""));
        lblCaixa14->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa14->setScaledContents(true);
        lblProduto11 = new QLabel(TelaRepoeProdutos);
        lblProduto11->setObjectName(QString::fromUtf8("lblProduto11"));
        lblProduto11->setGeometry(QRect(510, 170, 61, 21));
        lblProduto11->setFont(font3);
        lblProduto11->setAlignment(Qt::AlignCenter);
        lblProduto8 = new QLabel(TelaRepoeProdutos);
        lblProduto8->setObjectName(QString::fromUtf8("lblProduto8"));
        lblProduto8->setGeometry(QRect(430, 100, 61, 21));
        lblProduto8->setFont(font3);
        lblProduto8->setAlignment(Qt::AlignCenter);
        lblProduto14 = new QLabel(TelaRepoeProdutos);
        lblProduto14->setObjectName(QString::fromUtf8("lblProduto14"));
        lblProduto14->setGeometry(QRect(590, 240, 61, 21));
        lblProduto14->setFont(font3);
        lblProduto14->setAlignment(Qt::AlignCenter);
        lblCaixa16 = new QLabel(TelaRepoeProdutos);
        lblCaixa16->setObjectName(QString::fromUtf8("lblCaixa16"));
        lblCaixa16->setGeometry(QRect(590, 60, 61, 71));
        lblCaixa16->setStyleSheet(QString::fromUtf8(""));
        lblCaixa16->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa16->setScaledContents(true);
        lblProduto19 = new QLabel(TelaRepoeProdutos);
        lblProduto19->setObjectName(QString::fromUtf8("lblProduto19"));
        lblProduto19->setGeometry(QRect(670, 170, 61, 21));
        lblProduto19->setFont(font3);
        lblProduto19->setAlignment(Qt::AlignCenter);
        lblProduto17 = new QLabel(TelaRepoeProdutos);
        lblProduto17->setObjectName(QString::fromUtf8("lblProduto17"));
        lblProduto17->setGeometry(QRect(670, 310, 61, 21));
        lblProduto17->setFont(font3);
        lblProduto17->setAlignment(Qt::AlignCenter);
        lblCaixa3 = new QLabel(TelaRepoeProdutos);
        lblCaixa3->setObjectName(QString::fromUtf8("lblCaixa3"));
        lblCaixa3->setGeometry(QRect(350, 130, 61, 71));
        lblCaixa3->setStyleSheet(QString::fromUtf8(""));
        lblCaixa3->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa3->setScaledContents(true);
        lblCaixa12 = new QLabel(TelaRepoeProdutos);
        lblCaixa12->setObjectName(QString::fromUtf8("lblCaixa12"));
        lblCaixa12->setGeometry(QRect(510, 60, 61, 71));
        lblCaixa12->setStyleSheet(QString::fromUtf8(""));
        lblCaixa12->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa12->setScaledContents(true);
        lblCaixa7 = new QLabel(TelaRepoeProdutos);
        lblCaixa7->setObjectName(QString::fromUtf8("lblCaixa7"));
        lblCaixa7->setGeometry(QRect(430, 130, 61, 71));
        lblCaixa7->setStyleSheet(QString::fromUtf8(""));
        lblCaixa7->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa7->setScaledContents(true);
        lblCaixa10 = new QLabel(TelaRepoeProdutos);
        lblCaixa10->setObjectName(QString::fromUtf8("lblCaixa10"));
        lblCaixa10->setGeometry(QRect(510, 200, 61, 71));
        lblCaixa10->setStyleSheet(QString::fromUtf8(""));
        lblCaixa10->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa10->setScaledContents(true);
        lblProduto4 = new QLabel(TelaRepoeProdutos);
        lblProduto4->setObjectName(QString::fromUtf8("lblProduto4"));
        lblProduto4->setGeometry(QRect(350, 100, 61, 21));
        lblProduto4->setFont(font3);
        lblProduto4->setAlignment(Qt::AlignCenter);
        lblProduto9 = new QLabel(TelaRepoeProdutos);
        lblProduto9->setObjectName(QString::fromUtf8("lblProduto9"));
        lblProduto9->setGeometry(QRect(510, 310, 61, 21));
        lblProduto9->setFont(font3);
        lblProduto9->setAlignment(Qt::AlignCenter);
        lblCaixa2 = new QLabel(TelaRepoeProdutos);
        lblCaixa2->setObjectName(QString::fromUtf8("lblCaixa2"));
        lblCaixa2->setGeometry(QRect(350, 200, 61, 71));
        lblCaixa2->setStyleSheet(QString::fromUtf8(""));
        lblCaixa2->setPixmap(QPixmap(QString::fromUtf8(":/src/telaEstocar/caixa.png")));
        lblCaixa2->setScaledContents(true);
        lblProduto18 = new QLabel(TelaRepoeProdutos);
        lblProduto18->setObjectName(QString::fromUtf8("lblProduto18"));
        lblProduto18->setGeometry(QRect(670, 240, 61, 21));
        lblProduto18->setFont(font3);
        lblProduto18->setAlignment(Qt::AlignCenter);
        twProdutosDescarregados = new QTableWidget(TelaRepoeProdutos);
        twProdutosDescarregados->setObjectName(QString::fromUtf8("twProdutosDescarregados"));
        twProdutosDescarregados->setGeometry(QRect(880, 20, 311, 381));
        twProdutosDescarregados->setFont(font2);
        twProdutosDescarregados->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        label_8 = new QLabel(TelaRepoeProdutos);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(910, 0, 251, 21));
        label_8->setFont(font1);
        label_3->raise();
        lblCaminhao->raise();
        lblCaixa20->raise();
        lblCaixa6->raise();
        lblCaixa3->raise();
        lblCaixa18->raise();
        lblCaixa15->raise();
        lblCaixa1->raise();
        lblCaixa5->raise();
        lblCaixa9->raise();
        lblCaixa19->raise();
        lblCaixa17->raise();
        lblCaixa14->raise();
        lblCaixa16->raise();
        lblCaixa12->raise();
        lblCaixa10->raise();
        lblCaixa13->raise();
        lblCaixa8->raise();
        lblCaixa4->raise();
        lblCaixa2->raise();
        lblCaixa11->raise();
        lblCaixa7->raise();
        btnEnviarTudoEstoque->raise();
        btnEnviarEstoque->raise();
        label_7->raise();
        twProdutosCaminhao->raise();
        btnConcluirDescarga->raise();
        lblProduto20->raise();
        lblProduto16->raise();
        lblProduto13->raise();
        lblProduto6->raise();
        lblProduto12->raise();
        lblProduto15->raise();
        lblProduto10->raise();
        lblProduto5->raise();
        lblProduto2->raise();
        lblProduto1->raise();
        lblProduto7->raise();
        lblProduto3->raise();
        lblProduto11->raise();
        lblProduto8->raise();
        lblProduto14->raise();
        lblProduto19->raise();
        lblProduto17->raise();
        lblProduto4->raise();
        lblProduto9->raise();
        lblProduto18->raise();
        twProdutosDescarregados->raise();
        label_8->raise();

        retranslateUi(TelaRepoeProdutos);

        QMetaObject::connectSlotsByName(TelaRepoeProdutos);
    } // setupUi

    void retranslateUi(QDialog *TelaRepoeProdutos)
    {
        TelaRepoeProdutos->setWindowTitle(QCoreApplication::translate("TelaRepoeProdutos", "Dialog", nullptr));
        btnEnviarTudoEstoque->setText(QCoreApplication::translate("TelaRepoeProdutos", "ENVIAR TUDO PARA O ESTOQUE", nullptr));
        btnEnviarEstoque->setText(QCoreApplication::translate("TelaRepoeProdutos", "ENVIAR PARA O ESTOQUE", nullptr));
        label_7->setText(QCoreApplication::translate("TelaRepoeProdutos", "PRODUTOS DO CAMINH\303\203O", nullptr));
        btnConcluirDescarga->setText(QCoreApplication::translate("TelaRepoeProdutos", "CONCLUIR DESCARGA DE PRODUTOS", nullptr));
        label_3->setText(QString());
        lblCaixa6->setText(QString());
        lblCaixa1->setText(QString());
        lblProduto20->setText(QString());
        lblProduto16->setText(QString());
        lblCaixa8->setText(QString());
        lblCaixa19->setText(QString());
        lblCaixa5->setText(QString());
        lblProduto13->setText(QString());
        lblProduto6->setText(QString());
        lblCaixa9->setText(QString());
        lblProduto12->setText(QString());
        lblProduto15->setText(QString());
        lblCaixa11->setText(QString());
        lblCaixa13->setText(QString());
        lblProduto10->setText(QString());
        lblCaixa20->setText(QString());
        lblProduto5->setText(QString());
        lblProduto2->setText(QString());
        lblProduto1->setText(QString());
        lblProduto7->setText(QString());
        lblCaixa15->setText(QString());
        lblCaixa18->setText(QString());
        lblCaminhao->setText(QString());
        lblCaixa4->setText(QString());
        lblCaixa17->setText(QString());
        lblProduto3->setText(QString());
        lblCaixa14->setText(QString());
        lblProduto11->setText(QString());
        lblProduto8->setText(QString());
        lblProduto14->setText(QString());
        lblCaixa16->setText(QString());
        lblProduto19->setText(QString());
        lblProduto17->setText(QString());
        lblCaixa3->setText(QString());
        lblCaixa12->setText(QString());
        lblCaixa7->setText(QString());
        lblCaixa10->setText(QString());
        lblProduto4->setText(QString());
        lblProduto9->setText(QString());
        lblCaixa2->setText(QString());
        lblProduto18->setText(QString());
        label_8->setText(QCoreApplication::translate("TelaRepoeProdutos", "PRODUTOS DESCARREGADOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaRepoeProdutos: public Ui_TelaRepoeProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAREPOEPRODUTOS_H
