#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#include <QString>
#include <QDebug>

using namespace std;

template<class F>
class IPilha{
public:
    virtual bool Empilha(F valor) = 0;
    virtual F Desempilha(bool *ok) = 0;
    virtual void Imprime() = 0;
    virtual ~IPilha(){}
};

template<class F>
class Pilha;

template<class F>
class No{
private:
    No<F>* ant;
    No<F>* prox;
public:
    template<class>
    friend class Pilha;
};

template <class F>
class Pilha : public IPilha<F>{
private:
    No<F>* primeiro;
    No<F>* ultimo;
    int n;
public:
    Pilha(){
        primeiro = NULL;
        ultimo = NULL;
        n = 0;
    }
    Pilha(const Pilha& outra){
        primeiro = NULL;
        ultimo = NULL;
        n = 0;
        No<F>* aux = outra.primeiro;
        for(int i=0; i<outra.n; i++){
            Empilha(aux->str);
            aux = aux->prox;
        }
    }
    ~Pilha(){
        bool ok;
        do {
            Desempilha(&ok);
        }while(ok);
    }

    bool Empilha(F valor){
        No<F>* novo = new No<F>;
        novo->ant = NULL;
        novo->prox = NULL;
        novo->str = valor;

        if(n == 0){
            primeiro = novo;
        }
        else{
            ultimo->prox = novo;
            novo->ant = ultimo;
        }
        ultimo = novo;
        n++;

        return true;
    }
    F Desempilha(bool *ok=NULL){
        if(n == 0) {
            if(ok)
                *ok = false;

            return "";
        }

        F x = ultimo->str;
        if(n == 1){
            primeiro = NULL;
            ultimo = NULL;
        }
        else{
            No<F>* aux = ultimo->ant;
            aux->prox = NULL;
            ultimo = aux;
        }
        n--;
        if(ok)
            *ok = true;

        return x;
    }
    void Imprime(){
        No<F>* aux = primeiro;//Imprime na ordem que a pilha foi feita
        //No<T>* aux = ultimo;//Imprime na ordem que a pilha vai ser desfeita
        for(int i=0; i<n; i++){
            qDebug() << aux->str << " ";
            aux = aux->prox;
            //aux = aux->ant;
        }
        qDebug() << "";
    }
};

#endif // CLIENTE_H
