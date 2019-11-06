#include "telacadastrofuncionario.h"
#include "ui_telacadastrofuncionario.h"

static LDDE<Funcionario> *lddeFuncionarios;
static Funcionario funcionario;
telaCadastroFuncionario::telaCadastroFuncionario(QWidget *parent, LDDE<Funcionario> *lddeFuncionariosCopia) : QDialog(parent),
                                                                                                              ui(new Ui::telaCadastroFuncionario)
{
    ui->setupUi(this);
    /* Pega os dados dos funcionarios que foram passados por parâmetros
     * através da lddeFuncionariosCopia para ser utilizada
     * pela lddeFuncionarios na realizacão de cadastros
     */
    lddeFuncionarios = lddeFuncionariosCopia;
}

telaCadastroFuncionario::~telaCadastroFuncionario()
{
    delete ui;
}

void telaCadastroFuncionario::on_btnCadastrarFuncionario_clicked()
{
    // Contador para a quantidade de erros feitos pelo funcionario ao se cadastrar
    int verificaErros = 0;
    // Pega os dados que foram digitados pelo funcionario
    QString nomeFuncionario = ui->txtNomeFuncionario->text();
    QString emailFuncionario = ui->txtEmailFuncionario->text();
    QString telefoneFuncionario = ui->txtTelefoneFuncionario->text();
    QString usuarioFuncionario = ui->txtUsuarioFuncionario->text();
    QString senhaFuncionario = ui->txtSenhaFuncionario->text();
    QString confirmarSenhaFuncionario = ui->txtConfirmarSenhaFuncionario->text();

    /* A seguir são realizados as comparações para verificar se
     * os dados digitados pelo funcionário estão corretos para
     * ele ser cadastrado, caso contrário, é mostrado uma mensagem
     * de texto indicando o que esta errado.
     */
    if (nomeFuncionario == "")
    {
        verificaErros++;
        ui->lblNomeFuncionarioErro->setText("Favor preencher campo!");
    }

    if (emailFuncionario == "")
    {
        verificaErros++;
        ui->lblEmailFuncionarioErro->setText("Favor preencher campo!");
    }

    if (telefoneFuncionario.size() < 14)
    {
        verificaErros++;
        ui->lblTelefoneFuncionarioErro->setText("Campo preenchido incorretamente!");
    }

    if (usuarioFuncionario.length() < 8)
    {
        verificaErros++;
        ui->lblUsuarioFuncionarioErro->setText("Campo incorreto, min. 8 caracteres!");
    }
    else if (lddeFuncionarios->BuscaUsuario(usuarioFuncionario))
    {
        verificaErros++;
        ui->lblUsuarioFuncionarioErro->setText("Esse usuário já existe!");
    }

    if (senhaFuncionario < 8)
    {
        verificaErros++;
        ui->lblSenhaFuncionarioErro->setText("Campo incorreto, min. 8 caracteres!");
    }
    else if (senhaFuncionario != confirmarSenhaFuncionario)
    {
        verificaErros++;
        ui->lblConfirmarSenhaFuncionarioErro->setText("As senhas não são iguais!");
    }

    // Se tudo estiver correto, o funcionário sera cadastrado
    if (verificaErros == 0)
    {
        funcionario = new Funcionario(lddeFuncionarios->getQtdCadastrados() + 1, nomeFuncionario,
                                      emailFuncionario, usuarioFuncionario, senhaFuncionario,
                                      telefoneFuncionario);
        /* Manda os dados do funcionario para a lddeFuncionarios, para que
         * ela seja utilizada quando voltar para o login, e não
         * precise pegar do banco novamente
         */
        lddeFuncionarios->Insere(funcionario);
        // Guarda os dados no banco de dados (tabela do funcionario)
        QSqlQuery query;
        query.prepare("insert into tb_funcionarios(nome_funcionario, email_funcionario,"
                      " usuario_funcionario, senha_funcionario, telefone_funcionario) values"
                      "('" +
                      nomeFuncionario + "','" + emailFuncionario + "','" + usuarioFuncionario + "','" + senhaFuncionario + "','" + telefoneFuncionario + "')");
        if (query.exec())
        {
            QMessageBox::information(this, "OK", "Funcionario cadastrado com sucesso!");
            close();
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "ERRO ao cadastrar funcionário!");
        }
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Não foi possível cadastrar funcionario!");
    }
}
/* Os slots a seguir apenas servem para apagar as mensagens de erro
 * quando o funcionario começar a digitar nas caixas de texto
 */
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
