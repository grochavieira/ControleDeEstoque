#include "telacadastrocliente.h"
#include "ui_telacadastrocliente.h"

static LDDE<Cliente>* lddeClientes;
static Cliente cliente;
//static int verificaQtdErros = 0;
//static bool erroVerificado[8];
TelaCadastroCliente::TelaCadastroCliente(QWidget *parent, LDDE<Cliente>* lddeClientesCopia) :
    QDialog(parent),
    ui(new Ui::TelaCadastroCliente)
{
    ui->setupUi(this);
    lddeClientes = lddeClientesCopia;
}

TelaCadastroCliente::~TelaCadastroCliente()
{
    delete ui;
}

void TelaCadastroCliente::on_btnCadastrarCliente_clicked()
{
    int verificaErros = 0;
    QString nomeCliente = ui->txtNomeCliente->text();
    QString emailCliente = ui->txtEmailCliente->text();
    QString telefoneCliente = ui->txtTelefoneCliente->text();
    QString cepCliente = ui->txtCepCliente->text();
    int numEnderecoCliente = ui->spnNumEnderecoCliente->value();
    QString usuarioCliente = ui->txtUsuarioCliente->text();
    QString senhaCliente = ui->txtSenhaCliente->text();
    QString confirmarSenhaCliente = ui->txtConfirmarSenhaCliente->text();

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
    if(senhaCliente == ""){
        verificaErros++;
        ui->lblSenhaClienteErro->setText("Favor preencher campo!");
    }
    else if(senhaCliente < 8){
        verificaErros++;
        ui->lblSenhaClienteErro->setText("Campo preenchido incorretamente!");
    }
    else if(senhaCliente != confirmarSenhaCliente){
        verificaErros++;
        ui->lblConfirmarSenhaClienteErro->setText("As senhas não são iguais!");
    }

    if(verificaErros == 0){
        cliente = new Cliente(lddeClientes->getQtdCadastrados()+1, nomeCliente, emailCliente, usuarioCliente, senhaCliente, telefoneCliente, cepCliente, numEnderecoCliente);
        lddeClientes->Insere(cliente);
        QSqlQuery query;
        query.prepare("insert into tb_clientes(nome_cliente, email_cliente, usuario_cliente, senha_cliente, telefone_cliente, cep_cliente, num_endereco_cliente) values""('" + nomeCliente + "','" + emailCliente + "','" + usuarioCliente + "','" + senhaCliente + "','" + telefoneCliente + "','" + cepCliente + "','" + QString::number(numEnderecoCliente) + "')");
        if(query.exec()){
            qDebug() << "Cadastro realizado com sucesso!";
            QMessageBox::information(this, "OK", "Cliente cadastrado com sucesso!");
        }
        else{
            qDebug() << "Erro ao cadastrar cliente";
            QMessageBox::warning(this,"ERRO","ERRO ao se cadastrar!");
        }
        close();
        TelaLoginCliente telaLoginCliente;
        telaLoginCliente.exec();
    }
    else{
        QMessageBox::warning(this, "ERRO", "Não foi possível se cadastrar!");
    }

}

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
