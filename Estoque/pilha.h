#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <QDebug>

using namespace std;

template <class F>
class PILHA
{
private:
    int n;   // Quantidade de produtos
    int tam; // Tamanho max da Pilha
    F *v;    // Vetor que guarda os produtos
    F sentinela;
public:
    PILHA()
    { // Inicializa tudo
        n = 0;
        tam = 20;
        v = new F[tam];
    }
    PILHA &operator=(PILHA &outra)
    {
        n=0;
        v = new F[tam];
        for(int i=0; i<outra.Size(); i++)
        {
            this->Empilha(outra.v[i]);
        }

        return *this;
    }
    PILHA &operator[](int idx)
    {
        if(idx > n)
            return -1;

        return v[idx];
    }
    bool Empilha(F x) // Guarda na pilha
    {
        if (n == tam) // Se n estiver no maximo, nao empilha
            return false;

        v[n] = x;
        n++;

        return true;
    }
    F Desempilha(bool *ok = nullptr)
    { // Remove da pilha
        if (n == 0)
        { // Se n for 0, nao existe produto
            if (ok)
                *ok = false; // avisa que esta vazia e o valor que retornara nao e confiavel
            return sentinela;     // Retorna um valor nao confiavel
        }

        F temp = v[n - 1]; // Salva ultimo inserido
        //v[n - 1] = sentinela;
        n--;               // Remove ultimo inserido

        return temp; // Retorna valor salvo que foi removido
    }
    void Imprime()
    { // Funcao para Debug, Apenas para conferir o codigo
        for (int j = n - 1; j >= 0; j--)
        { // For que imprime toda a pilha
            qDebug() << "ID: " << v[j].getId() << " -Produto: " << v[j].getNome();
        }
        qDebug() << "";
    }
    int Size()
    {
        return n;
    }
    PILHA Inverte() // Funcao para inverter pilha
    {
        PILHA<F> aux;
        int tamanho = n;
        for(int i=0; i<tamanho; i++){ // Salva pilha original em outra pilha
            aux.Empilha(this->Desempilha());
        }
        for(int i=0; i<tamanho; i++){ // Retorna pilha original invertida
            this->Empilha(aux.Desempilha());
        }
        return *this;
    }
    void Reseta()
    {
        bool ok;
        do {
            Desempilha(&ok);
        }while(ok);
    }
    ~PILHA()
    { // Deleta vetor
        delete[] v;
    }
};

#endif // PILHA_H
