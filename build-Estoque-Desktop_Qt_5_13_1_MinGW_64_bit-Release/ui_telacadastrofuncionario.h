/********************************************************************************
** Form generated from reading UI file 'telacadastrofuncionario.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACADASTROFUNCIONARIO_H
#define UI_TELACADASTROFUNCIONARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaCadastroFuncionario
{
public:
    QFrame *frame;
    QLabel *label_BGcad;
    QPushButton *btnCadastrarFuncionario;
    QLineEdit *txtConfirmarSenhaFuncionario;
    QLabel *lblConfirmarSenhaFuncionarioErro;
    QLineEdit *txtSenhaFuncionario;
    QLineEdit *txtUsuarioFuncionario;
    QLabel *lblSenhaFuncionarioErro;
    QLabel *lblUsuarioFuncionarioErro;
    QLineEdit *txtTelefoneFuncionario;
    QLabel *lblTelefoneFuncionarioErro;
    QLineEdit *txtEmailFuncionario;
    QLineEdit *txtNomeFuncionario;
    QLabel *lblNomeFuncionarioErro;
    QLabel *lblEmailFuncionarioErro;

    void setupUi(QDialog *telaCadastroFuncionario)
    {
        if (telaCadastroFuncionario->objectName().isEmpty())
            telaCadastroFuncionario->setObjectName(QString::fromUtf8("telaCadastroFuncionario"));
        telaCadastroFuncionario->resize(700, 500);
        telaCadastroFuncionario->setMinimumSize(QSize(700, 500));
        telaCadastroFuncionario->setMaximumSize(QSize(700, 500));
        frame = new QFrame(telaCadastroFuncionario);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 700, 500));
        frame->setMinimumSize(QSize(700, 500));
        frame->setMaximumSize(QSize(700, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_BGcad = new QLabel(frame);
        label_BGcad->setObjectName(QString::fromUtf8("label_BGcad"));
        label_BGcad->setGeometry(QRect(-30, 0, 700, 500));
        label_BGcad->setMinimumSize(QSize(700, 500));
        label_BGcad->setMaximumSize(QSize(700, 500));
        label_BGcad->setPixmap(QPixmap(QString::fromUtf8(":/src/cad/now_cadFunc.png")));
        label_BGcad->setScaledContents(true);
        btnCadastrarFuncionario = new QPushButton(frame);
        btnCadastrarFuncionario->setObjectName(QString::fromUtf8("btnCadastrarFuncionario"));
        btnCadastrarFuncionario->setGeometry(QRect(500, 260, 121, 41));
        btnCadastrarFuncionario->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        txtConfirmarSenhaFuncionario = new QLineEdit(frame);
        txtConfirmarSenhaFuncionario->setObjectName(QString::fromUtf8("txtConfirmarSenhaFuncionario"));
        txtConfirmarSenhaFuncionario->setGeometry(QRect(198, 376, 109, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Caviar Dreams"));
        font.setPointSize(16);
        txtConfirmarSenhaFuncionario->setFont(font);
        txtConfirmarSenhaFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtConfirmarSenhaFuncionario->setMaxLength(16);
        txtConfirmarSenhaFuncionario->setEchoMode(QLineEdit::Password);
        lblConfirmarSenhaFuncionarioErro = new QLabel(frame);
        lblConfirmarSenhaFuncionarioErro->setObjectName(QString::fromUtf8("lblConfirmarSenhaFuncionarioErro"));
        lblConfirmarSenhaFuncionarioErro->setGeometry(QRect(320, 380, 150, 16));
        lblConfirmarSenhaFuncionarioErro->setMinimumSize(QSize(150, 16));
        lblConfirmarSenhaFuncionarioErro->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Caviar Dreams"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        lblConfirmarSenhaFuncionarioErro->setFont(font1);
        lblConfirmarSenhaFuncionarioErro->setAutoFillBackground(false);
        lblConfirmarSenhaFuncionarioErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        txtSenhaFuncionario = new QLineEdit(frame);
        txtSenhaFuncionario->setObjectName(QString::fromUtf8("txtSenhaFuncionario"));
        txtSenhaFuncionario->setGeometry(QRect(200, 327, 109, 22));
        txtSenhaFuncionario->setFont(font);
        txtSenhaFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtSenhaFuncionario->setMaxLength(16);
        txtSenhaFuncionario->setEchoMode(QLineEdit::Password);
        txtUsuarioFuncionario = new QLineEdit(frame);
        txtUsuarioFuncionario->setObjectName(QString::fromUtf8("txtUsuarioFuncionario"));
        txtUsuarioFuncionario->setGeometry(QRect(156, 277, 149, 22));
        txtUsuarioFuncionario->setMinimumSize(QSize(0, 0));
        txtUsuarioFuncionario->setFont(font);
        txtUsuarioFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtUsuarioFuncionario->setMaxLength(20);
        txtUsuarioFuncionario->setEchoMode(QLineEdit::Normal);
        lblSenhaFuncionarioErro = new QLabel(frame);
        lblSenhaFuncionarioErro->setObjectName(QString::fromUtf8("lblSenhaFuncionarioErro"));
        lblSenhaFuncionarioErro->setGeometry(QRect(320, 330, 150, 16));
        lblSenhaFuncionarioErro->setMinimumSize(QSize(150, 16));
        lblSenhaFuncionarioErro->setMaximumSize(QSize(150, 16777215));
        lblSenhaFuncionarioErro->setFont(font1);
        lblSenhaFuncionarioErro->setAutoFillBackground(false);
        lblSenhaFuncionarioErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        lblUsuarioFuncionarioErro = new QLabel(frame);
        lblUsuarioFuncionarioErro->setObjectName(QString::fromUtf8("lblUsuarioFuncionarioErro"));
        lblUsuarioFuncionarioErro->setGeometry(QRect(320, 280, 150, 16));
        lblUsuarioFuncionarioErro->setMinimumSize(QSize(150, 16));
        lblUsuarioFuncionarioErro->setMaximumSize(QSize(150, 16777215));
        lblUsuarioFuncionarioErro->setFont(font1);
        lblUsuarioFuncionarioErro->setAutoFillBackground(false);
        lblUsuarioFuncionarioErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        txtTelefoneFuncionario = new QLineEdit(frame);
        txtTelefoneFuncionario->setObjectName(QString::fromUtf8("txtTelefoneFuncionario"));
        txtTelefoneFuncionario->setGeometry(QRect(165, 228, 141, 22));
        txtTelefoneFuncionario->setFont(font);
        txtTelefoneFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        lblTelefoneFuncionarioErro = new QLabel(frame);
        lblTelefoneFuncionarioErro->setObjectName(QString::fromUtf8("lblTelefoneFuncionarioErro"));
        lblTelefoneFuncionarioErro->setGeometry(QRect(320, 230, 180, 16));
        lblTelefoneFuncionarioErro->setMinimumSize(QSize(180, 16));
        lblTelefoneFuncionarioErro->setMaximumSize(QSize(150, 16));
        lblTelefoneFuncionarioErro->setFont(font1);
        lblTelefoneFuncionarioErro->setAutoFillBackground(false);
        lblTelefoneFuncionarioErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        txtEmailFuncionario = new QLineEdit(frame);
        txtEmailFuncionario->setObjectName(QString::fromUtf8("txtEmailFuncionario"));
        txtEmailFuncionario->setGeometry(QRect(128, 178, 178, 22));
        txtEmailFuncionario->setFont(font);
        txtEmailFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtEmailFuncionario->setMaxLength(30);
        txtNomeFuncionario = new QLineEdit(frame);
        txtNomeFuncionario->setObjectName(QString::fromUtf8("txtNomeFuncionario"));
        txtNomeFuncionario->setGeometry(QRect(128, 128, 177, 22));
        txtNomeFuncionario->setFont(font);
        txtNomeFuncionario->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	border:none;\n"
"}"));
        txtNomeFuncionario->setMaxLength(30);
        lblNomeFuncionarioErro = new QLabel(frame);
        lblNomeFuncionarioErro->setObjectName(QString::fromUtf8("lblNomeFuncionarioErro"));
        lblNomeFuncionarioErro->setGeometry(QRect(320, 131, 150, 16));
        lblNomeFuncionarioErro->setMinimumSize(QSize(80, 16));
        lblNomeFuncionarioErro->setFont(font1);
        lblNomeFuncionarioErro->setAutoFillBackground(false);
        lblNomeFuncionarioErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        lblEmailFuncionarioErro = new QLabel(frame);
        lblEmailFuncionarioErro->setObjectName(QString::fromUtf8("lblEmailFuncionarioErro"));
        lblEmailFuncionarioErro->setGeometry(QRect(320, 180, 150, 16));
        lblEmailFuncionarioErro->setMinimumSize(QSize(80, 16));
        lblEmailFuncionarioErro->setFont(font1);
        lblEmailFuncionarioErro->setAutoFillBackground(false);
        lblEmailFuncionarioErro->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: \"white\";\n"
"	background-color: \"transparent\" ;\n"
"	font: 10pt \"Caviar Dreams\";\n"
"}\n"
""));
        QWidget::setTabOrder(txtNomeFuncionario, txtEmailFuncionario);
        QWidget::setTabOrder(txtEmailFuncionario, txtTelefoneFuncionario);
        QWidget::setTabOrder(txtTelefoneFuncionario, txtUsuarioFuncionario);
        QWidget::setTabOrder(txtUsuarioFuncionario, txtSenhaFuncionario);
        QWidget::setTabOrder(txtSenhaFuncionario, txtConfirmarSenhaFuncionario);
        QWidget::setTabOrder(txtConfirmarSenhaFuncionario, btnCadastrarFuncionario);

        retranslateUi(telaCadastroFuncionario);

        QMetaObject::connectSlotsByName(telaCadastroFuncionario);
    } // setupUi

    void retranslateUi(QDialog *telaCadastroFuncionario)
    {
        telaCadastroFuncionario->setWindowTitle(QCoreApplication::translate("telaCadastroFuncionario", "Dialog", nullptr));
        label_BGcad->setText(QString());
        btnCadastrarFuncionario->setText(QString());
        lblConfirmarSenhaFuncionarioErro->setText(QString());
        lblSenhaFuncionarioErro->setText(QString());
        lblUsuarioFuncionarioErro->setText(QString());
        txtTelefoneFuncionario->setInputMask(QCoreApplication::translate("telaCadastroFuncionario", "(00)00000-0000", nullptr));
        lblTelefoneFuncionarioErro->setText(QString());
        lblNomeFuncionarioErro->setText(QString());
        lblEmailFuncionarioErro->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class telaCadastroFuncionario: public Ui_telaCadastroFuncionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTROFUNCIONARIO_H
