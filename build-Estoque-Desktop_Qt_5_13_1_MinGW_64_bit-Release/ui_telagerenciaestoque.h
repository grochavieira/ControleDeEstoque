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
    QPushButton *btnCadastrarProduto;
    QSpinBox *spnIdProduto;
    QLabel *label_6;
    QSpinBox *spnQuantidadeProduto;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QSpinBox *spnQuantidadeMaxProduto;
    QLabel *label_2;
    QPushButton *btnEncontrarId;
    QSpinBox *spnQuantidadeMinProduto;
    QDoubleSpinBox *spnPrecoProduto;
    QLineEdit *txtNomeProduto;
    QLabel *lblErroId;
    QLabel *lblErroPreco;
    QLabel *lblErroNome;
    QLabel *label;
    QLabel *label_cadBg;
    QLabel *label_10;
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
        btnCadastrarProduto = new QPushButton(tabCadast);
        btnCadastrarProduto->setObjectName(QString::fromUtf8("btnCadastrarProduto"));
        btnCadastrarProduto->setGeometry(QRect(150, 340, 201, 81));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCadastrarProduto->sizePolicy().hasHeightForWidth());
        btnCadastrarProduto->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(16);
        btnCadastrarProduto->setFont(font2);
        btnCadastrarProduto->setAutoFillBackground(false);
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
        spnIdProduto = new QSpinBox(tabCadast);
        spnIdProduto->setObjectName(QString::fromUtf8("spnIdProduto"));
        spnIdProduto->setGeometry(QRect(280, 100, 61, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spnIdProduto->sizePolicy().hasHeightForWidth());
        spnIdProduto->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(12);
        spnIdProduto->setFont(font3);
        spnIdProduto->setReadOnly(false);
        spnIdProduto->setMinimum(1);
        spnIdProduto->setMaximum(999999);
        label_6 = new QLabel(tabCadast);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(117, 217, 151, 33));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Caviar Dreams"));
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnQuantidadeProduto = new QSpinBox(tabCadast);
        spnQuantidadeProduto->setObjectName(QString::fromUtf8("spnQuantidadeProduto"));
        spnQuantidadeProduto->setGeometry(QRect(280, 193, 60, 23));
        sizePolicy1.setHeightForWidth(spnQuantidadeProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeProduto->setSizePolicy(sizePolicy1);
        spnQuantidadeProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeProduto->setFont(font3);
        spnQuantidadeProduto->setMinimum(1);
        spnQuantidadeProduto->setMaximum(999999);
        label_4 = new QLabel(tabCadast);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 187, 141, 31));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tabCadast);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(77, 251, 191, 27));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tabCadast);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 160, 131, 21));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnQuantidadeMaxProduto = new QSpinBox(tabCadast);
        spnQuantidadeMaxProduto->setObjectName(QString::fromUtf8("spnQuantidadeMaxProduto"));
        spnQuantidadeMaxProduto->setGeometry(QRect(280, 223, 60, 23));
        sizePolicy1.setHeightForWidth(spnQuantidadeMaxProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeMaxProduto->setSizePolicy(sizePolicy1);
        spnQuantidadeMaxProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeMaxProduto->setFont(font3);
        spnQuantidadeMaxProduto->setMinimum(1);
        spnQuantidadeMaxProduto->setMaximum(999999);
        label_2 = new QLabel(tabCadast);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 130, 131, 21));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnEncontrarId = new QPushButton(tabCadast);
        btnEncontrarId->setObjectName(QString::fromUtf8("btnEncontrarId"));
        btnEncontrarId->setGeometry(QRect(150, 300, 181, 21));
        sizePolicy1.setHeightForWidth(btnEncontrarId->sizePolicy().hasHeightForWidth());
        btnEncontrarId->setSizePolicy(sizePolicy1);
        btnEncontrarId->setMinimumSize(QSize(0, 0));
        btnEncontrarId->setMaximumSize(QSize(1000, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI"));
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
        spnQuantidadeMinProduto = new QSpinBox(tabCadast);
        spnQuantidadeMinProduto->setObjectName(QString::fromUtf8("spnQuantidadeMinProduto"));
        spnQuantidadeMinProduto->setGeometry(QRect(280, 254, 60, 23));
        sizePolicy1.setHeightForWidth(spnQuantidadeMinProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeMinProduto->setSizePolicy(sizePolicy1);
        spnQuantidadeMinProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeMinProduto->setFont(font3);
        spnQuantidadeMinProduto->setMinimum(0);
        spnQuantidadeMinProduto->setMaximum(0);
        spnQuantidadeMinProduto->setValue(0);
        spnPrecoProduto = new QDoubleSpinBox(tabCadast);
        spnPrecoProduto->setObjectName(QString::fromUtf8("spnPrecoProduto"));
        spnPrecoProduto->setGeometry(QRect(280, 160, 60, 23));
        sizePolicy1.setHeightForWidth(spnPrecoProduto->sizePolicy().hasHeightForWidth());
        spnPrecoProduto->setSizePolicy(sizePolicy1);
        spnPrecoProduto->setMaximumSize(QSize(60, 16777215));
        spnPrecoProduto->setFont(font3);
        spnPrecoProduto->setMaximum(9999.989999999999782);
        txtNomeProduto = new QLineEdit(tabCadast);
        txtNomeProduto->setObjectName(QString::fromUtf8("txtNomeProduto"));
        txtNomeProduto->setGeometry(QRect(280, 130, 105, 22));
        sizePolicy1.setHeightForWidth(txtNomeProduto->sizePolicy().hasHeightForWidth());
        txtNomeProduto->setSizePolicy(sizePolicy1);
        txtNomeProduto->setMinimumSize(QSize(0, 0));
        txtNomeProduto->setMaximumSize(QSize(180, 16777215));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI"));
        font6.setPointSize(10);
        txtNomeProduto->setFont(font6);
        txtNomeProduto->setMaxLength(30);
        lblErroId = new QLabel(tabCadast);
        lblErroId->setObjectName(QString::fromUtf8("lblErroId"));
        lblErroId->setGeometry(QRect(390, 100, 150, 20));
        sizePolicy1.setHeightForWidth(lblErroId->sizePolicy().hasHeightForWidth());
        lblErroId->setSizePolicy(sizePolicy1);
        lblErroId->setMaximumSize(QSize(150, 20));
        lblErroId->setFont(font2);
        lblErroId->setAutoFillBackground(false);
        lblErroId->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"transparent\";\n"
"\n"
"\n"
""));
        lblErroPreco = new QLabel(tabCadast);
        lblErroPreco->setObjectName(QString::fromUtf8("lblErroPreco"));
        lblErroPreco->setGeometry(QRect(390, 160, 171, 20));
        sizePolicy2.setHeightForWidth(lblErroPreco->sizePolicy().hasHeightForWidth());
        lblErroPreco->setSizePolicy(sizePolicy2);
        lblErroPreco->setMaximumSize(QSize(310, 20));
        lblErroPreco->setFont(font6);
        lblErroPreco->setAutoFillBackground(false);
        lblErroPreco->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"transparent\";\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        lblErroNome = new QLabel(tabCadast);
        lblErroNome->setObjectName(QString::fromUtf8("lblErroNome"));
        lblErroNome->setGeometry(QRect(390, 130, 185, 20));
        sizePolicy2.setHeightForWidth(lblErroNome->sizePolicy().hasHeightForWidth());
        lblErroNome->setSizePolicy(sizePolicy2);
        lblErroNome->setMaximumSize(QSize(185, 20));
        lblErroNome->setFont(font6);
        lblErroNome->setAutoFillBackground(false);
        lblErroNome->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"transparent\";\n"
"\n"
"\n"
""));
        label = new QLabel(tabCadast);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 100, 51, 21));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font4);
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
        label_10->setGeometry(QRect(60, 0, 661, 471));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgba(0,0,0,70);\n"
