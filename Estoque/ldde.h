#ifndef LDDE_H
#define LDDE_H

#include "cliente.h"
#include "produto.h"
#include <chrono>
#include <iostream>
using namespace std;

template<class F>
class No {
private:
    int id;
    No<F>* prox;
    No<F>* anterior;
    F objeto;

public:
    template <class>
    friend class LDDE;
};

template <class F>
class LDDE{
private:
    No<F>* primeiro;
    No<F>* ultimo;
    F sentinela;
    int n;

    void limpa(){
        while(Remove(0));
    }

    void copia(LDDE& dest, const LDDE& other){
        while(dest.Remove(0));
        n = 0;
        primeiro = NULL;
        ultimo = NULL;
        No<F>* atu = other.primeiro;
        while(atu){
            Insere(atu->valor);
            atu = atu->prox;
        }
    }

public:
    LDDE (): primeiro(NULL), ultimo(NULL), n(0) {}

    LDDE (const LDDE& outra) {
        copia(*this,outra);
    }

    LDDE& operator= (const LDDE& other) {
        copia(*this,other);
        return *this;
    }

    bool Insere (F copiaObjeto){
        No<F>* novo = new No<F>;
        novo->id = copiaObjeto.getId();
        novo->objeto = new F(&copiaObjeto);
        novo->objeto.Imprime();
        novo->anterior = NULL;
        novo->prox = NULL;

        No<F>* ant = NULL;
        No<F>* atual = primeiro;

        while(atual && atual->id <= copiaObjeto.getId() ){
            ant = atual;
            atual = atual->prox;
        }

        if(ant)
            ant->prox = novo;
        else
            primeiro = novo;

        if(atual)
            atual->anterior = novo;
        else
            ultimo = novo;

        novo->anterior = ant;
        novo->prox = atual;

        n++;
        return true;
    }

    F Busca (int id){
        int i = 0;
        No<F>* atual = primeiro;
        while(atual){
            if(atual->id == id)
            {
                return atual->objeto;
            }
            atual = atual->prox;
            i++;
        }
        return sentinela;
    }

    bool Remove (int id){
        F index = Busca(id);
        if(!(index.getId() >= 0 && index.getId() < n)){
            return false;
        }

        int i = 0;
        No<F>* atual = primeiro;
        No<F>* ant = NULL;
        while(atual != NULL && index.getId() > i){
            ant = atual;
            atual = atual->prox;
            i++;
        }

        if(index.getId() == 0 && n-1 == 0){
            primeiro = NULL;
            ultimo = NULL;
        }
        else if(ant == NULL){
            primeiro = atual->prox;
            primeiro->anterior = NULL;
        }
        else if(atual->prox == NULL)
        {
            ant->prox = NULL;
            ultimo = ant;
        }
        else{
            ant->prox = atual->prox;
            atual->prox->anterior = ant;
        }

        if(ant)
            delete ant;
        delete atual;

        n--;
        return true;
    };

    void Imprime (){
        No<F>* atual = primeiro;
        while(atual){
            atual->objeto.Imprime();
            atual = atual->prox;
        }
        cout << endl;
    };

    ~LDDE (){
        limpa();
    };

};

#endif // LDDE_H
