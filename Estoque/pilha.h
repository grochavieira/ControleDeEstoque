#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <QString>
#include <QDebug>

using namespace std;

template<class F>
class Pilha;

template<class F>
class No{ // Pilha dinamica
private:
    No<F>* ant; // Objeto anterior
    No<F>* prox; // Proximo objeto
    F objeto; // Objeto
public:
    template<class>
    friend class Pilha;
};

template <class F>
class Pilha{
private:
    No<F>* primeiro; // Primeiro objeto
    No<F>* ultimo; // Ultimo objeto
    int n; // Quantidade de objetos
public:
    Pilha(){ // Construtor
        primeiro = NULL;
        ultimo = NULL;
        n = 0;
    }
    ~Pilha(){ // Destrutor
        bool ok;
        do {
            Desempilha(&ok);
        }while(ok);
    }

    bool Empilha(F objeto){ // Empilha objeto
        No<F>* novo = new No<F>; // Objeto a ser empilhado
        novo->ant = NULL;
        novo->prox = NULL;
        novo->objeto = objeto;

        if(n == 0){ // Se for o primeiro objeto empilhado
            primeiro = novo;
        }
        else{ // Se nao for o primeiro
            ultimo->prox = novo;
            novo->ant = ultimo;
        }
        ultimo = novo; // Atualiza ultimo
        n++; // Adiciona 1 na quantidade de objetos empilhados

        return true;
    }
    F Desempilha(bool *ok=nullptr){ // Desempilha
        if(n == 0) { // Se nao existir nada na pilha
            if(ok)
                *ok = false;

            return nullptr;
        }

        F x = ultimo->objeto; // Guarda objeto que sera removido
        if(n == 1){ // Se so existir um objeto na pilha
            primeiro = NULL;
            ultimo = NULL;
        }
        else{ // Se existir mais de um
            No<F>* aux = ultimo->ant;
            aux->prox = NULL; // Ultimo da pilha aponta para NULL
            ultimo = aux; // Atualiza ultimo da pilha (prox a ser desempilhado)
        }
        n--; // Subtrai um na quantidade de objetos na pilha
        if(ok)
            *ok = true;

        return x;
    }
    void Imprime(){ // Imprime pilha completa
        No<F>* aux = primeiro;//Imprime na ordem que a pilha foi feita
        for(int i=0; i<n; i++){
            qDebug() << "Nome: " << aux->objeto.getNome() << " -ID: " << aux->objeto.getId();
            aux = aux->prox;
        }
        qDebug() << "";
    }
};

#endif // PILHA_H