"}"));
        tabGerenciadorDeEstoque->addTab(tabCadast, QString());
        label_cadBg->raise();
        label_10->raise();
        btnCadastrarProduto->raise();
        spnIdProduto->raise();
        label_6->raise();
        spnQuantidadeProduto->raise();
        label_4->raise();
        label_5->raise();
        label_3->raise();
        spnQuantidadeMaxProduto->raise();
        label_2->raise();
        btnEncontrarId->raise();
        spnQuantidadeMinProduto->raise();
        spnPrecoProduto->raise();
        txtNomeProduto->raise();
        lblErroId->raise();
        lblErroPreco->raise();
        lblErroNome->raise();
        label->raise();
        tabRemove = new QWidget();
        tabRemove->setObjectName(QString::fromUtf8("tabRemove"));
        btnExcluir = new QPushButton(tabRemove);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setGeometry(QRect(30, 340, 131, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Caviar Dreams"));
        font7.setPointSize(12);
        btnExcluir->setFont(font7);
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
        QFont font8;
        font8.setFamily(QString::fromUtf8("Caviar Dreams"));
        font8.setPointSize(9);
        btnPesquisar->setFont(font8);
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
        btnListarTodosProdutos->setFont(font8);
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
        QFont font9;
        font9.setFamily(QString::fromUtf8("Caviar Dreams"));
        font9.setPointSize(10);
        txtPesquisarProduto->setFont(font9);
        twProdutos = new QTableWidget(tabRemove);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));
        twProdutos->setGeometry(QRect(10, 40, 741, 291));
        twProdutos->setFont(font5);
        label_7 = new QLabel(tabRemove);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 10, 131, 21));
        label_7->setFont(font7);
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
        twListaDeCompras->setGeometry(QRect(20, 10, 721, 451));
        twListaDeCompras->setFont(font5);
        label_9 = new QLabel(tabLIsta);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 781, 501));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/src/bgAfter/a_Gerencia 1.png")));
        tabGerenciadorDeEstoque->addTab(tabLIsta, QString());
        label_9->raise();
        twListaDeCompras->raise();
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
        QWidget::setTabOrder(btnListarTodosProdutos, btnExcluir);
        QWidget::setTabOrder(btnExcluir, twProdutos);
        QWidget::setTabOrder(twProdutos, tabGerenciadorDeEstoque);
        QWidget::setTabOrder(tabGerenciadorDeEstoque, twListaDeCompras);

        retranslateUi(TelaGerenciaEstoque);

        tabGerenciadorDeEstoque->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TelaGerenciaEstoque);
    } // setupUi

    void retranslateUi(QDialog *TelaGerenciaEstoque)
    {
        TelaGerenciaEstoque->setWindowTitle(QCoreApplication::translate("TelaGerenciaEstoque", "Gerenciador de Estoque", nullptr));
        btnCadastrarProduto->setText(QCoreApplication::translate("TelaGerenciaEstoque", "CADASTRAR", nullptr));
        label_6->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Quantidade M\303\241xima:", nullptr));
        label_4->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Quantidade:", nullptr));
        label_5->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Quantidade M\303\255nima:", nullptr));
        label_3->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Pre\303\247o:", nullptr));
        label_2->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Nome:", nullptr));
        btnEncontrarId->setText(QCoreApplication::translate("TelaGerenciaEstoque", "ENCONTRAR ID DISPON\303\215VEL", nullptr));
        txtNomeProduto->setInputMask(QString());
        lblErroId->setText(QString());
        lblErroPreco->setText(QString());
        lblErroNome->setText(QString());
        label->setText(QCoreApplication::translate("TelaGerenciaEstoque", "ID:", nullptr));
        label_cadBg->setText(QString());
        label_10->setText(QString());
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tabCadast), QCoreApplication::translate("TelaGerenciaEstoque", "Cadastrar Produtos", nullptr));
        btnExcluir->setText(QCoreApplication::translate("TelaGerenciaEstoque", "EXCLUIR", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("TelaGerenciaEstoque", "PESQUISAR", nullptr));
        btnListarTodosProdutos->setText(QCoreApplication::translate("TelaGerenciaEstoque", "LISTAR TODOS OS PRODUTOS", nullptr));
        txtPesquisarProduto->setPlaceholderText(QCoreApplication::translate("TelaGerenciaEstoque", "Digite o nome do produto", nullptr));
        label_7->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Pesquisar Produto:", nullptr));
        label_8->setText(QString());
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tabRemove), QCoreApplication::translate("TelaGerenciaEstoque", "Remover Produtos", nullptr));
        label_9->setText(QString());
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tabLIsta), QCoreApplication::translate("TelaGerenciaEstoque", "Lista de Compras", nullptr));
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaGerenciaEstoque: public Ui_TelaGerenciaEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAGERENCIAESTOQUE_H
