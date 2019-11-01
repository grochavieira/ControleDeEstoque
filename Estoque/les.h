#ifndef LES_H
#define LES_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <QDebug>

using namespace std;

template <class F>
class LES
{
private:
    int tam;   // Tamanho da les
    int n;     // Quantidade de objetos inseridos
    F *objeto; // Objeto
public:
    LES(int tamanhoMax)
    { // Construtor
        this->tam = tamanhoMax;
        this->n = 0;
        this->objeto = new F[tam + 1];
    }
    ~LES()
    { // Destrutor
        delete[] objeto;
    }

    void Imprime()
    { // Imprime toda a les em ordem de prioridade
        qDebug() << "Lista prioridades:";
        for (int i = 0; i < n; ++i)
            qDebug() << "Nome: " << objeto[i].getNome() << " -Id: " << objeto[i].getId();
        qDebug() << endl;
    }

    bool Insere(F x)
    {                 // Inserir objeto
        if (n == tam) // Se n estiver no maximo, lista cheia
            return false;

        if (n == 0)        // Se a lista estiver vazia
            objeto[0] = x; // Inseri no primeiro elemento
        else
        { // Se nao
            int i = 0;
            while (i < n && x.getPrioridade() < objeto[i].getPrioridade()) // i pega o idx onde sera inserido
                i++;
            for (int j = n; j > i; j--) // Realoca todos objetos ja dentro da lista
                objeto[j] = objeto[j - 1];
            objeto[i] = x; // Insere o objeto
        }
        n++; // Aumenta 1 a quantidade de itens na lista

        qDebug() << "Inseriu: " << x.getNome();
        return true;
    }

    bool Remove()
    {
        if (n == 0)
        { // Se n for 0, nao existe objeto na lista
            return false;
        }

        int i = 0;
        for (i = 0; i < n - 1; ++i) // Realoca todos objetos
            objeto[i] = objeto[i + 1];
        objeto[i] = nullptr; // Ultimo da lista removido (So para garantia)
        n--;                 // Subtrai 1 da quantidade de itens da lista

        return true;
    }

    const F &operator[](int idx)
    {                // Quando utilizar [indice] retornara o indice desejado
        F sentinela; // para caso indice nao exista, retornara sentinela
        if (idx >= n)
        {
            qDebug() << "Indice nao existe!" << endl;
            return nullptr;
        }

        return objeto[idx]; // Retorna objeto do indice desejado
    }
};

#endif // LES_H
