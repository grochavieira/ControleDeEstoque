#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <QString>
#include <QDebug>

class Produto
{
private:
    int id;
    QString nome;
    double preco;
    int quantidade;
    int quantidadeMin;
    int quantidadeMax;
    double prioridade;

public:
    Produto(int id, QString nome, double preco, int quantidade, int quantidadeMin, int quantidadeMax)
    {
        this->id = id;
        this->nome = nome;
        this->preco = preco;
        this->quantidade = quantidade;
        this->quantidadeMin = quantidadeMin;
        this->quantidadeMax = quantidadeMax;
        if(quantidade <= quantidadeMin){
            this->prioridade = 100;
        }
        else{
            this->prioridade = 100 - ((quantidade * 100.0) / quantidadeMax);
        }
    }

    Produto(Produto *produto)
    {
        this->id = produto->id;
        this->nome = produto->nome;
        this->preco = produto->preco;
        this->quantidade = produto->quantidade;
        this->quantidadeMin = produto->quantidadeMin;
        this->quantidadeMax = produto->quantidadeMax;
        this->prioridade = produto->prioridade;
    }

    Produto()
    {
        id = -1;
        nome = "";
        preco = 0;
        quantidade = 0;
        quantidadeMin = 0;
        quantidadeMax = 0;
        prioridade = 0;
    }

    int getId()
    {
        return id;
    }

    QString getNome()
    {
        return nome;
    }

    double getPreco()
    {
        return preco;
    }

    int getQuantidade()
    {
        return quantidade;
    }

    int getQuantidadeMin()
    {
        return quantidadeMin;
    }

    int getQuantidadeMax()
    {
        return quantidadeMax;
    }

    double getPrioridade()
    {
        return prioridade;
    }

    void Atualiza(int qntNova)
    {
        this->quantidade = qntNova;
    }

    void AtualizaP()
    {
        this->prioridade = 0;
    }

    void Imprime()
    {
        qDebug() << "ID: " << id;
        qDebug() << "Produto: " << nome;
        qDebug() << "Prioridade" << prioridade;
    }

    template <class F>
    friend class LDDE;
};

#endif // PRODUTO_H
