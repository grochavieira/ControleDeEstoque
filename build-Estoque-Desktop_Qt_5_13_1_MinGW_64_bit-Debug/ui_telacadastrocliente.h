/********************************************************************************
** Form generated from reading UI file 'telacadastrocliente.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACADASTROCLIENTE_H
#define UI_TELACADASTROCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TelaCadastroCliente
{
public:
    QPushButton *btnCadastrarCliente;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *txtTelefoneCliente;
    QLineEdit *txtCepCliente;
    QLineEdit *txtEmailCliente;
    QLineEdit *txtNomeCliente;
    QLineEdit *txtUsuarioCliente;
    QLineEdit *txtSenhaCliente;
    QLineEdit *txtConfirmarSenhaCliente;
    QSpinBox *spnNumEnderecoCliente;
    QLabel *lblNomeClienteErro;
    QLabel *lblTelefoneClienteErro;
    QLabel *lblCepClienteErro;
    QLabel *lblEmailClienteErro;
    QLabel *lblNumEnderecoClienteErro;
    QLabel *lblUsuarioClienteErro;
    QLabel *lblSenhaClienteErro;
    QLabel *lblConfirmarSenhaClienteErro;

    void setupUi(QDialog *TelaCadastroCliente)
    {
        if (TelaCadastroCliente->objectName().isEmpty())
            TelaCadastroCliente->setObjectName(QString::fromUtf8("TelaCadastroCliente"));
        TelaCadastroCliente->resize(546, 335);
        btnCadastrarCliente = new QPushButton(TelaCadastroCliente);
        btnCadastrarCliente->setObjectName(QString::fromUtf8("btnCadastrarCliente"));
        btnCadastrarCliente->setGeometry(QRect(170, 270, 121, 41));
        label = new QLabel(TelaCadastroCliente);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 31, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(TelaCadastroCliente);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(93, 50, 31, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(TelaCadastroCliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 80, 46, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(TelaCadastroCliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 23, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(TelaCadastroCliente);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 200, 34, 16));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(TelaCadastroCliente);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 140, 110, 16));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(TelaCadastroCliente);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 170, 40, 16));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(TelaCadastroCliente);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 220, 84, 16));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtTelefoneCliente = new QLineEdit(TelaCadastroCliente);
        txtTelefoneCliente->setObjectName(QString::fromUtf8("txtTelefoneCliente"));
        txtTelefoneCliente->setGeometry(QRect(141, 79, 91, 22));
        txtCepCliente = new QLineEdit(TelaCadastroCliente);
        txtCepCliente->setObjectName(QString::fromUtf8("txtCepCliente"));
        txtCepCliente->setGeometry(QRect(141, 107, 71, 22));
        txtCepCliente->setMaxLength(9);
        txtEmailCliente = new QLineEdit(TelaCadastroCliente);
        txtEmailCliente->setObjectName(QString::fromUtf8("txtEmailCliente"));
        txtEmailCliente->setGeometry(QRect(141, 51, 191, 22));
        txtEmailCliente->setMaxLength(30);
        txtNomeCliente = new QLineEdit(TelaCadastroCliente);
        txtNomeCliente->setObjectName(QString::fromUtf8("txtNomeCliente"));
        txtNomeCliente->setGeometry(QRect(141, 23, 191, 22));
        txtNomeCliente->setMaxLength(30);
        txtUsuarioCliente = new QLineEdit(TelaCadastroCliente);
        txtUsuarioCliente->setObjectName(QString::fromUtf8("txtUsuarioCliente"));
        txtUsuarioCliente->setGeometry(QRect(141, 164, 131, 22));
        txtUsuarioCliente->setMaxLength(20);
        txtUsuarioCliente->setEchoMode(QLineEdit::Normal);
        txtSenhaCliente = new QLineEdit(TelaCadastroCliente);
        txtSenhaCliente->setObjectName(QString::fromUtf8("txtSenhaCliente"));
        txtSenhaCliente->setGeometry(QRect(141, 192, 121, 22));
        txtSenhaCliente->setMaxLength(16);
        txtSenhaCliente->setEchoMode(QLineEdit::Password);
        txtConfirmarSenhaCliente = new QLineEdit(TelaCadastroCliente);
        txtConfirmarSenhaCliente->setObjectName(QString::fromUtf8("txtConfirmarSenhaCliente"));
        txtConfirmarSenhaCliente->setGeometry(QRect(141, 220, 121, 22));
        txtConfirmarSenhaCliente->setMaxLength(16);
        txtConfirmarSenhaCliente->setEchoMode(QLineEdit::Password);
        spnNumEnderecoCliente = new QSpinBox(TelaCadastroCliente);
        spnNumEnderecoCliente->setObjectName(QString::fromUtf8("spnNumEnderecoCliente"));
        spnNumEnderecoCliente->setGeometry(QRect(141, 135, 49, 23));
        spnNumEnderecoCliente->setMinimum(1);
        spnNumEnderecoCliente->setMaximum(9999);
        lblNomeClienteErro = new QLabel(TelaCadastroCliente);
        lblNomeClienteErro->setObjectName(QString::fromUtf8("lblNomeClienteErro"));
        lblNomeClienteErro->setGeometry(QRect(340, 20, 201, 16));
        lblNomeClienteErro->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        lblNomeClienteErro->setFont(font);
        lblNomeClienteErro->setAutoFillBackground(false);
        lblNomeClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblTelefoneClienteErro = new QLabel(TelaCadastroCliente);
        lblTelefoneClienteErro->setObjectName(QString::fromUtf8("lblTelefoneClienteErro"));
        lblTelefoneClienteErro->setGeometry(QRect(240, 80, 200, 16));
        lblTelefoneClienteErro->setMinimumSize(QSize(200, 0));
        lblTelefoneClienteErro->setFont(font);
        lblTelefoneClienteErro->setAutoFillBackground(false);
        lblTelefoneClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblCepClienteErro = new QLabel(TelaCadastroCliente);
        lblCepClienteErro->setObjectName(QString::fromUtf8("lblCepClienteErro"));
        lblCepClienteErro->setGeometry(QRect(220, 110, 200, 16));
        lblCepClienteErro->setMinimumSize(QSize(200, 0));
        lblCepClienteErro->setFont(font);
        lblCepClienteErro->setAutoFillBackground(false);
        lblCepClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblEmailClienteErro = new QLabel(TelaCadastroCliente);
        lblEmailClienteErro->setObjectName(QString::fromUtf8("lblEmailClienteErro"));
        lblEmailClienteErro->setGeometry(QRect(340, 50, 200, 16));
        lblEmailClienteErro->setMinimumSize(QSize(200, 0));
        lblEmailClienteErro->setFont(font);
        lblEmailClienteErro->setAutoFillBackground(false);
        lblEmailClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblNumEnderecoClienteErro = new QLabel(TelaCadastroCliente);
        lblNumEnderecoClienteErro->setObjectName(QString::fromUtf8("lblNumEnderecoClienteErro"));
        lblNumEnderecoClienteErro->setGeometry(QRect(200, 140, 200, 16));
        lblNumEnderecoClienteErro->setMinimumSize(QSize(200, 0));
        lblNumEnderecoClienteErro->setFont(font);
        lblNumEnderecoClienteErro->setAutoFillBackground(false);
        lblNumEnderecoClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblUsuarioClienteErro = new QLabel(TelaCadastroCliente);
        lblUsuarioClienteErro->setObjectName(QString::fromUtf8("lblUsuarioClienteErro"));
        lblUsuarioClienteErro->setGeometry(QRect(290, 170, 200, 16));
        lblUsuarioClienteErro->setMinimumSize(QSize(200, 0));
        lblUsuarioClienteErro->setFont(font);
        lblUsuarioClienteErro->setAutoFillBackground(false);
        lblUsuarioClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblSenhaClienteErro = new QLabel(TelaCadastroCliente);
        lblSenhaClienteErro->setObjectName(QString::fromUtf8("lblSenhaClienteErro"));
        lblSenhaClienteErro->setGeometry(QRect(280, 200, 200, 16));
        lblSenhaClienteErro->setMinimumSize(QSize(200, 0));
        lblSenhaClienteErro->setFont(font);
        lblSenhaClienteErro->setAutoFillBackground(false);
        lblSenhaClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        lblConfirmarSenhaClienteErro = new QLabel(TelaCadastroCliente);
        lblConfirmarSenhaClienteErro->setObjectName(QString::fromUtf8("lblConfirmarSenhaClienteErro"));
        lblConfirmarSenhaClienteErro->setGeometry(QRect(280, 230, 200, 16));
        lblConfirmarSenhaClienteErro->setMinimumSize(QSize(200, 0));
        lblConfirmarSenhaClienteErro->setFont(font);
        lblConfirmarSenhaClienteErro->setAutoFillBackground(false);
        lblConfirmarSenhaClienteErro->setStyleSheet(QString::fromUtf8("color: \"red\";\n"
"background: \"white\";\n"
""));
        QWidget::setTabOrder(txtNomeCliente, txtEmailCliente);
        QWidget::setTabOrder(txtEmailCliente, txtTelefoneCliente);
        QWidget::setTabOrder(txtTelefoneCliente, txtCepCliente);
        QWidget::setTabOrder(txtCepCliente, spnNumEnderecoCliente);
        QWidget::setTabOrder(spnNumEnderecoCliente, txtUsuarioCliente);
        QWidget::setTabOrder(txtUsuarioCliente, txtSenhaCliente);
        QWidget::setTabOrder(txtSenhaCliente, txtConfirmarSenhaCliente);
        QWidget::setTabOrder(txtConfirmarSenhaCliente, btnCadastrarCliente);

        retranslateUi(TelaCadastroCliente);

        QMetaObject::connectSlotsByName(TelaCadastroCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaCadastroCliente)
    {
        TelaCadastroCliente->setWindowTitle(QCoreApplication::translate("TelaCadastroCliente", "Dialog", nullptr));
        btnCadastrarCliente->setText(QCoreApplication::translate("TelaCadastroCliente", "CADASTRAR", nullptr));
        label->setText(QCoreApplication::translate("TelaCadastroCliente", "Nome:", nullptr));
        label_4->setText(QCoreApplication::translate("TelaCadastroCliente", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("TelaCadastroCliente", "Telefone:", nullptr));
        label_2->setText(QCoreApplication::translate("TelaCadastroCliente", "CEP:", nullptr));
        label_5->setText(QCoreApplication::translate("TelaCadastroCliente", "Senha:", nullptr));
        label_8->setText(QCoreApplication::translate("TelaCadastroCliente", "Numero da Resid\303\252ncia:", nullptr));
        label_7->setText(QCoreApplication::translate("TelaCadastroCliente", "Usu\303\241rio:", nullptr));
        label_6->setText(QCoreApplication::translate("TelaCadastroCliente", "Confirmar Senha:", nullptr));
        txtTelefoneCliente->setInputMask(QCoreApplication::translate("TelaCadastroCliente", "(00)00000-0000", nullptr));
        txtCepCliente->setInputMask(QCoreApplication::translate("TelaCadastroCliente", "00000-000", nullptr));
        lblNomeClienteErro->setText(QString());
        lblTelefoneClienteErro->setText(QString());
        lblCepClienteErro->setText(QString());
        lblEmailClienteErro->setText(QString());
        lblNumEnderecoClienteErro->setText(QString());
        lblUsuarioClienteErro->setText(QString());
        lblSenhaClienteErro->setText(QString());
        lblConfirmarSenhaClienteErro->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaCadastroCliente: public Ui_TelaCadastroCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTROCLIENTE_H
