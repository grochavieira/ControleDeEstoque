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
    QWidget *tab;
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
    QWidget *tab_2;
    QPushButton *btnExcluir;
    QPushButton *btnPesquisar;
    QPushButton *btnListarTodosProdutos;
    QLineEdit *txtPesquisarProduto;
    QTableWidget *twProdutos;
    QLabel *label_7;
    QWidget *tab_3;
    QTableWidget *twListaDeCompras;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_19;

    void setupUi(QDialog *TelaGerenciaEstoque)
    {
        if (TelaGerenciaEstoque->objectName().isEmpty())
            TelaGerenciaEstoque->setObjectName(QString::fromUtf8("TelaGerenciaEstoque"));
        TelaGerenciaEstoque->resize(631, 428);
        tabGerenciadorDeEstoque = new QTabWidget(TelaGerenciaEstoque);
        tabGerenciadorDeEstoque->setObjectName(QString::fromUtf8("tabGerenciadorDeEstoque"));
        tabGerenciadorDeEstoque->setGeometry(QRect(10, 10, 611, 401));
        tabGerenciadorDeEstoque->setFocusPolicy(Qt::TabFocus);
        tabGerenciadorDeEstoque->setStyleSheet(QString::fromUtf8(""));
        tabGerenciadorDeEstoque->setTabPosition(QTabWidget::North);
        tabGerenciadorDeEstoque->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        btnCadastrarProduto = new QPushButton(tab);
        btnCadastrarProduto->setObjectName(QString::fromUtf8("btnCadastrarProduto"));
        btnCadastrarProduto->setGeometry(QRect(220, 280, 121, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCadastrarProduto->sizePolicy().hasHeightForWidth());
        btnCadastrarProduto->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        btnCadastrarProduto->setFont(font);
        btnCadastrarProduto->setAutoFillBackground(false);
        btnCadastrarProduto->setStyleSheet(QString::fromUtf8(""));
        spnIdProduto = new QSpinBox(tab);
        spnIdProduto->setObjectName(QString::fromUtf8("spnIdProduto"));
        spnIdProduto->setGeometry(QRect(280, 100, 61, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spnIdProduto->sizePolicy().hasHeightForWidth());
        spnIdProduto->setSizePolicy(sizePolicy1);
        spnIdProduto->setFont(font);
        spnIdProduto->setReadOnly(false);
        spnIdProduto->setMinimum(1);
        spnIdProduto->setMaximum(999999);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(157, 220, 111, 33));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnQuantidadeProduto = new QSpinBox(tab);
        spnQuantidadeProduto->setObjectName(QString::fromUtf8("spnQuantidadeProduto"));
        spnQuantidadeProduto->setGeometry(QRect(280, 190, 60, 23));
        sizePolicy1.setHeightForWidth(spnQuantidadeProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeProduto->setSizePolicy(sizePolicy1);
        spnQuantidadeProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeProduto->setFont(font);
        spnQuantidadeProduto->setMinimum(1);
        spnQuantidadeProduto->setMaximum(999999);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 190, 101, 31));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(157, 250, 111, 27));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(217, 160, 41, 21));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spnQuantidadeMaxProduto = new QSpinBox(tab);
        spnQuantidadeMaxProduto->setObjectName(QString::fromUtf8("spnQuantidadeMaxProduto"));
        spnQuantidadeMaxProduto->setGeometry(QRect(280, 220, 60, 23));
        sizePolicy1.setHeightForWidth(spnQuantidadeMaxProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeMaxProduto->setSizePolicy(sizePolicy1);
        spnQuantidadeMaxProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeMaxProduto->setFont(font);
        spnQuantidadeMaxProduto->setMinimum(1);
        spnQuantidadeMaxProduto->setMaximum(999999);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 130, 41, 21));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnEncontrarId = new QPushButton(tab);
        btnEncontrarId->setObjectName(QString::fromUtf8("btnEncontrarId"));
        btnEncontrarId->setGeometry(QRect(40, 100, 181, 21));
        sizePolicy1.setHeightForWidth(btnEncontrarId->sizePolicy().hasHeightForWidth());
        btnEncontrarId->setSizePolicy(sizePolicy1);
        btnEncontrarId->setMinimumSize(QSize(0, 0));
        btnEncontrarId->setMaximumSize(QSize(1000, 16777215));
        btnEncontrarId->setFont(font);
        spnQuantidadeMinProduto = new QSpinBox(tab);
        spnQuantidadeMinProduto->setObjectName(QString::fromUtf8("spnQuantidadeMinProduto"));
        spnQuantidadeMinProduto->setGeometry(QRect(280, 250, 60, 23));
        sizePolicy1.setHeightForWidth(spnQuantidadeMinProduto->sizePolicy().hasHeightForWidth());
        spnQuantidadeMinProduto->setSizePolicy(sizePolicy1);
        spnQuantidadeMinProduto->setMaximumSize(QSize(60, 16777215));
        spnQuantidadeMinProduto->setFont(font);
        spnQuantidadeMinProduto->setMinimum(0);
        spnQuantidadeMinProduto->setMaximum(0);
        spnQuantidadeMinProduto->setValue(0);
        spnPrecoProduto = new QDoubleSpinBox(tab);
        spnPrecoProduto->setObjectName(QString::fromUtf8("spnPrecoProduto"));
        spnPrecoProduto->setGeometry(QRect(280, 160, 60, 23));
        sizePolicy1.setHeightForWidth(spnPrecoProduto->sizePolicy().hasHeightForWidth());
        spnPrecoProduto->setSizePolicy(sizePolicy1);
        spnPrecoProduto->setMaximumSize(QSize(60, 16777215));
        spnPrecoProduto->setFont(font);
        spnPrecoProduto->setMaximum(9999.989999999999782);
        txtNomeProduto = new QLineEdit(tab);
        txtNomeProduto->setObjectName(QString::fromUtf8("txtNomeProduto"));
        txtNomeProduto->setGeometry(QRect(280, 130, 105, 22));
        sizePolicy1.setHeightForWidth(txtNomeProduto->sizePolicy().hasHeightForWidth());
        txtNomeProduto->setSizePolicy(sizePolicy1);
        txtNomeProduto->setMinimumSize(QSize(0, 0));
        txtNomeProduto->setMaximumSize(QSize(180, 16777215));
        txtNomeProduto->setFont(font);
        txtNomeProduto->setMaxLength(30);
        lblErroId = new QLabel(tab);
        lblErroId->setObjectName(QString::fromUtf8("lblErroId"));
        lblErroId->setGeometry(QRect(350, 100, 150, 20));
        sizePolicy1.setHeightForWidth(lblErroId->sizePolicy().hasHeightForWidth());
        lblErroId->setSizePolicy(sizePolicy1);
        lblErroId->setMaximumSize(QSize(150, 20));
        lblErroId->setFont(font);
        lblErroId->setAutoFillBackground(false);
        lblErroId->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
