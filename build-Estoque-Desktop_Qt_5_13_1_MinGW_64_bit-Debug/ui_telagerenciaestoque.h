/********************************************************************************
** Form generated from reading UI file 'telagerenciaestoque.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAGERENCIAESTOQUE_H
#define UI_TELAGERENCIAESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaGerenciaEstoque
{
public:
    QTabWidget *tabGerenciadorDeEstoque;
    QWidget *tabCadast;
    QSpinBox *spnIdProduto;
    QLabel *label_6;
    QSpinBox *spnQuantidadeProduto;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QSpinBox *spnQuantidadeMaxProduto;
    QLabel *label_2;
    QSpinBox *spnQuantidadeMinProduto;
    QDoubleSpinBox *spnPrecoProduto;
    QLineEdit *txtNomeProduto;
    QLabel *lblErroId;
    QLabel *lblErroPreco;
    QLabel *lblErroNome;
    QLabel *label;
    QLabel *label_cadBg;
    QLabel *label_10;
    QPushButton *btnCadastrarProduto;
    QPushButton *btnEncontrarId;
    QWidget *tabRemove;
    QPushButton *btnExcluir;
    QPushButton *btnPesquisar;
    QPushButton *btnListarTodosProdutos;
    QLineEdit *txtPesquisarProduto;
    QTableWidget *twProdutos;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tabLIsta;
    QTableWidget *twListaDeCompras;
    QLabel *label_9;
    QPushButton *btnReporEstoque;
    QWidget *pedidos;
    QLabel *label_11;
    QTableWidget *twPedidos;
    QPushButton *btnEnviarPedido;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_bg;

    void setupUi(QDialog *TelaGerenciaEstoque)
    {
        if (TelaGerenciaEstoque->objectName().isEmpty())
            TelaGerenciaEstoque->setObjectName(QString::fromUtf8("TelaGerenciaEstoque"));
        TelaGerenciaEstoque->resize(800, 600);
        TelaGerenciaEstoque->setMinimumSize(QSize(800, 600));
        TelaGerenciaEstoque->setMaximumSize(QSize(800, 600));
        tabGerenciadorDeEstoque = new QTabWidget(TelaGerenciaEstoque);
        tabGerenciadorDeEstoque->setObjectName(QString::fromUtf8("tabGerenciadorDeEstoque"));
        tabGerenciadorDeEstoque->setGeometry(QRect(10, 10, 771, 521));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(13);
        tabGerenciadorDeEstoque->setFont(font);
        tabGerenciadorDeEstoque->setFocusPolicy(Qt::TabFocus);
        tabGerenciadorDeEstoque->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"\n"
"	background-color: 'transparent';\n"
"\n"
"}"));
        tabGerenciadorDeEstoque->setTabPosition(QTabWidget::North);
        tabGerenciadorDeEstoque->setTabShape(QTabWidget::Rounded);
        tabCadast = new QWidget();
        tabCadast->setObjectName(QString::fromUtf8("tabCadast"));
        QFont font1;
        font1.setPointSize(15);
        tabCadast->setFont(font1);
        tabCadast->setStyleSheet(QString::fromUtf8("QWidget{\n"
"/*\n"
"	background-color: 'transparent';\n"
"*/\n"
"}"));
        spnIdProduto = new QSpinBox(tabCadast);
        spnIdProduto->setObjectName(QString::fromUtf8("spnIdProduto"));
        spnIdProduto->setGeometry(QRect(410, 97, 71, 23));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnIdProduto->sizePolicy().hasHeightForWidth());
        spnIdProduto->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(12);
        spnIdProduto->setFont(font2);
        spnIdProduto->setReadOnly(false);
        spnIdProduto->setMinimum(1);
        spnIdProduto->setMaximum(999999);
        label_6 = new QLabel(tabCadast);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(187, 214, 211, 33));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Caviar Dreams"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnQuantidadeProduto = new QSpinBox(tabCadast);
        spnQuantidadeProduto->setObjectName(QString::fromUtf8("spnQuantidadeProduto"));
        spnQuantidadeProduto->setGeometry(QRect(410, 190, 60, 23));
        sizePolicy.setHeightForWidth(spnQuantidadeProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeProduto->setSizePolicy(sizePolicy);
        spnQuantidadeProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeProduto->setFont(font2);
        spnQuantidadeProduto->setMinimum(1);
        spnQuantidadeProduto->setMaximum(999999);
        label_4 = new QLabel(tabCadast);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 184, 141, 31));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tabCadast);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(197, 248, 201, 27));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tabCadast);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 157, 131, 21));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnQuantidadeMaxProduto = new QSpinBox(tabCadast);
        spnQuantidadeMaxProduto->setObjectName(QString::fromUtf8("spnQuantidadeMaxProduto"));
        spnQuantidadeMaxProduto->setGeometry(QRect(410, 220, 60, 23));
        sizePolicy.setHeightForWidth(spnQuantidadeMaxProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeMaxProduto->setSizePolicy(sizePolicy);
        spnQuantidadeMaxProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeMaxProduto->setFont(font2);
        spnQuantidadeMaxProduto->setMinimum(1);
        spnQuantidadeMaxProduto->setMaximum(999999);
        label_2 = new QLabel(tabCadast);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 127, 131, 21));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnQuantidadeMinProduto = new QSpinBox(tabCadast);
        spnQuantidadeMinProduto->setObjectName(QString::fromUtf8("spnQuantidadeMinProduto"));
        spnQuantidadeMinProduto->setGeometry(QRect(410, 251, 60, 23));
        sizePolicy.setHeightForWidth(spnQuantidadeMinProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeMinProduto->setSizePolicy(sizePolicy);
        spnQuantidadeMinProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeMinProduto->setFont(font2);
        spnQuantidadeMinProduto->setMinimum(0);
        spnQuantidadeMinProduto->setMaximum(0);
        spnQuantidadeMinProduto->setValue(0);
        spnPrecoProduto = new QDoubleSpinBox(tabCadast);
        spnPrecoProduto->setObjectName(QString::fromUtf8("spnPrecoProduto"));
        spnPrecoProduto->setGeometry(QRect(410, 157, 101, 23));
        sizePolicy.setHeightForWidth(spnPrecoProduto->sizePolicy().hasHeightForWidth());
        spnPrecoProduto->setSizePolicy(sizePolicy);
        spnPrecoProduto->setMaximumSize(QSize(120, 16777215));
        spnPrecoProduto->setFont(font2);
        spnPrecoProduto->setMaximum(999999.989999999990687);
        txtNomeProduto = new QLineEdit(tabCadast);
        txtNomeProduto->setObjectName(QString::fromUtf8("txtNomeProduto"));
        txtNomeProduto->setGeometry(QRect(410, 127, 105, 22));
        sizePolicy.setHeightForWidth(txtNomeProduto->sizePolicy().hasHeightForWidth());
        txtNomeProduto->setSizePolicy(sizePolicy);
        txtNomeProduto->setMinimumSize(QSize(0, 0));
        txtNomeProduto->setMaximumSize(QSize(180, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI"));
        font4.setPointSize(10);
        txtNomeProduto->setFont(font4);
        txtNomeProduto->setMaxLength(30);
        lblErroId = new QLabel(tabCadast);
        lblErroId->setObjectName(QString::fromUtf8("lblErroId"));
        lblErroId->setGeometry(QRect(520, 97, 150, 20));
        sizePolicy.setHeightForWidth(lblErroId->sizePolicy().hasHeightForWidth());
        lblErroId->setSizePolicy(sizePolicy);
        lblErroId->setMaximumSize(QSize(150, 20));
        lblErroId->setFont(font4);
        lblErroId->setAutoFillBackground(false);
        lblErroId->setStyleSheet(QString::fromUtf8("color: \"white\";\n"
"background: \"transparent\";\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        lblErroPreco = new QLabel(tabCadast);
        lblErroPreco->setObjectName(QString::fromUtf8("lblErroPreco"));
        lblErroPreco->setGeometry(QRect(520, 157, 171, 20));
        sizePolicy1.setHeightForWidth(lblErroPreco->sizePolicy().hasHeightForWidth());
        lblErroPreco->setSizePolicy(sizePolicy1);
        lblErroPreco->setMaximumSize(QSize(310, 20));
        lblErroPreco->setFont(font4);
        lblErroPreco->setAutoFillBackground(false);
        lblErroPreco->setStyleSheet(QString::fromUtf8("color: \"white\";\n"
"background: \"transparent\";\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        lblErroNome = new QLabel(tabCadast);
        lblErroNome->setObjectName(QString::fromUtf8("lblErroNome"));
        lblErroNome->setGeometry(QRect(520, 127, 185, 20));
        sizePolicy1.setHeightForWidth(lblErroNome->sizePolicy().hasHeightForWidth());
        lblErroNome->setSizePolicy(sizePolicy1);
        lblErroNome->setMaximumSize(QSize(185, 20));
        lblErroNome->setFont(font4);
        lblErroNome->setAutoFillBackground(false);
        lblErroNome->setStyleSheet(QString::fromUtf8("color: \"white\";\n"
"background: \"transparent\";\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        label = new QLabel(tabCadast);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 97, 51, 21));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: \"white\";"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_cadBg = new QLabel(tabCadast);
        label_cadBg->setObjectName(QString::fromUtf8("label_cadBg"));
        label_cadBg->setGeometry(QRect(0, 0, 781, 500));
        label_cadBg->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Pedidos.png")));
        label_cadBg->setScaledContents(true);
        label_10 = new QLabel(tabCadast);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 771, 491));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgba(0,0,0,70);\n"
"}"));
        btnCadastrarProduto = new QPushButton(tabCadast);
        btnCadastrarProduto->setObjectName(QString::fromUtf8("btnCadastrarProduto"));
        btnCadastrarProduto->setGeometry(QRect(280, 277, 191, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Caviar Dreams"));
        font5.setPointSize(12);
        btnCadastrarProduto->setFont(font5);
        btnCadastrarProduto->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnEncontrarId = new QPushButton(tabCadast);
        btnEncontrarId->setObjectName(QString::fromUtf8("btnEncontrarId"));
        btnEncontrarId->setGeometry(QRect(80, 90, 271, 31));
        btnEncontrarId->setFont(font5);
        btnEncontrarId->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        tabGerenciadorDeEstoque->addTab(tabCadast, QString());
        label_cadBg->raise();
        label_10->raise();
        spnIdProduto->raise();
        label_6->raise();
        spnQuantidadeProduto->raise();
        label_4->raise();
        label_5->raise();
        label_3->raise();
        spnQuantidadeMaxProduto->raise();
        label_2->raise();
        spnQuantidadeMinProduto->raise();
        spnPrecoProduto->raise();
        txtNomeProduto->raise();
        lblErroId->raise();
        lblErroPreco->raise();
        lblErroNome->raise();
        label->raise();
        btnCadastrarProduto->raise();
        btnEncontrarId->raise();
        tabRemove = new QWidget();
        tabRemove->setObjectName(QString::fromUtf8("tabRemove"));
        btnExcluir = new QPushButton(tabRemove);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setGeometry(QRect(10, 430, 131, 41));
        btnExcluir->setFont(font5);
        btnExcluir->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnPesquisar = new QPushButton(tabRemove);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));
        btnPesquisar->setGeometry(QRect(380, 10, 121, 21));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Caviar Dreams"));
        font6.setPointSize(9);
        btnPesquisar->setFont(font6);
        btnPesquisar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        btnListarTodosProdutos = new QPushButton(tabRemove);
        btnListarTodosProdutos->setObjectName(QString::fromUtf8("btnListarTodosProdutos"));
        btnListarTodosProdutos->setGeometry(QRect(520, 10, 231, 21));
        btnListarTodosProdutos->setFont(font6);
        btnListarTodosProdutos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        txtPesquisarProduto = new QLineEdit(tabRemove);
        txtPesquisarProduto->setObjectName(QString::fromUtf8("txtPesquisarProduto"));
        txtPesquisarProduto->setGeometry(QRect(160, 10, 191, 21));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Caviar Dreams"));
        font7.setPointSize(10);
        txtPesquisarProduto->setFont(font7);
        twProdutos = new QTableWidget(tabRemove);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));
        twProdutos->setGeometry(QRect(10, 40, 741, 381));
        twProdutos->setFont(font2);
        twProdutos->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        label_7 = new QLabel(tabRemove);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 10, 131, 21));
        label_7->setFont(font5);
        label_8 = new QLabel(tabRemove);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(-5, -3, 771, 501));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Pedidos 2.png")));
        label_8->setScaledContents(true);
        tabGerenciadorDeEstoque->addTab(tabRemove, QString());
        label_8->raise();
        btnExcluir->raise();
        btnPesquisar->raise();
        btnListarTodosProdutos->raise();
        txtPesquisarProduto->raise();
        twProdutos->raise();
        label_7->raise();
        tabLIsta = new QWidget();
        tabLIsta->setObjectName(QString::fromUtf8("tabLIsta"));
        twListaDeCompras = new QTableWidget(tabLIsta);
        twListaDeCompras->setObjectName(QString::fromUtf8("twListaDeCompras"));
        twListaDeCompras->setGeometry(QRect(10, 20, 751, 401));
        twListaDeCompras->setFont(font2);
        twListaDeCompras->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        label_9 = new QLabel(tabLIsta);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(-10, 0, 791, 501));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia 1.png")));
        btnReporEstoque = new QPushButton(tabLIsta);
        btnReporEstoque->setObjectName(QString::fromUtf8("btnReporEstoque"));
        btnReporEstoque->setGeometry(QRect(10, 430, 191, 41));
        btnReporEstoque->setFont(font5);
        btnReporEstoque->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        tabGerenciadorDeEstoque->addTab(tabLIsta, QString());
        label_9->raise();
        twListaDeCompras->raise();
        btnReporEstoque->raise();
        pedidos = new QWidget();
        pedidos->setObjectName(QString::fromUtf8("pedidos"));
        label_11 = new QLabel(pedidos);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(-10, 0, 781, 491));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia.png")));
        label_11->setScaledContents(true);
        twPedidos = new QTableWidget(pedidos);
        twPedidos->setObjectName(QString::fromUtf8("twPedidos"));
        twPedidos->setGeometry(QRect(10, 20, 741, 411));
        twPedidos->setFont(font2);
        twPedidos->setStyleSheet(QString::fromUtf8("QHeaderView { font-size: 12pt; }"));
        btnEnviarPedido = new QPushButton(pedidos);
        btnEnviarPedido->setObjectName(QString::fromUtf8("btnEnviarPedido"));
        btnEnviarPedido->setGeometry(QRect(10, 440, 181, 41));
        btnEnviarPedido->setFont(font5);
        btnEnviarPedido->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        tabGerenciadorDeEstoque->addTab(pedidos, QString());
        layoutWidget = new QWidget(TelaGerenciaEstoque);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_19 = new QVBoxLayout(layoutWidget);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_bg = new QLabel(TelaGerenciaEstoque);
        label_bg->setObjectName(QString::fromUtf8("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 800, 600));
        label_bg->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia.png")));
        label_bg->setScaledContents(true);
        label_bg->raise();
        tabGerenciadorDeEstoque->raise();
        layoutWidget->raise();
        QWidget::setTabOrder(spnIdProduto, txtNomeProduto);
        QWidget::setTabOrder(txtNomeProduto, spnPrecoProduto);
        QWidget::setTabOrder(spnPrecoProduto, spnQuantidadeProduto);
        QWidget::setTabOrder(spnQuantidadeProduto, spnQuantidadeMaxProduto);
        QWidget::setTabOrder(spnQuantidadeMaxProduto, spnQuantidadeMinProduto);
        QWidget::setTabOrder(spnQuantidadeMinProduto, btnCadastrarProduto);
        QWidget::setTabOrder(btnCadastrarProduto, btnEncontrarId);
        QWidget::setTabOrder(btnEncontrarId, txtPesquisarProduto);
        QWidget::setTabOrder(txtPesquisarProduto, btnPesquisar);
        QWidget::setTabOrder(btnPesquisar, btnListarTodosProdutos);
        QWidget::setTabOrder(btnListarTodosProdutos, twProdutos);
        QWidget::setTabOrder(twProdutos, btnExcluir);
        QWidget::setTabOrder(btnExcluir, twListaDeCompras);
        QWidget::setTabOrder(twListaDeCompras, btnReporEstoque);
        QWidget::setTabOrder(btnReporEstoque, twPedidos);
        QWidget::setTabOrder(twPedidos, btnEnviarPedido);
        QWidget::setTabOrder(btnEnviarPedido, tabGerenciadorDeEstoque);

        retranslateUi(TelaGerenciaEstoque);

        tabGerenciadorDeEstoque->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TelaGerenciaEstoque);
    } // setupUi

    void retranslateUi(QDialog *TelaGerenciaEstoque)
    {
        TelaGerenciaEstoque->setWindowTitle(QCoreApplication::translate("TelaGerenciaEstoque", "Gerenciador de Estoque", nullptr));
        label_6->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Quantidade M\303\241xima:", nullptr));
        label_4->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Quantidade:", nullptr));
        label_5->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Quantidade M\303\255nima:", nullptr));
        label_3->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Pre\303\247o:", nullptr));
        label_2->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Nome:", nullptr));
        txtNomeProduto->setInputMask(QString());
        lblErroId->setText(QString());
        lblErroPreco->setText(QString());
        lblErroNome->setText(QString());
        label->setText(QCoreApplication::translate("TelaGerenciaEstoque", "ID:", nullptr));
        label_cadBg->setText(QString());
        label_10->setText(QString());
        btnCadastrarProduto->setText(QCoreApplication::translate("TelaGerenciaEstoque", "CADASTRAR", nullptr));
        btnEncontrarId->setText(QCoreApplication::translate("TelaGerenciaEstoque", "ENCONTRAR ID DISPON\303\215VEL", nullptr));
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tabCadast), QCoreApplication::translate("TelaGerenciaEstoque", "Cadastrar Produtos", nullptr));
        btnExcluir->setText(QCoreApplication::translate("TelaGerenciaEstoque", "EXCLUIR", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("TelaGerenciaEstoque", "PESQUISAR", nullptr));
        btnListarTodosProdutos->setText(QCoreApplication::translate("TelaGerenciaEstoque", "LISTAR TODOS OS PRODUTOS", nullptr));
        txtPesquisarProduto->setPlaceholderText(QCoreApplication::translate("TelaGerenciaEstoque", "Digite o nome do produto", nullptr));
        label_7->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Pesquisar Produto:", nullptr));
        label_8->setText(QString());
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tabRemove), QCoreApplication::translate("TelaGerenciaEstoque", "Remover Produtos", nullptr));
        label_9->setText(QString());
        btnReporEstoque->setText(QCoreApplication::translate("TelaGerenciaEstoque", "REPOR ESTOQUE", nullptr));
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tabLIsta), QCoreApplication::translate("TelaGerenciaEstoque", "Lista de Compras", nullptr));
        label_11->setText(QString());
        btnEnviarPedido->setText(QCoreApplication::translate("TelaGerenciaEstoque", "ENVIAR PEDIDO", nullptr));
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(pedidos), QCoreApplication::translate("TelaGerenciaEstoque", "Pedidos", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaGerenciaEstoque: public Ui_TelaGerenciaEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAGERENCIAESTOQUE_H
