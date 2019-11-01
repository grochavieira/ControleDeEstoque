#ifndef TELAESTOCAPRODUTOS_H
#define TELAESTOCAPRODUTOS_H

#include <QDialog>

namespace Ui {
class telaEstocaProdutos;
}

class telaEstocaProdutos : public QDialog
{
    Q_OBJECT

public:
    explicit telaEstocaProdutos(QWidget *parent = nullptr);
    ~telaEstocaProdutos();

private:
    Ui::telaEstocaProdutos *ui;
};

#endif // TELAESTOCAPRODUTOS_H
