#ifndef LDDE_H
#define LDDE_H

#include "cliente.h"
#include "produto.h"
#include <chrono>
#include <iostream>
#include <QtSql>
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
    LDDE (): primeiro(NULL), ultimo(NULL), n(0) {
    }

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
        No<F>* atual = primeiro;
        while(atual){
            if(atual->id == id)
            {
                return atual->objeto;
            }
            atual = atual->prox;
        }
        return sentinela;
    }

    F Busca (QString nome){
        No<F>* atual = primeiro;
        while(atual){
            if(atual->objeto.getNome() == nome)
            {
                return atual->objeto;
            }
            atual = atual->prox;
        }
        return sentinela;
    }

    int BuscaId (int id){
        int i = 0;
        No<F>* atual = primeiro;
        while(atual){
            if(atual->objeto.getId() == id)
            {
                return i;
            }
            atual = atual->prox;
            i++;
        }
        return -1;
    }

    bool Remove (int id){
        int index = BuscaId(id);
        if(!(index >= 0 && index < n)){
            return false;
        }

        No<F>* atual = primeiro;
        while(atual != NULL && index--){
            atual = atual->prox;
        }

        if (atual->anterior)
              atual->anterior->prox = atual->prox;
        else
          primeiro = atual->prox;

        if (atual->prox)
          atual->prox->anterior = atual->anterior;
        else
          ultimo = atual->anterior;

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

    int getQtdCadastrados(){
        return n;
    }

    const F& operator[](int index)
        {
            if(index < 0 || index >= n)
                return sentinela;

            int i = 0;
            No<F>* atual = primeiro;
            while(atual){
                if(i == index)
                {
                    return atual->objeto;
                }
                atual = atual->prox;
                i++;
            }

        };

    ~LDDE (){
        limpa();
    };

};

#endif // LDDE_H
