#ifndef FILA_H
#define FILA_H

#endif // FILA_H
#include <iostream>
#include "cliente.h"
#include "produto.h"
#include "pedidos.h"
#include "funcionario.h"
#include <chrono>
#include <iostream>
#include <QtSql>
//MRoadster
using namespace std;
#include <iostream>



//classe Objetos
class Objetos{
  private:
    QString contato;
    QString nome;
    int qt;
    double preco;
    QString pedido;
    int ID;
  public:
    QString getContato(){
      return contato;
    }
    QString getNome(){
      return nome;
    }

    int getQt(){
      return qt;
    }

    double getPreco(){
      return preco;
    }

    QString getPedido(){
      return pedido;
    }
    int getID(){
      return ID;
    }

//setters

//define as variaveis

    void setContato(QString contato){
      this->contato = contato;
    }
    void setNome(QString nome){
      this->nome = nome;
    }

    void setQt(int qt){
      this->qt = qt;
    }

    void setPreco(double preco){
     this->preco = preco;
    }

    void setPedido(QString pedido){
     this->pedido = pedido;
    }
    void setID(int id){
     this->ID = id;
    }


}; // termina classe objetos

template <class F>
class No {
  public:
    int dados;
  No<F> * prox;


};


template <class F>
class Fila {//  classe fila
  private: // define um Nó pra frente e trás
    No<F> * atras, * frente;
    F sentinela;
    int n;
  public:
//lembrete: fila dinamica (usar frente e trás)
    Fila() { //construtor
      atras = NULL; //frente e tras é null
      frente = NULL;
      n = Tamanho();
    }
    friend class Objetos;
    //pode acessar os objetos

  void Insere(F valor) { //insere
    No<F> * temp;
    temp = new No<F>;
    //cout<<"valor :";
    temp->dados = valor.getID(); //guarda a classe no temp->dados
    temp->prox = NULL; //o ultimo obj da classe acrescentada não tem prox
    if (atras == NULL) {//se caso eh o primeiro da fila
      atras = temp; //atras eh o proprio dado
      frente = temp;//frente eh o proprio dado
    } else {//move para atras do ultimo inserido
      atras -> prox = temp;
      atras = temp; //o objeto fica atras de outro inserido anteriormente
    }
  }

  void Deleta() {
    if (frente != NULL) {
      No<F> * temp = frente;
      cout << frente -> dados << " deletado \n";
      frente = frente -> prox;
      delete temp;
      //apaga o link entre o proximo e o atual,redefine o anterior para o proximo
      if (frente == NULL)
      //se o primeiro eh null,entao eh o primeiro da fila
        atras = NULL;
        //deleta o unico membro
    }
    else
      cout << "Fila Vazia..";
  }
//pega tamanho fila

  int Tamanho() {
      No<F> * temp = frente;
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
      No<F> * temp = frente;
      while (temp != NULL) {
        cout << temp -> dados << endl;
        temp = temp -> prox;
      }
    } //imprime todos

//operator


  const F& operator[](int index){
          if(index < 0 || index >= n)
              return sentinela;

          int i = 0;
          No<F>* atual = frente;
          while(atual){
              if(i == index)              {
                  return atual->dados;
              }
              atual = atual->prox;
              i++;
          }

      }

//--fim operator



    ~Fila() {
      while (frente != NULL) {
        No<F> * temp = frente;
        frente = frente -> prox;
        delete temp;
      } //destrutor que começa do começo da fila


    }
      friend class No<F>; //pode acessar o nó
};// termina classe fila

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

