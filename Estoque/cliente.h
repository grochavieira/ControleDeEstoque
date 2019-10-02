#ifndef CLIENTE_H
#define CLIENTE_H

#include<QString>
#include<QDebug>

class Cliente{
private:
    int id;
    QString nome;
    QString email;
    QString senha;
    QString telefone;
    QString endereco;

public:
    Cliente(int id, QString nome, QString email, QString senha, QString telefone, QString endereco){
        this->id = id;
        this->nome = nome;
        this->email = email;
        this->senha = senha;
        this->telefone = telefone;
        this->endereco = endereco;
    }

    Cliente(Cliente *cliente){
        this->id = cliente->id;
        this->nome = cliente->nome;
        this->email = cliente->email;
        this->senha = cliente->senha;
        this->telefone = cliente->telefone;
        this->endereco = cliente->endereco;
    }
    Cliente(){
        id = 0;
        nome = "";
        email = "";
        senha = "";
        telefone = "";
        endereco = "";
    }

    int getId(){
        return id;
    }

    void Imprime(){
        qDebug() << "ID: " << id;
        qDebug() << "Nome: " << nome;
        qDebug() << "Email: " << email;
        qDebug() << "Senha: " << senha;
        qDebug() << "Telefone: " << telefone;
        qDebug() << "Endereco: " << endereco;
    }

    template <class F>
    friend class LDDE;
};

#endif // CLIENTE_H
