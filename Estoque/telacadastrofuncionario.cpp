#include "telacadastrofuncionario.h"
#include "ui_telacadastrofuncionario.h"


static LDDE<Funcionario>* lddeFuncionarios;
static Funcionario funcionario;
telaCadastroFuncionario::telaCadastroFuncionario(QWidget *parent, LDDE<Funcionario>* lddeFuncionariosCopia) :
    QDialog(parent),
    ui(new Ui::telaCadastroFuncionario)
{
    ui->setupUi(this);
    lddeFuncionarios = lddeFuncionariosCopia;
}

telaCadastroFuncionario::~telaCadastroFuncionario()
{
    delete ui;
}

void telaCadastroFuncionario::on_btnCadastrarFuncionario_clicked()
{
    int verificaErros = 0;
    QString nomeFuncionario = ui->txtNomeFuncionario->text();
    QString emailFuncionario = ui->txtEmailFuncionario->text();
    QString telefoneFuncionario = ui->txtTelefoneFuncionario->text();
    QString usuarioFuncionario = ui->txtUsuarioFuncionario->text();
    QString senhaFuncionario = ui->txtSenhaFuncionario->text();
    QString confirmarSenhaFuncionario = ui->txtConfirmarSenhaFuncionario->text();

    if(nomeFuncionario == ""){
        verificaErros++;
        ui->lblNomeFuncionarioErro->setText("Favor preencher campo!");
    }
    if(emailFuncionario == ""){
        verificaErros++;
        ui->lblEmailFuncionarioErro->setText("Favor preencher campo!");
    }
    if(telefoneFuncionario.size() < 14){
        verificaErros++;
        ui->lblTelefoneFuncionarioErro->setText("Campo preenchido incorretamente!");
    }
    if(usuarioFuncionario == ""){
        verificaErros++;
        ui->lblUsuarioFuncionarioErro->setText("Favor preencher campo!");
    }
    else if(lddeFuncionarios->BuscaUsuario(usuarioFuncionario)){
        verificaErros++;
        ui->lblUsuarioFuncionarioErro->setText("Esse usuário já existe!");
    }
    if(senhaFuncionario == ""){
        verificaErros++;
        ui->lblSenhaFuncionarioErro->setText("Favor preencher campo!");
    }
    else if(senhaFuncionario < 8){
        verificaErros++;
        ui->lblSenhaFuncionarioErro->setText("Campo preenchido incorretamente!");
    }
    else if(senhaFuncionario != confirmarSenhaFuncionario){
        verificaErros++;
        ui->lblConfirmarSenhaFuncionarioErro->setText("As senhas não são iguais!");
    }

    if(verificaErros == 0){
        funcionario = new Funcionario(lddeFuncionarios->getQtdCadastrados()+1, nomeFuncionario, emailFuncionario, usuarioFuncionario, senhaFuncionario, telefoneFuncionario);
        lddeFuncionarios->Insere(funcionario);
        QSqlQuery query;
        query.prepare("insert into tb_funcionarios(nome_funcionario, email_funcionario, usuario_funcionario, senha_funcionario, telefone_funcionario) values""('" + nomeFuncionario + "','" + emailFuncionario + "','" + usuarioFuncionario + "','" + senhaFuncionario + "','" + telefoneFuncionario + "')");
        if(query.exec()){
            QMessageBox::information(this, "OK", "Funcionario cadastrado com sucesso!");
            close();
        }
        else{
            QMessageBox::warning(this,"ERRO","ERRO ao cadastrar funcionário!");
        }
    }
    else{
        QMessageBox::warning(this, "ERRO", "Não foi possível cadastrar funcionario!");
    }
}

void telaCadastroFuncionario::on_txtNomeFuncionario_editingFinished()
{
    ui->lblNomeFuncionarioErro->setText("");
}

void telaCadastroFuncionario::on_txtEmailFuncionario_editingFinished()
{
    ui->lblEmailFuncionarioErro->setText("");
}

void telaCadastroFuncionario::on_txtTelefoneFuncionario_editingFinished()
{
    ui->lblTelefoneFuncionarioErro->setText("");
}

void telaCadastroFuncionario::on_txtUsuarioFuncionario_editingFinished()
{
    ui->lblUsuarioFuncionarioErro->setText("");
}

void telaCadastroFuncionario::on_txtSenhaFuncionario_editingFinished()
{
    ui->lblSenhaFuncionarioErro->setText("");
    ui->lblConfirmarSenhaFuncionarioErro->setText("");
}

void telaCadastroFuncionario::on_txtConfirmarSenhaFuncionario_editingFinished()
{
    ui->lblConfirmarSenhaFuncionarioErro->setText("");
}
