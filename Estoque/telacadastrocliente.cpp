#include "telacadastrocliente.h"
#include "ui_telacadastrocliente.h"

static LDDE<Cliente>* lddeClientes;
static Cliente cliente;
TelaCadastroCliente::TelaCadastroCliente(QWidget *parent, LDDE<Cliente>* lddeClientesCopia) :
    QDialog(parent),
    ui(new Ui::TelaCadastroCliente)
{
    ui->setupUi(this);
    /* Pega os dados dos clientes que foram passados por parâmetros através da lddeClientesCopia
     * para ser utilizada pela lddeClientes na realizacão de cadastros
     */
    lddeClientes = lddeClientesCopia;
}

TelaCadastroCliente::~TelaCadastroCliente()
{
    delete ui;
}

void TelaCadastroCliente::on_btnCadastrarCliente_clicked()
{
    //contador para verificar a quantidade de erros quando o cliente se cadastrar
    int verificaErros = 0;
    //Pega os dados digitados pelo cliente
    QString nomeCliente = ui->txtNomeCliente->text();
    QString emailCliente = ui->txtEmailCliente->text();
    QString telefoneCliente = ui->txtTelefoneCliente->text();
    QString cepCliente = ui->txtCepCliente->text();
    int numEnderecoCliente = ui->spnNumEnderecoCliente->value();
    QString usuarioCliente = ui->txtUsuarioCliente->text();
    QString senhaCliente = ui->txtSenhaCliente->text();
    QString confirmarSenhaCliente = ui->txtConfirmarSenhaCliente->text();

    /* Verifica cada um dos erros, se esses erros existirem,
     * serão adicionados para um contador, e terá um texto
     * do lado do campo que foi digitado de forma errada,
     * informando o erro do cliente.
     */

    if(nomeCliente == ""){
        verificaErros++;
        ui->lblNomeClienteErro->setText("Favor preencher campo!");
    }

    if(emailCliente == ""){
        verificaErros++;
        ui->lblEmailClienteErro->setText("Favor preencher campo!");
    }

    if(telefoneCliente.size() < 14){
        verificaErros++;
        ui->lblTelefoneClienteErro->setText("Campo preenchido incorretamente!");
    }

    if(cepCliente.size() < 9){
        verificaErros++;
        ui->lblCepClienteErro->setText("Campo preenchido incorretamente!");
    }

    if(usuarioCliente == ""){
        verificaErros++;
        ui->lblUsuarioClienteErro->setText("Favor preencher campo!");
    }
    else if(lddeClientes->BuscaUsuario(usuarioCliente)){
        verificaErros++;
        ui->lblUsuarioClienteErro->setText("Esse usuário já existe!");
    }

    if(senhaCliente < 8){
        verificaErros++;
        ui->lblSenhaClienteErro->setText("Campo incorreto, min. 8 caracteres!");
    }
    else if(senhaCliente != confirmarSenhaCliente){
        verificaErros++;
        ui->lblConfirmarSenhaClienteErro->setText("As senhas não são iguais!");
    }

    //Se não existir nenhum erro, o cliente será cadastrado
    if(verificaErros == 0){
        cliente = new Cliente(lddeClientes->getQtdCadastrados()+1, nomeCliente, emailCliente, usuarioCliente, senhaCliente, telefoneCliente, cepCliente, numEnderecoCliente);
        /* manda os dados do cliente para a ldde, pois será utilizado
         * quando voltar para a tela de login, e não será necessário
         * pega-los novamente do banco
         */
        lddeClientes->Insere(cliente);
        //manda os dados do cliente para o banco de dados (tabela dos clientes)
        QSqlQuery query;
        query.prepare("insert into tb_clientes(nome_cliente, email_cliente, usuario_cliente, senha_cliente, telefone_cliente, cep_cliente, num_endereco_cliente) values""('" + nomeCliente + "','" + emailCliente + "','" + usuarioCliente + "','" + senhaCliente + "','" + telefoneCliente + "','" + cepCliente + "','" + QString::number(numEnderecoCliente) + "')");
        if(query.exec()){
            QMessageBox::information(this, "OK", "Cliente cadastrado com sucesso!");
            close();
        }
        else{
            QMessageBox::warning(this,"ERRO","ERRO ao se cadastrar!");
        }
    }
    else{
        QMessageBox::warning(this, "ERRO", "Não foi possível se cadastrar!");
    }

}

/* As funções abaixo servem apenas para limpar os textos
 * de erro quando o cliente começar a digitar nos campos de texto
 */
void TelaCadastroCliente::on_txtNomeCliente_editingFinished()
{
    ui->lblNomeClienteErro->setText("");
}

void TelaCadastroCliente::on_txtEmailCliente_editingFinished()
{
    ui->lblEmailClienteErro->setText("");
}

void TelaCadastroCliente::on_txtTelefoneCliente_editingFinished()
{
    ui->lblTelefoneClienteErro->setText("");
}

void TelaCadastroCliente::on_txtCepCliente_editingFinished()
{
    ui->lblCepClienteErro->setText("");
}

void TelaCadastroCliente::on_spnNumEnderecoCliente_editingFinished()
{

}

void TelaCadastroCliente::on_txtUsuarioCliente_editingFinished()
{
    ui->lblUsuarioClienteErro->setText("");
}

void TelaCadastroCliente::on_txtSenhaCliente_editingFinished()
{
    ui->lblSenhaClienteErro->setText("");
}

void TelaCadastroCliente::on_txtConfirmarSenhaCliente_editingFinished()
{
    ui->lblConfirmarSenhaClienteErro->setText("");
}
