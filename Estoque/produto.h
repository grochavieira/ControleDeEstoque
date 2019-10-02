#ifndef PRODUTO_H
#define PRODUTO_H

#include<iostream>
#include<QString>
#include<QDebug>

class Produto{
private:
    int id;
    QString nome;
    double preco;
    int quantidade;
    int quantidadeMin;
    int quantidadeMax;

public:
    Produto(int id, QString nome, double preco, int quantidade, int quantidadeMin, int quantidadeMax){
        this->id = id;
        this->nome = nome;
        this->preco = preco;
        this->quantidade = quantidade;
        this->quantidadeMin = quantidadeMin;
        this->quantidadeMax = quantidadeMax;
    }

    Produto(Produto* produto){
        this->id = produto->id;
        this->nome = produto->nome;
        this->preco = produto->preco;
        this->quantidade = produto->quantidade;
        this->quantidadeMin = produto->quantidadeMin;
        this->quantidadeMax = produto->quantidadeMax;
    }

    Produto(){
        id = 0;
        nome = "";
        preco = 0;
        quantidade = 0;
        quantidadeMax = 0;
    }

    int getId(){
        return id;
    }

    void Imprime(){
        qDebug() << "ID: " << id;
        qDebug() << "Produto: " << nome;
        qDebug() << "Preco: " << preco;
        qDebug() << "Quantidade: " << quantidade;
        qDebug() << "Quantidade Maxima: " << quantidadeMax;
    }

    template <class F>
    friend class LDDE;
};


#endif // PRODUTO_H
