#ifndef FILA_H
#define FILA_H

#include "cliente.h"
#include "produto.h"
#include "pedidos.h"
#include "funcionario.h"
#include <chrono>
#include <iostream>
#include <QtSql>
#include <QDebug>
//MRoadster
using namespace std;
#include <iostream>





template <class F>
class No1 {
private:
    F dados;
    No1<F> * prox;
public:
template <class>
friend class Fila;
};


template <class F>
class Fila {//  classe fila
  private: // define um Nó pra frente e trás
    No1<F> * atras, * frente;
    F sentinela;
    int n;

    void copia(Fila& dest, const Fila& other){
        while(dest.Deleta());
        n = 0;
        atras = NULL;
        frente = NULL;
        No1<F>* recente = other.primeiro;
        while(recente){
            Insere(recente->valor);
            recente = recente->prox;
        }
    }


  public:
//lembrete: fila dinamica (usar frente e trás)
    Fila() { //construtor
      atras = NULL; //frente e tras é null
      frente = NULL;
      n = Tamanho();
    }


    //friend class Objetos;
    //pode acessar os objetos

    void Insere(F valor) { //insere
      No1<F> * temp;
      temp = new No1<F>;
      //cout<<"valor :";
      temp->dados = valor; //guarda a classe no temp->dados
      temp->prox = NULL; //o ultimo obj da classe acrescentada não tem prox
      if (atras == NULL) {//se caso eh o primeiro da fila
        atras = temp; //atras eh o proprio No
        frente = temp;//frente eh o proprio No
        cout<<"ok"<<endl;
      } else {//move para atras do ultimo inserido
        atras -> prox = temp;
        atras = temp; //o objeto fica atras de outro inserido anteriormente
        qDebug() <<"inseriu zzz"<<endl;
      }
    }


  bool Deleta() {
    if (frente != NULL) {
      No1<F> * temp = frente;
      //cout << frente -> dados << " deletado \n";
      frente = frente -> prox;
      delete temp;
      //apaga o link entre o proximo e o atual,redefine o anterior para o proximo
      if (frente == NULL)
      //se o primeiro eh null,entao eh o primeiro da fila
        atras = NULL;
        //deleta o unico membro
      return true;
    }
    else
      //cout << "Fila Vazia..";
      return false;
  }
//pega tamanho fila

  int Tamanho() {
      No1<F> * temp = frente;
      int count=0;
      while (temp != NULL) {
        count++;
        temp = temp -> prox;
      }
      //cout<<count<<endl;
      return count;
    }
 //fim do pega tamanho


  void Imprimir() {
      No1<F> * temp = frente;
      while (temp != NULL) {
        cout << temp -> dados << endl;
        temp = temp -> prox;
      }
    } //imprime todos

//operator


  Fila (const Fila& outra) {
      copia(*this,outra);
  }

  Fila& operator= (const Fila& other) {
      copia(*this,other);
      return *this;
  }

  const F& operator[](int index){
    int tam=Tamanho();
    if(index>=tam || index<0){
      //cout<<"problem\n";
      return sentinela;
    }
    No1<F> * temp = frente;
    int i=0;
    while (temp != NULL) {
      if(i==index){
        //cout<<temp->dados.getID();
        return temp->dados;
      }
      i++;
      temp = temp -> prox;
    }
    return sentinela;
  }
//--fim operator



    ~Fila() {
      while (frente != NULL) {
        No1<F> * temp = frente;
        frente = frente -> prox;
        delete temp;
      } //destrutor que começa do começo da fila


    }
      friend class No1<F>; //pode acessar o nó
};// termina classe fila
#endif //
/*
int main() {
  //funciona com ids
  Objetos a,b,c,d;
  Fila<Objetos> mini_fila;

  a.setID(1001);
  a.setPedido("2 john cena");
  a.setNome("WASHINGTON");
  a.setContato("EMAIL");
  a.setPreco(2.12);
  a.setQt(10);


  b.setID(1002);
  b.setPedido("4 girafas");
  b.setNome("MIRANHA");
  b.setContato("EMAIL1");
  b.setPreco(2.12);
  b.setQt(10);

  c.setID(1003);
  c.setPedido("4 girafas");
  c.setNome("MIRANHA");
  c.setContato("EMAIL1");
  c.setPreco(2.12);
  c.setQt(10);

  d.setID(1004);
  d.setPedido("4 girafas");
  d.setNome("MIRANHA");
  d.setContato("EMAIL1");
  d.setPreco(2.12);
  d.setQt(10);

  mini_fila.Insere(a);
  cout<<mini_fila.Tamanho()<<endl; //1
  mini_fila.Insere(b);
  cout<<mini_fila.Tamanho()<<endl;  //2
  mini_fila.Insere(c);
  cout<<mini_fila.Tamanho()<<endl; //3
  mini_fila.Insere(d);
  mini_fila.Imprimir();
  mini_fila.Deleta();
  mini_fila.Imprimir();

  cout<<mini_fila.Tamanho()<<endl;

  return 0;
}
*/

