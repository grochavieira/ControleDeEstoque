#ifndef COMPRAS_H
#define COMPRAS_H

#include <QString>
#include <QDebug>

class Compras
{
private:
    int idProduto;
    int qntProduto;
    QString nome;
    double preco;

public:
    Compras(int idProduto, int qntProduto, QString nome, double preco)
    {
        this->idProduto = idProduto;
        this->qntProduto = qntProduto;
        this->nome = nome;
        this->preco = preco;
    }

    Compras(Compras *compra)
    {
        this->idProduto = compra->idProduto;
        this->qntProduto = compra->qntProduto;
        this->nome = compra->nome;
        this->preco = compra->preco;
    }
    Compras()
    {
        idProduto = -1;
        qntProduto = 0;
        nome = "";
        preco = 0.0;
    }

    int getId()
    {
        return idProduto;
    }

    int getQntProduto()
    {
        return qntProduto;
    }

    QString getNome()
    {
        return nome;
    }

    double getPreco()
    {
        return preco;
    }

    void Imprime()
    {
        qDebug() << "ID do Produto: " << idProduto;
        qDebug() << "Quantidade do produto: " << qntProduto;
    }

    template <class F>
    friend class LDDE;
};

#endif // COMPRAS_H
