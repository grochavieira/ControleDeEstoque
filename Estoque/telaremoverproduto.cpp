#include "telaremoverproduto.h"
#include "ui_telaremoverproduto.h"

static LDDE<Produto>* lddeProdutos;
static Produto produto;

telaRemoverProduto::telaRemoverProduto(QWidget *parent, LDDE<Produto>* lddeProdutosCopia) :
    QDialog(parent),
    ui(new Ui::telaRemoverProduto)
{
    ui->setupUi(this);
    lddeProdutos = lddeProdutosCopia;

    ui->twProdutos->setColumnCount(6);
    ui->twProdutos->setRowCount(0);
    int i = 0;
    produto = (*lddeProdutos)[i];
    while(produto.getId() != -1){
        qDebug() << produto.getNome() << endl;
        ui->twProdutos->insertRow(i);
        ui->twProdutos->setItem(i, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutos->setItem(i, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutos->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
        ui->twProdutos->setItem(i, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutos->setItem(i, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
        ui->twProdutos->setItem(i, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
        i++;
        produto = (*lddeProdutos)[i];
    }


    ui->twProdutos->verticalHeader()->setVisible(false);
    ui->twProdutos->setColumnWidth(0, 40);
    ui->twProdutos->setColumnWidth(1, 150);
    ui->twProdutos->setColumnWidth(2, 80);
    ui->twProdutos->setColumnWidth(3, 100);
    ui->twProdutos->setColumnWidth(4, 100);
    ui->twProdutos->setColumnWidth(5, 100);

    QStringList cabecalhos = {"ID", "Nome", "Preço", "Quantidade", "Qtd. Mínima", "Qtd. Máxima"};
    ui->twProdutos->setHorizontalHeaderLabels(cabecalhos);
    ui->twProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);

}

telaRemoverProduto::~telaRemoverProduto()
{
    delete ui;
}

void telaRemoverProduto::on_btnPesquisar_clicked()
{
    QString nome = ui->txtPesquisarProduto->text();
    produto = lddeProdutos->Busca(nome);
    if(produto.getId() == -1){
        QMessageBox::information(this,"ERRO","O Nome pesquisado não existe!");
    }
    else{
        ui->twProdutos->clearContents();
        ui->twProdutos->setRowCount(0);
        ui->twProdutos->insertRow(0);
        ui->twProdutos->setItem(0, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutos->setItem(0, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutos->setItem(0, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
        ui->twProdutos->setItem(0, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutos->setItem(0, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
        ui->twProdutos->setItem(0, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
    }

}

void telaRemoverProduto::on_btnPesquisarTudo_clicked()
{
    int i = 0;
    produto = (*lddeProdutos)[i];
    ui->twProdutos->setRowCount(0);
    while(produto.getId() != -1){
        ui->twProdutos->insertRow(i);
        ui->twProdutos->setItem(i, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutos->setItem(i, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutos->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
        ui->twProdutos->setItem(i, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutos->setItem(i, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
        ui->twProdutos->setItem(i, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
        i++;
        produto = (*lddeProdutos)[i];
    }
}

void telaRemoverProduto::on_btnExcluir_clicked()
{
    int linha = ui->twProdutos->currentRow();
    int id = ui->twProdutos->item(linha,0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from tb_produtos where id=" + QString::number(id));
    if(query.exec()){
        ui->twProdutos->removeRow(linha);
        QMessageBox::information(this,"","Registro excluido!");
        lddeProdutos->Remove(id);
    }
    else{
        QMessageBox::warning(this,"ERRO","Erro ao excluir registro!");
    }

}
