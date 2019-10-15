#include "mainwindow.h"
#include "telalogincliente.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QGuiApplication::setWindowIcon(QIcon(":/src/fox2.png"));
    MainWindow w;
    w.show();
    return a.exec();
}
