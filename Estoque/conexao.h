#ifndef CONEXAO_H
#define CONEXAO_H

#include <QtSql>

class Conexao
{
public:
    QSqlDatabase bancoDeDados;

    Conexao()
    {
        bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    }

    void fechar()
    {
        bancoDeDados.close();
    }

    bool abrir()
    {
        QString local = qApp->applicationDirPath();
        QString banco = local + "/db/ControleDeEstoque.db";
        qDebug() << banco;
        bancoDeDados.setDatabaseName(banco);
        if (!bancoDeDados.open())
        {
            qDebug() << "Não foi possível abrir o banco de dados!";
            return false;
        }
        else
        {
            qDebug() << "Banco de Dados foi aberto com sucesso!";
            return true;
        }
    }
};

#endif // CONEXAO_H
