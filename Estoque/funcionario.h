#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <QString>
#include <QDebug>

class Funcionario{
private:
    int id;
    QString nome;
    QString email;
    QString usuario;
    QString senha;
    QString telefone;

public:
    Funcionario(int id, QString nome, QString email, QString usuario, QString senha, QString telefone){
        this->id = id;
        this->nome = nome;
        this->email = email;
        this->usuario = usuario;
        this->senha = senha;
        this->telefone = telefone;
    }

    Funcionario(Funcionario *funcionario){
        this->id = funcionario->id;
        this->nome = funcionario->nome;
        this->email = funcionario->email;
        this->usuario = funcionario->usuario;
        this->senha = funcionario->senha;
        this->telefone = funcionario->telefone;
    }
    Funcionario(){
        id = -1;
        nome = "";
        email = "";
        usuario = "";
        senha = "";
        telefone = "";
    }

    int getId(){
        return id;
    }

    QString getNome(){
        return nome;
    }

    QString getUsuario(){
        return usuario;
    }

    QString getSenha(){
        return senha;
    }

    void Imprime(){
        qDebug() << "ID: " << id;
        qDebug() << "Nome: " << nome;
        qDebug() << "Email: " << email;
        qDebug() << "Usuario: " << usuario;
        qDebug() << "Senha: " << senha;
        qDebug() << "Telefone: " << telefone;
    }

    template <class F>
    friend class LDDE;
};

#endif // FUNCIONARIO_H
