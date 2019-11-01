#include <iostream>
//by Mr. Victor302 aka MasumotionRoadster
using namespace std;

//classe Objetos
class Objetos
{
private:
  string contato;
  string nome;
  int qt;
  double preco;
  string pedido;
  int ID;

public:
  string getContato()
  {
    return contato;
  }
  string getNome()
  {
    return nome;
  }

  int getQt()
  {
    return qt;
  }

  double getPreco()
  {
    return preco;
  }

  string getPedido()
  {
    return pedido;
  }
  int getID()
  {
    return ID;
  }

  //setters

  //define as variaveis

  void setContato(string contato)
  {
    this->contato = contato;
  }
  void setNome(string nome)
  {
    this->nome = nome;
  }

  void setQt(int qt)
  {
    this->qt = qt;
  }

  void setPreco(double preco)
  {
    this->preco = preco;
  }

  void setPedido(string pedido)
  {
    this->pedido = pedido;
  }
  void setID(int id)
  {
    this->ID = id;
  }

}; // termina classe objetos

template <class F>
class No
{
public:
  int dados;
  No<F> *prox;
};

template <class F>
class Fila
{        //  classe fila
private: // define um Nó pra frente e trás
  No<F> *atras, *frente;

public:
  //lembrete: fila dinamica (usar frente e trás)
  Fila()
  {               //construtor
    atras = NULL; //frente e tras é null
    frente = NULL;
  }
  friend class Objetos;
  //pode acessar os objetos

  void Insere(F valor)
  { //insere
    No<F> *temp;
    temp = new No<F>;
    //cout<<"valor :";
    temp->dados = valor.getID(); //guarda a classe no temp->dados
    temp->prox = NULL;           //o ultimo obj da classe acrescentada não tem prox
    if (atras == NULL)
    {                //se caso eh o primeiro da fila
      atras = temp;  //atras eh o proprio dado
      frente = temp; //frente eh o proprio dado
    }
    else
    { //move para atras do ultimo inserido
      atras->prox = temp;
      atras = temp; //o objeto fica atras de outro inserido anteriormente
    }
  }

  void Deleta()
  {
    if (frente != NULL)
    {
      No<F> *temp = frente;
      cout << frente->dados << " deletado \n";
      frente = frente->prox;
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

  void Imprimir()
  {
    No<F> *temp = frente;
    while (temp != NULL)
    {
      cout << temp->dados << endl;
      temp = temp->prox;
    }
  } //imprime todos

  ~Fila()
  {
    while (frente != NULL)
    {
      No<F> *temp = frente;
      frente = frente->prox;
      delete temp;
    } //destrutor que começa do começo da fila
  }
  friend class No<F>; //pode acessar o nó
};                    // termina classe fila

int main()
{
  //funciona com ids
  Objetos a;
  Objetos b;
  Fila<Objetos> mini_fila;

  a.setID(124632);
  a.setPedido("2 john cena");
  a.setNome("WASHINGTON");
  a.setContato("EMAIL");
  a.setPreco(2.12);
  a.setQt(10);

  b.setID(777772);
  b.setPedido("4 girafas");
  b.setNome("MIRANHA");
  b.setContato("EMAIL1");
  b.setPreco(2.12);
  b.setQt(10);

  mini_fila.Insere(a); //
  mini_fila.Insere(b);
  mini_fila.Imprimir();
  mini_fila.Deleta();
  mini_fila.Imprimir();

  return 0;
}