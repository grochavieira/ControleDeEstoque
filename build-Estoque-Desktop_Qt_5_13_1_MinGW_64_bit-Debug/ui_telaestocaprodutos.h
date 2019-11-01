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

QT_BEGIN_NAMESPACE

class Ui_telaEstocaProdutos
{
public:

    void setupUi(QDialog *telaEstocaProdutos)
    {
        if (telaEstocaProdutos->objectName().isEmpty())
            telaEstocaProdutos->setObjectName(QString::fromUtf8("telaEstocaProdutos"));
        telaEstocaProdutos->resize(640, 480);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        telaEstocaProdutos->setFont(font);

        retranslateUi(telaEstocaProdutos);

        QMetaObject::connectSlotsByName(telaEstocaProdutos);
    } // setupUi

    void retranslateUi(QDialog *telaEstocaProdutos)
    {
        telaEstocaProdutos->setWindowTitle(QCoreApplication::translate("telaEstocaProdutos", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaEstocaProdutos: public Ui_telaEstocaProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAESTOCAPRODUTOS_H
