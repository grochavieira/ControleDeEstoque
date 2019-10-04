#include "telacadastroprodutos.h"
#include "ui_telacadastroprodutos.h"


static LDDE<Produto>* lddeProdutos;
static Produto produto;
static int idProduto;
static QString nomeProduto;
static double precoProduto;
static int quantidadeProduto;
static int quantidadeMinProduto;
static int quantidadeMaxProduto;

telaCadastroProdutos::telaCadastroProdutos(QWidget *parent, LDDE<Produto>* lddeProdutosCopia) :
    QDialog(parent),
    ui(new Ui::telaCadastroProdutos)
{
    ui->setupUi(this);
    lddeProdutos = lddeProdutosCopia;
    lddeProdutos->Imprime();
}

telaCadastroProdutos::~telaCadastroProdutos()
{
    delete ui;
}

void telaCadastroProdutos::on_btnCadastrarProduto_clicked()
{
    int verificador = 0;
    idProduto = ui->spnIdProduto->value();
    nomeProduto = ui->txtNomeProduto->text();
    precoProduto = ui->spnPrecoProduto->value();
    quantidadeProduto = ui->spnQuantidadeProduto->value();
    quantidadeMinProduto = ui->spnQuantidadeMinProduto->value();
    quantidadeMaxProduto = ui->spnQuantidadeMaxProduto->value();

    if((lddeProdutos->Busca(idProduto)).getId() != -1){
        verificador++;
        ui->lblErroId->setText("Esse ID já foi cadastrado.");
    }

    if(nomeProduto == ""){
        verificador++;
        ui->lblErroNome->setText("Favor preencher o campo.");
    }

    if(precoProduto == 0.0){
        verificador++;
        ui->lblErroPreco->setText("Vai vender de graça é?");
    }

    if(verificador == 0){
        produto = new Produto(idProduto, nomeProduto, precoProduto, quantidadeProduto, quantidadeMinProduto, quantidadeMaxProduto);
        lddeProdutos->Insere(produto);

        QSqlQuery query;
        query.prepare("insert into tb_produtos (id, nome, preco, quantidade, quantidade_minima, quantidade_maxima) values""('" + ui->spnIdProduto->text() + "','" + ui->txtNomeProduto->text() + "','" + ui->spnPrecoProduto->text() + "','" + ui->spnQuantidadeProduto->text() + "','" + ui->spnQuantidadeMinProduto->text() + "','" + ui->spnQuantidadeMaxProduto->text() + "')");
        if(query.exec()){
            qDebug() << "Produto cadastrado";
        }
        else{
            qDebug() << "Erro ao cadastrar produto";
        }
        QMessageBox::information(this, "OK", "Produto cadastrado com sucesso!");
        ui->txtNomeProduto->clear();
        ui->spnPrecoProduto->setValue(0.00);
        ui->spnQuantidadeProduto->setValue(1);
        ui->spnQuantidadeMinProduto->setMaximum(0);
        ui->spnQuantidadeMaxProduto->setMinimum(1);
        ui->spnQuantidadeMaxProduto->setValue(1);
    }
    else{
        QMessageBox::warning(this, "ERRO", "Não foi possível cadastrar o produto!");
    }
}

void telaCadastroProdutos::on_btnEncontrarId_clicked()
{
    int i = 1;
    while((lddeProdutos->Busca(i)).getId() != -1){
        i++;
    }
    ui->spnIdProduto->setValue(i);
    ui->lblErroId->setText("");
}

void telaCadastroProdutos::on_spnQuantidadeProduto_editingFinished()
{
    ui->spnQuantidadeMinProduto->setMaximum(ui->spnQuantidadeProduto->value() - 1);
    ui->spnQuantidadeMaxProduto->setMinimum(ui->spnQuantidadeProduto->value());
}

void telaCadastroProdutos::on_spnIdProduto_editingFinished()
{
    ui->lblErroId->setText("");
}

void telaCadastroProdutos::on_txtNomeProduto_editingFinished()
{
    ui->lblErroNome->setText("");
}

void telaCadastroProdutos::on_spnPrecoProduto_editingFinished()
{
    ui->lblErroPreco->setText("");
}
