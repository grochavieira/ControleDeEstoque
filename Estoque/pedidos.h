#ifndef PEDIDOS_H
#define PEDIDOS_H

#include<QString>
#include<QDebug>

class Pedidos{
private:
    int idProduto;
    int qntProduto;
    QString nomeProduto;

    int idCliente;
    QString nomeCliente;
    QString telefone;
    QString cep;
    int numeroEndereco;

public:
    Pedidos(int idProduto, int qntProduto, QString nomeProduto, int idCliente, QString nomeCliente, QString telefone, QString cep, int numeroEndereco){
        this->idProduto = idProduto;
        this->qntProduto = qntProduto;
        this->nomeProduto = nomeProduto;

        this->idCliente = idCliente;
        this->nomeCliente = nomeCliente;
        this->telefone = telefone;
        this->cep = cep;
        this->numeroEndereco = numeroEndereco;
    }

    Pedidos(Pedidos *pedidos){
        this->idProduto = pedidos->idProduto;
        this->qntProduto = pedidos->qntProduto;
        this->nomeProduto = pedidos->nomeProduto;

        this->idCliente = pedidos->idCliente;
        this->nomeCliente = pedidos->nomeCliente;
        this->telefone = pedidos->telefone;
        this->cep = pedidos->cep;
        this->numeroEndereco = pedidos->numeroEndereco;
    }
    Pedidos(){
        idProduto = -1;
        qntProduto = 0;
        nomeProduto = "";

        idCliente = -1;
        nomeCliente = "";
        telefone = "";
        cep = "";
        numeroEndereco = 0;
    }

    int getId(){
        return idProduto;
    }

    int getQntProduto(){
        return qntProduto;
    }

    QString getNomeProduto(){
        return nomeProduto;
    }

    int getIdCliente(){
        return idCliente;
    }

    QString getNomeCliente(){
        return nomeCliente;
    }

    QString getTelefone(){
        return telefone;
    }

    QString getCep(){
        return cep;
    }

    int getNumeroEndereco(){
        return numeroEndereco;
    }

    void Imprime(){
        qDebug() << "ID do Produto: " << idProduto;
        qDebug() << "Quantidade do produto: " << qntProduto;
        qDebug() << "Nome do Produto: " << nomeProduto;
        qDebug() << "ID do Cliente: " << idCliente;
        qDebug() << "Nome do Cliente: " << nomeCliente;
        qDebug() << "Telefone: " << telefone;
        qDebug() << "CEP: " << cep;
        qDebug() << "Num.: " << numeroEndereco;
    }

    template <class F>
    friend class LDDE;
};

#endif // PEDIDOS_H
