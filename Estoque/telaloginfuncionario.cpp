#include "telaloginfuncionario.h"
#include "ui_telaloginfuncionario.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

static LDDE<Funcionario> lddeFuncionarios;
static Funcionario funcionario;

telaLoginFuncionario::telaLoginFuncionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaLoginFuncionario)
{
    ui->setupUi(this);

    /* Executa uma query do sql para percorrer a tabela dos funcionarios
     * e mandar seus dados para um objeto LDDE<Funcionario> e guardar
     * seus dados dentro dele.
     */
    QSqlQuery query;
    query.prepare("select * from tb_funcionarios");
    if(query.exec()){
        while(query.next()){
            funcionario = new Funcionario(query.value(0).toInt(), query.value(1).toString(), query.value(2).toString(), query.value(3).toString(), query.value(4).toString(), query.value(5).toString());
            lddeFuncionarios.Insere(funcionario);
        }
    }
    else{
        qDebug() << "Banco de Dados falhou!";
    }
}

telaLoginFuncionario::~telaLoginFuncionario()
{
    delete ui;
}

void telaLoginFuncionario::on_btnEntrarFuncionario_clicked()
{
    //Pega os dados digitados pelo funcionario
    QString usuarioFuncionario = ui->txtUsuarioFuncionario->text();
    QString senhaFuncionario = ui->txtSenhaFuncionario->text();

    //Verifica se esses dados existem
    if(lddeFuncionarios.BuscaCadastro(usuarioFuncionario, senhaFuncionario)){
        this->close();
        TelaGerenciaEstoque telaGerenciaEstoque;
        telaGerenciaEstoque.exec();
    }
    else{
        QMessageBox::warning(this,"ERRO","Usuário ou Senha incorretos!");
    }
}

void telaLoginFuncionario::on_btnCadastrarNovoFuncionario_clicked()
{
    /* Chama a tela de cadastro de funcionarios passando o
     * endereço da lddeFuncionarios que tem todo o registro
     * dos mesmo, para que isso não seja feito novamente
     */
    telaCadastroFuncionario telaCadastroFuncionario(this, &lddeFuncionarios);
    telaCadastroFuncionario.setModal(true);
    telaCadastroFuncionario.exec();
}

void telaLoginFuncionario::on_pushButton_clicked()
{
}

void telaLoginFuncionario::on_btnHome_clicked()
{
    close();
    MainWindow mainW;
    mainW.setVisible(true);
}