"\n"
"\n"
""));
        lblErroPreco = new QLabel(tab);
        lblErroPreco->setObjectName(QString::fromUtf8("lblErroPreco"));
        lblErroPreco->setGeometry(QRect(350, 160, 171, 20));
        sizePolicy2.setHeightForWidth(lblErroPreco->sizePolicy().hasHeightForWidth());
        lblErroPreco->setSizePolicy(sizePolicy2);
        lblErroPreco->setMaximumSize(QSize(310, 20));
        lblErroPreco->setFont(font);
        lblErroPreco->setAutoFillBackground(false);
        lblErroPreco->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
"\n"
"\n"
""));
        lblErroNome = new QLabel(tab);
        lblErroNome->setObjectName(QString::fromUtf8("lblErroNome"));
        lblErroNome->setGeometry(QRect(390, 130, 185, 20));
        sizePolicy2.setHeightForWidth(lblErroNome->sizePolicy().hasHeightForWidth());
        lblErroNome->setSizePolicy(sizePolicy2);
        lblErroNome->setMaximumSize(QSize(185, 20));
        lblErroNome->setFont(font);
        lblErroNome->setAutoFillBackground(false);
        lblErroNome->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
"\n"
"\n"
""));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 100, 20, 21));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabGerenciadorDeEstoque->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        btnExcluir = new QPushButton(tab_2);
        btnExcluir->setObjectName(QString::fromUtf8("btnExcluir"));
        btnExcluir->setGeometry(QRect(0, 340, 131, 31));
        btnExcluir->setFont(font);
        btnPesquisar = new QPushButton(tab_2);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));
        btnPesquisar->setGeometry(QRect(270, 10, 121, 21));
        btnPesquisar->setFont(font);
        btnListarTodosProdutos = new QPushButton(tab_2);
        btnListarTodosProdutos->setObjectName(QString::fromUtf8("btnListarTodosProdutos"));
        btnListarTodosProdutos->setGeometry(QRect(400, 10, 201, 21));
        btnListarTodosProdutos->setFont(font);
        txtPesquisarProduto = new QLineEdit(tab_2);
        txtPesquisarProduto->setObjectName(QString::fromUtf8("txtPesquisarProduto"));
        txtPesquisarProduto->setGeometry(QRect(100, 10, 161, 21));
        txtPesquisarProduto->setFont(font);
        twProdutos = new QTableWidget(tab_2);
        twProdutos->setObjectName(QString::fromUtf8("twProdutos"));
        twProdutos->setGeometry(QRect(0, 40, 601, 291));
        twProdutos->setFont(font);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 10, 101, 16));
        label_7->setFont(font);
        tabGerenciadorDeEstoque->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        twListaDeCompras = new QTableWidget(tab_3);
        twListaDeCompras->setObjectName(QString::fromUtf8("twListaDeCompras"));
        twListaDeCompras->setGeometry(QRect(0, 10, 561, 291));
        twListaDeCompras->setFont(font);
        tabGerenciadorDeEstoque->addTab(tab_3, QString());
        layoutWidget = new QWidget(TelaGerenciaEstoque);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_19 = new QVBoxLayout(layoutWidget);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
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
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tab), QCoreApplication::translate("TelaGerenciaEstoque", "Cadastrar Produtos", nullptr));
        btnExcluir->setText(QCoreApplication::translate("TelaGerenciaEstoque", "EXCLUIR", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("TelaGerenciaEstoque", "PESQUISAR", nullptr));
        btnListarTodosProdutos->setText(QCoreApplication::translate("TelaGerenciaEstoque", "LISTAR TODOS OS PRODUTOS", nullptr));
        txtPesquisarProduto->setPlaceholderText(QCoreApplication::translate("TelaGerenciaEstoque", "Digite o nome do produto", nullptr));
        label_7->setText(QCoreApplication::translate("TelaGerenciaEstoque", "Pesquisar Produto:", nullptr));
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tab_2), QCoreApplication::translate("TelaGerenciaEstoque", "Remover Produtos", nullptr));
        tabGerenciadorDeEstoque->setTabText(tabGerenciadorDeEstoque->indexOf(tab_3), QCoreApplication::translate("TelaGerenciaEstoque", "Lista de Compras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaGerenciaEstoque: public Ui_TelaGerenciaEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAGERENCIAESTOQUE_H
