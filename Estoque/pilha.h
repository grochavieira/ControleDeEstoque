#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <QDebug>


using namespace std;

template <class F>
class PILHA{
private:
    int n; // Quantidade de produtos
    int tam; // Tamanho max da Pilha
    F *v; // Vetor que guarda os produtos
public:
    PILHA(){ // Inicializa tudo
        n=0;
        tam=20;
        v = new F[tam];
    }
    bool Empilha(F x){ // Guarda na pilha
        if(n == tam) // Se n estiver no maximo, nao empilhara
            return false;

        v[n] = x; // Salva na pilha idx n
        n++; // Incrementa 1 em n

        return true; // Deu certo
    }
    F Desempilha(bool *ok = nullptr){ // Remove da pilha
        if(n == 0) { // Se n for 0, nao existe produto
            if(ok)
                *ok = false; // avisa que esta vazia e o valor que retornara nao e confiavel
            return v[n]; // Retorna um valor nao confiavel
        }

        F temp = v[n-1]; // Salva ultimo inserido
        n--; // Remove ultimo inserido

        return temp; // Retorna valor salvo que foi removido
    }
    void Imprime(){ // Funcao para Debug, Apenas para conferir o codigo
        for (int j=n-1; j>=0; j--){ // For que imprime toda a pilha
            qDebug() << "ID: " << v[j].getId() << " -Produto: " << v[j].getNome();
        }
        qDebug() << "";
    }
    int Size(){
        return n;
    }
    ~PILHA(){ // Deleta vetor
        delete[] v;
    }
};


#endif // PILHA_H
