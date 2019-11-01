#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>
#include <QDebug>

class Cliente
{
private:
    int id;
    QString nome;
    QString email;
    QString usuario;
    QString senha;
    QString telefone;
    QString cep;
    int numeroEndereco;

public:
    Cliente(int id, QString nome, QString email, QString usuario, QString senha, QString telefone, QString cep, int numeroEndereco)
    {
        this->id = id;
        this->nome = nome;
        this->email = email;
        this->usuario = usuario;
        this->senha = senha;
        this->telefone = telefone;
        this->cep = cep;
        this->numeroEndereco = numeroEndereco;
    }

    Cliente(Cliente *cliente)
    {
        this->id = cliente->id;
        this->nome = cliente->nome;
        this->email = cliente->email;
        this->usuario = cliente->usuario;
        this->senha = cliente->senha;
        this->telefone = cliente->telefone;
        this->cep = cliente->cep;
        this->numeroEndereco = cliente->numeroEndereco;
    }
    Cliente()
    {
        id = -1;
        nome = "";
        email = "";
        usuario = "";
        senha = "";
        telefone = "";
        cep = "";
        numeroEndereco = 0;
    }

    int getId()
    {
        return id;
    }

    QString getNome()
    {
        return nome;
    }

    QString getUsuario()
    {
        return usuario;
    }

    QString getSenha()
    {
        return senha;
    }

    QString getCep()
    {
        return cep;
    }

    QString getTelefone()
    {
        return telefone;
    }

    int getNumeroEndereco()
    {
        return numeroEndereco;
    }

    void Imprime()
    {
        qDebug() << "ID: " << id;
        qDebug() << "Nome: " << nome;
        qDebug() << "Email: " << email;
        qDebug() << "Usuario: " << usuario;
        qDebug() << "Senha: " << senha;
        qDebug() << "Telefone: " << telefone;
        qDebug() << "CEP: " << cep;
    }

    template <class F>
    friend class LDDE;
};

#endif // CLIENTE_H
