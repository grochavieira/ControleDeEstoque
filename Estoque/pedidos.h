#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <QString>
#include <QDebug>

class Pedidos
{
private:
    int idPedido;
    int idCliente;
    QString nomeCliente;
    QString telefoneCliente;
    QString cepCliente;
    int numEnderecoCliente;
    int idProduto;
    QString nomeProduto;
    int qtdProduto;
    double precoTotalProduto;
    bool pedidoEntregue;

public:
    Pedidos(int idPedido, int idCliente, QString nomeCliente, QString cepCliente, int numEnderecoCliente,
            QString telefoneCliente, int idProduto, QString nomeProduto, int qtdProduto,
            double precoTotalProduto, bool pedidoEntregue)
    {
        this->idPedido = idPedido;
        this->idCliente = idCliente;
        this->nomeCliente = nomeCliente;
        this->telefoneCliente = telefoneCliente;
        this->cepCliente = cepCliente;
        this->numEnderecoCliente = numEnderecoCliente;
        this->idProduto = idProduto;
        this->nomeProduto = nomeProduto;
        this->qtdProduto = qtdProduto;
        this->precoTotalProduto = precoTotalProduto;
        this->pedidoEntregue = pedidoEntregue;
    }

    Pedidos(Pedidos *pedidos)
    {
        this->idPedido = pedidos->idPedido;
        this->idCliente = pedidos->idCliente;
        this->nomeCliente = pedidos->nomeCliente;
        this->telefoneCliente = pedidos->telefoneCliente;
        this->cepCliente = pedidos->cepCliente;
        this->numEnderecoCliente = pedidos->numEnderecoCliente;
        this->idProduto = pedidos->idProduto;
        this->nomeProduto = pedidos->nomeProduto;
        this->qtdProduto = pedidos->qtdProduto;
        this->precoTotalProduto = pedidos->precoTotalProduto;
        this->pedidoEntregue = pedidos->pedidoEntregue;
    }

    Pedidos()
    {
        idPedido = -1;
        idCliente = 0;
        nomeCliente = "";
        telefoneCliente = "";
        cepCliente = "";
        idProduto = 0;
        nomeProduto = "";
        qtdProduto = 0;
        precoTotalProduto = 0;
        numEnderecoCliente = 0;
        pedidoEntregue = false;
    }

    int getId()
    {
        return idPedido;
    }

    int getIdCliente()
    {
        return idCliente;
    }

    QString getNomeCliente()
    {
        return nomeCliente;
    }

    QString getTelefoneCliente()
    {
        return telefoneCliente;
    }

    QString getCepCliente()
    {
        return cepCliente;
    }

    int getNumEnderecoCliente()
    {
        return numEnderecoCliente;
    }

    int getIdProduto()
    {
        return idProduto;
    }

    QString getNomeProduto()
    {
        return nomeProduto;
    }

    int getQtdProduto()
    {
        return qtdProduto;
    }

    double getPrecoTotalProduto()
    {
        return precoTotalProduto;
    }

    bool getPedidoEntregue()
    {
        return pedidoEntregue;
    }

    void Imprime()
    {
        qDebug() << "Id Pedido: " << idPedido;
        qDebug() << "ID do Cliente: " << idCliente;
        qDebug() << "Nome do Cliente: " << nomeCliente;
        qDebug() << "telefoneCliente: " << telefoneCliente;
        qDebug() << "cepCliente: " << cepCliente;
        qDebug() << "ID do Produto: " << idProduto;
        qDebug() << "Nome do Produto: " << nomeProduto;
        qDebug() << "Quantidade do produto: " << qtdProduto;
        qDebug() << "Num. Endereço: " << numEnderecoCliente;
        qDebug() << "Status Pedido: " << pedidoEntregue;
    }

    template <class F>
    friend class LDDE;
};

#endif // PEDIDOS_H
