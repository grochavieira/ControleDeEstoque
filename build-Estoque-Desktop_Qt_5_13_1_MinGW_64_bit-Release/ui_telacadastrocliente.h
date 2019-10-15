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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TelaCadastroCliente
{
public:
    QFrame *frame;
    QLabel *lblUsuarioClienteErro;
    QLineEdit *txtSenhaCliente;
    QLabel *lblNumEnderecoClienteErro;
    QSpinBox *spnNumEnderecoCliente;
    QLineEdit *txtEmailCliente;
    QLabel *lblConfirmarSenhaClienteErro;
    QLabel *lblSenhaClienteErro;
    QLabel *lblCepClienteErro;
    QLabel *lblNomeClienteErro;
    QLineEdit *txtTelefoneCliente;
    QLabel *lblTelefoneClienteErro;
    QLineEdit *txtNomeCliente;
    QLineEdit *txtUsuarioCliente;
    QLineEdit *txtConfirmarSenhaCliente;
    QLabel *lblEmailClienteErro;
    QLineEdit *txtCepCliente;
    QPushButton *btnCadastrarCliente;
    QLabel *label_BGcAD;
    QLabel *label;

    void setupUi(QDialog *TelaCadastroCliente)
    {
        if (TelaCadastroCliente->objectName().isEmpty())
            TelaCadastroCliente->setObjectName(QString::fromUtf8("TelaCadastroCliente"));
        TelaCadastroCliente->resize(700, 500);
        TelaCadastroCliente->setMinimumSize(QSize(700, 500));
        TelaCadastroCliente->setMaximumSize(QSize(700, 500));
        frame = new QFrame(TelaCadastroCliente);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 700, 500));
        frame->setMinimumSize(QSize(700, 500));
        frame->setMaximumSize(QSize(700, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lblUsuarioClienteErro = new QLabel(frame);
        lblUsuarioClienteErro->setObjectName(QString::fromUtf8("lblUsuarioClienteErro"));
        lblUsuarioClienteErro->setGeometry(QRect(320, 344, 120, 16));
        lblUsuarioClienteErro->setMinimumSize(QSize(120, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lblUsuarioClienteErro->setFont(font);
        lblUsuarioClienteErro->setAutoFillBackground(false);
        lblUsuarioClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        txtSenhaCliente = new QLineEdit(frame);
        txtSenhaCliente->setObjectName(QString::fromUtf8("txtSenhaCliente"));
        txtSenhaCliente->setGeometry(QRect(202, 384, 107, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Caviar Dreams"));
        font1.setPointSize(14);
        txtSenhaCliente->setFont(font1);
        txtSenhaCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtSenhaCliente->setMaxLength(16);
        txtSenhaCliente->setEchoMode(QLineEdit::Password);
        lblNumEnderecoClienteErro = new QLabel(frame);
        lblNumEnderecoClienteErro->setObjectName(QString::fromUtf8("lblNumEnderecoClienteErro"));
        lblNumEnderecoClienteErro->setGeometry(QRect(320, 300, 150, 16));
        lblNumEnderecoClienteErro->setMinimumSize(QSize(120, 16));
        lblNumEnderecoClienteErro->setFont(font);
        lblNumEnderecoClienteErro->setAutoFillBackground(false);
        lblNumEnderecoClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        spnNumEnderecoCliente = new QSpinBox(frame);
        spnNumEnderecoCliente->setObjectName(QString::fromUtf8("spnNumEnderecoCliente"));
        spnNumEnderecoCliente->setGeometry(QRect(230, 297, 80, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Caviar Dreams"));
        font2.setPointSize(13);
        spnNumEnderecoCliente->setFont(font2);
        spnNumEnderecoCliente->setMinimum(1);
        spnNumEnderecoCliente->setMaximum(9999);
        txtEmailCliente = new QLineEdit(frame);
        txtEmailCliente->setObjectName(QString::fromUtf8("txtEmailCliente"));
        txtEmailCliente->setGeometry(QRect(132, 170, 175, 22));
        txtEmailCliente->setFont(font1);
        txtEmailCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtEmailCliente->setMaxLength(30);
        lblConfirmarSenhaClienteErro = new QLabel(frame);
        lblConfirmarSenhaClienteErro->setObjectName(QString::fromUtf8("lblConfirmarSenhaClienteErro"));
        lblConfirmarSenhaClienteErro->setGeometry(QRect(320, 430, 150, 16));
        lblConfirmarSenhaClienteErro->setMinimumSize(QSize(120, 16));
        lblConfirmarSenhaClienteErro->setFont(font);
        lblConfirmarSenhaClienteErro->setAutoFillBackground(false);
        lblConfirmarSenhaClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        lblSenhaClienteErro = new QLabel(frame);
        lblSenhaClienteErro->setObjectName(QString::fromUtf8("lblSenhaClienteErro"));
        lblSenhaClienteErro->setGeometry(QRect(320, 388, 150, 16));
        lblSenhaClienteErro->setMinimumSize(QSize(120, 16));
        lblSenhaClienteErro->setFont(font);
        lblSenhaClienteErro->setAutoFillBackground(false);
        lblSenhaClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        lblCepClienteErro = new QLabel(frame);
        lblCepClienteErro->setObjectName(QString::fromUtf8("lblCepClienteErro"));
        lblCepClienteErro->setGeometry(QRect(320, 260, 150, 16));
        lblCepClienteErro->setMinimumSize(QSize(120, 16));
        lblCepClienteErro->setFont(font);
        lblCepClienteErro->setAutoFillBackground(false);
        lblCepClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        lblNomeClienteErro = new QLabel(frame);
        lblNomeClienteErro->setObjectName(QString::fromUtf8("lblNomeClienteErro"));
        lblNomeClienteErro->setGeometry(QRect(320, 130, 150, 16));
        lblNomeClienteErro->setMinimumSize(QSize(150, 16));
        lblNomeClienteErro->setMaximumSize(QSize(100, 16));
        lblNomeClienteErro->setFont(font);
        lblNomeClienteErro->setAutoFillBackground(false);
        lblNomeClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        txtTelefoneCliente = new QLineEdit(frame);
        txtTelefoneCliente->setObjectName(QString::fromUtf8("txtTelefoneCliente"));
        txtTelefoneCliente->setGeometry(QRect(169, 213, 137, 22));
        txtTelefoneCliente->setFont(font1);
        txtTelefoneCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        lblTelefoneClienteErro = new QLabel(frame);
        lblTelefoneClienteErro->setObjectName(QString::fromUtf8("lblTelefoneClienteErro"));
        lblTelefoneClienteErro->setGeometry(QRect(320, 214, 180, 16));
        lblTelefoneClienteErro->setMinimumSize(QSize(120, 16));
        lblTelefoneClienteErro->setFont(font);
        lblTelefoneClienteErro->setAutoFillBackground(false);
        lblTelefoneClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        txtNomeCliente = new QLineEdit(frame);
        txtNomeCliente->setObjectName(QString::fromUtf8("txtNomeCliente"));
        txtNomeCliente->setGeometry(QRect(132, 127, 176, 22));
        txtNomeCliente->setFont(font1);
        txtNomeCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtNomeCliente->setMaxLength(30);
        txtUsuarioCliente = new QLineEdit(frame);
        txtUsuarioCliente->setObjectName(QString::fromUtf8("txtUsuarioCliente"));
        txtUsuarioCliente->setGeometry(QRect(160, 340, 146, 23));
        txtUsuarioCliente->setFont(font1);
        txtUsuarioCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtUsuarioCliente->setMaxLength(20);
        txtUsuarioCliente->setEchoMode(QLineEdit::Normal);
        txtConfirmarSenhaCliente = new QLineEdit(frame);
        txtConfirmarSenhaCliente->setObjectName(QString::fromUtf8("txtConfirmarSenhaCliente"));
        txtConfirmarSenhaCliente->setGeometry(QRect(200, 426, 109, 22));
        txtConfirmarSenhaCliente->setFont(font1);
        txtConfirmarSenhaCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtConfirmarSenhaCliente->setMaxLength(16);
        txtConfirmarSenhaCliente->setEchoMode(QLineEdit::Password);
        lblEmailClienteErro = new QLabel(frame);
        lblEmailClienteErro->setObjectName(QString::fromUtf8("lblEmailClienteErro"));
        lblEmailClienteErro->setGeometry(QRect(320, 172, 150, 16));
        lblEmailClienteErro->setMinimumSize(QSize(150, 16));
        lblEmailClienteErro->setMaximumSize(QSize(100, 16));
        lblEmailClienteErro->setFont(font);
        lblEmailClienteErro->setAutoFillBackground(false);
        lblEmailClienteErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        txtCepCliente = new QLineEdit(frame);
        txtCepCliente->setObjectName(QString::fromUtf8("txtCepCliente"));
        txtCepCliente->setGeometry(QRect(235, 255, 73, 22));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Caviar Dreams"));
        font3.setPointSize(9);
        txtCepCliente->setFont(font3);
        txtCepCliente->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtCepCliente->setMaxLength(9);
        btnCadastrarCliente = new QPushButton(frame);
        btnCadastrarCliente->setObjectName(QString::fromUtf8("btnCadastrarCliente"));
        btnCadastrarCliente->setGeometry(QRect(510, 250, 121, 41));
        btnCadastrarCliente->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"\n"
"	background-color:transparent;\n"
"   	border-image:url(:/src/cad/now_btnCadNormal.png);\n"
"	background:none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:focus:pressed\n"
"{\n"
"   	border-image: url(:/src/cad/now_btnCadClick.png);\n"
"}\n"
"\n"
"\n"
"QPushButton#quit_button\n"
"{\n"
"   	border-image:url(:/src/cad/now_btnCadNormal.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   	border-image:url(:/src/cad/now_btnCadHOver.png);\n"
"}\n"
"\n"
"QPushButton:hover#quit_button\n"
"{\n"
"   	border-image:url(:/src/cad/now_btnCadNormal.png);\n"
"}"));
        label_BGcAD = new QLabel(frame);
        label_BGcAD->setObjectName(QString::fromUtf8("label_BGcAD"));
        label_BGcAD->setGeometry(QRect(-30, 0, 700, 500));
        label_BGcAD->setMinimumSize(QSize(700, 500));
        label_BGcAD->setMaximumSize(QSize(700, 500));
        label_BGcAD->setPixmap(QPixmap(QString::fromUtf8(":/src/cad/now_CadClie.png")));
        label_BGcAD->setScaledContents(true);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 699, 499));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: white;\n"
"}"));
        label->raise();
        label_BGcAD->raise();
        lblUsuarioClienteErro->raise();
        txtSenhaCliente->raise();
        lblNumEnderecoClienteErro->raise();
        spnNumEnderecoCliente->raise();
        txtEmailCliente->raise();
        lblConfirmarSenhaClienteErro->raise();
        lblSenhaClienteErro->raise();
        lblNomeClienteErro->raise();
        txtTelefoneCliente->raise();
        lblTelefoneClienteErro->raise();
        txtNomeCliente->raise();
        txtUsuarioCliente->raise();
        txtConfirmarSenhaCliente->raise();
        lblEmailClienteErro->raise();
        txtCepCliente->raise();
        btnCadastrarCliente->raise();
        lblCepClienteErro->raise();

        retranslateUi(TelaCadastroCliente);

        QMetaObject::connectSlotsByName(TelaCadastroCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaCadastroCliente)
    {
        TelaCadastroCliente->setWindowTitle(QCoreApplication::translate("TelaCadastroCliente", "Dialog", nullptr));
        lblUsuarioClienteErro->setText(QString());
        lblNumEnderecoClienteErro->setText(QString());
        lblConfirmarSenhaClienteErro->setText(QString());
        lblSenhaClienteErro->setText(QString());
        lblCepClienteErro->setText(QString());
        lblNomeClienteErro->setText(QString());
        txtTelefoneCliente->setInputMask(QCoreApplication::translate("TelaCadastroCliente", "(00)00000-0000", nullptr));
        lblTelefoneClienteErro->setText(QString());
        lblEmailClienteErro->setText(QString());
        txtCepCliente->setInputMask(QCoreApplication::translate("TelaCadastroCliente", "00000-000", nullptr));
        btnCadastrarCliente->setText(QString());
        label_BGcAD->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TelaCadastroCliente: public Ui_TelaCadastroCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTROCLIENTE_H
