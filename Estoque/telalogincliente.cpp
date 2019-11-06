#include "telalogincliente.h"
#include "ui_telalogincliente.h"

static LDDE<Cliente> lddeClientes;
static Cliente cliente;

TelaLoginCliente::TelaLoginCliente(QWidget *parent) : QDialog(parent),
                                                      ui(new Ui::TelaLoginCliente)
{
    ui->setupUi(this);

    /*
     * Executa a query do sql para percorrer a tabela dos clientes
     * e guardar os dados dentro de um objeto do tipo LDDE<Cliente>
     */
    QSqlQuery query;
    query.prepare("select * from tb_clientes");
    if (query.exec())
    {
        while (query.next())
        {
            cliente = new Cliente(query.value(0).toInt(), query.value(1).toString(), query.value(2).toString(), query.value(3).toString(), query.value(4).toString(), query.value(5).toString(), query.value(6).toString(), query.value(7).toInt());
            lddeClientes.Insere(cliente);
        }
    }
    else
    {
        qDebug() << "Banco de Dados falhou!";
    }
}

TelaLoginCliente::~TelaLoginCliente()
{
    delete ui;
}

void TelaLoginCliente::on_btnEntrarCliente_clicked()
{
    // Pega os valores dos campos que o usuário vai digitar
    QString usuarioCliente = ui->txtUsuarioCliente->text();
    QString senhaCliente = ui->txtSenhaCliente->text();

    // Variáveis para verificar se usuario e senha existem
    bool existeUsuario = false;
    bool existeSenha = false;

    /* Verifica se o usuario e senha do cliente existem
     * e retorna uma mensagem de erro se não existirem
     */
    QSqlQuery query;
    query.prepare("select * from tb_clientes");
    if (query.exec())
    {
        while (query.next())
        {
            if (usuarioCliente == query.value(3))
            {
                existeUsuario = true;
                if (senhaCliente == query.value(4))
                {
                    existeSenha = true;
                }
            }
        }
    }
    else
    {
        qDebug() << "Banco de Dados falhou!";
    }

    if (existeUsuario)
    {
        if (!existeSenha)
        {
            ui->lblErroSenhaCliente->setText("Senha incorreta!");
        }
    }
    else
    {
        ui->lblErroUsuarioCliente->setText("Usuário não existe!");
    }

    //Verifica se os campos existem na tabela dos clientes
    if (existeUsuario && existeSenha)
    {
        //se existir, pega todos dados desse cliente
        cliente = lddeClientes.BuscaDadosUsuario(usuarioCliente, senhaCliente);
        this->close();
        //e chama a tela de pedidos do cliente, mandando todos os seus dados
        TelaPedidosCliente telaPedidosCliente(this, cliente.getId(), cliente.getNome(), cliente.getTelefone(), cliente.getCep(), cliente.getNumeroEndereco());
        telaPedidosCliente.exec();
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Não foi possível logar!");
    }
}

void TelaLoginCliente::on_btnAreaCadastroCliente_clicked()
{
    /* Chama a tela de cadastro para o cliente se cadastrar
     * e passa por parâmetro o endereço da lddeClientes que
     * tem o registro dos clientes, para que isso não seja feito novamente
     */
    TelaCadastroCliente telaCadastroCliente(this, &lddeClientes);
    telaCadastroCliente.setModal(true);
    telaCadastroCliente.exec();
}

void TelaLoginCliente::on_txtUsuarioCliente_editingFinished()
{
    ui->lblErroUsuarioCliente->setText("");
}

void TelaLoginCliente::on_txtSenhaCliente_editingFinished()
{
    ui->lblErroSenhaCliente->setText("");
}
