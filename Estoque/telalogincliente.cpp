#include "telalogincliente.h"
#include "ui_telalogincliente.h"

static LDDE<Cliente> lddeClientes;
static Cliente cliente;
//static Conexao conexao;
//static bool logado;

TelaLoginCliente::TelaLoginCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaLoginCliente)
{
    ui->setupUi(this);

        QSqlQuery query;
        query.prepare("select * from tb_clientes");
        if(query.exec()){
            while(query.next()){
                cliente = new Cliente(query.value(0).toInt(), query.value(1).toString(), query.value(2).toString(), query.value(3).toString(), query.value(4).toString(), query.value(5).toString(), query.value(6).toString(),query.value(7).toInt());
                lddeClientes.Insere(cliente);
            }
        }
        else{
            qDebug() << "Banco de Dados falhou!";
        }


}

TelaLoginCliente::~TelaLoginCliente()
{
    delete ui;
}

void TelaLoginCliente::on_btnEntrarCliente_clicked()
{
    QString usuarioCliente = ui->txtUsuarioCliente->text();
    QString senhaCliente = ui->txtSenhaCliente->text();

    if(lddeClientes.BuscaCadastro(usuarioCliente, senhaCliente)){
        this->setVisible(false);
        TelaPedidosCliente telaPedidosCliente;
        telaPedidosCliente.exec();
        this->setVisible(true);
    }
    else{
        QMessageBox::warning(this,"ERRO","Usuário ou Senha incorretos!");
    }

}

void TelaLoginCliente::on_btnAreaCadastroCliente_clicked()
{
    close();
    TelaCadastroCliente telaCadastroCliente(this, &lddeClientes);
    telaCadastroCliente.exec();
}
