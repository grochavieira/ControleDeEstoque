#include <iostream>
//by Mr. Victor302 aka MasumotionRoadster
using namespace std;



class Objetos{
  private:
    string contato;
    string nome;
    int qt;
    double preco;
    string pedido;
    int ID;
  public:
    string getContato(){
      return contato  ;
    }
    string getNome(){
      return nome  ;
    }

    int getQt(){
      return qt  ;
    }

    double getPreco(){
      return preco  ;
    }

    string getPedido(){
      return pedido  ;
    }
    int getID(){
      return ID  ;
    }


}; 

template <class F>
class No {
  public:
    int data;
  No<F> * prox;
};


template <class F>
class Fila {
  private:
    No<F> * atras, * frente;
  public:

    Fila() {
      atras = NULL;
      frente = NULL;
    }
    friend class Objetos; 
  void Insere(int valor) {
    No<F> * temp;
    temp = new No<F>;
    //cout<<"valor :";
    temp -> data = valor;
    temp -> prox = NULL;
    if (atras == NULL) {
      atras = temp;
      frente = temp;
    } else {
      atras -> prox = temp;
      atras = temp;
    }
  }

  void Deleta() {
    if (frente != NULL) {
      No<F> * temp = frente;
      cout << frente -> data << " deletado \n";
      frente = frente -> prox;
      delete temp;
      if (frente == NULL)
        atras = NULL;
    } else
      cout << "Fila Vazia..";
  }

  void Imprimir() {
      No<F> * temp = frente;
      while (temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> prox;
      }
    }
   

    ~Fila() {
      while (frente != NULL) {
        No<F> * temp = frente;
        frente = frente -> prox;
        delete temp;
      }
    }


};

int main() {
  Objetos a;
  Fila<Objetos> obj;
  obj.Insere(1);
  obj.Insere(2);
  obj.Imprimir();
  obj.Deleta();
  obj.Imprimir();

  return 0;
}