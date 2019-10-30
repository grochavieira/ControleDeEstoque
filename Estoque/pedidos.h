#ifndef PEDIDOS_H
#define PEDIDOS_H

#include<QString>
#include<QDebug>

class Pedidos{
private:
    int idGeral;
    int idProduto;
    int qntProduto;
    QString nomeProduto;

    int idCliente;
    QString nomeCliente;
    QString telefone;
    QString cep;
    int numeroEndereco;

public:

    /*

    idgeral   int
    id cliente int
    cep        string

    num endereço int
    telefone     string
    id produto   int

    produto qt   int
    nome_cliente string
    */

    Pedidos(int idGeral,
            int idCliente,
            QString cep,
            int numeroEndereco,
            QString telefone,
            int idProduto,
            int qntProduto,
            QString nomeCliente){

        this->idGeral = idGeral;
        this->idProduto = idProduto;
        this->qntProduto = qntProduto;
        //this->nomeProduto = nomeProduto;

        this->idCliente = idCliente;
        this->nomeCliente = nomeCliente;
        this->telefone = telefone;
        this->cep = cep;
        this->numeroEndereco = numeroEndereco;
    }

    Pedidos(Pedidos *pedidos){
        this->idGeral = pedidos->idGeral;
        this->idProduto = pedidos->idProduto;
        this->qntProduto = pedidos->qntProduto;
        //this->nomeProduto = pedidos->nomeProduto;

        this->idCliente = pedidos->idCliente;
        this->nomeCliente = pedidos->nomeCliente;
        this->telefone = pedidos->telefone;
        this->cep = pedidos->cep;
        this->numeroEndereco = pedidos->numeroEndereco;
    }
    Pedidos(){
        idProduto = -1;
        qntProduto = 0;
        //nomeProduto = "";
        idGeral = -1;
        idCliente = -1;
        nomeCliente = "";
        telefone = "";
        cep = "";
        numeroEndereco = 0;
    }
    int getId(){//pra n dar conflito
        return idProduto;
    }

    int getIdGeral(){
        return idGeral;
    }

    int getIdProduto(){
        return idProduto;
    }

    int getQntProduto(){
        return qntProduto;
    }
/*
    QString getNomeProduto(){
        return nomeProduto;
    }
*/
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
        qDebug() << "Id geral: " << idGeral;
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
