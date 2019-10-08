#include "telagerenciaestoque.h"
#include "ui_telagerenciaestoque.h"

static LDDE<Produto> lddeProdutos;
static Produto produto;
static Conexao conexao;
static bool logado;

TelaGerenciaEstoque::TelaGerenciaEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaGerenciaEstoque)
{
    ui->setupUi(this);
    logado = conexao.abrir();
    if(logado){
        QSqlQuery query;
        query.prepare("select * from tb_produtos");
        if(query.exec()){
            while(query.next()){
                produto = new Produto(query.value(0).toInt(), query.value(1).toString(), ((query.value(2).toString()).replace(",",".")).toDouble(), query.value(3).toInt(), query.value(4).toInt(), query.value(5).toInt());
                lddeProdutos.Insere(produto);
            }
        }
        else{
            qDebug() << "Banco de dados falhou!";
        }
    }
    else{
        qDebug() << "Banco de Dados não foi aberto!";
    }
    conexao.fechar();


    ui->twProdutos->setColumnCount(6);

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

    ui->twProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutos->setStyleSheet("QTableView{selection-background-color:blue}");
}

TelaGerenciaEstoque::~TelaGerenciaEstoque()
{
    delete ui;
}

void TelaGerenciaEstoque::on_btnCadastrarProduto_clicked()
{
    int verificador = 0;
        int idProduto = ui->spnIdProduto->value();
        QString nomeProduto = ui->txtNomeProduto->text();
        double precoProduto = ui->spnPrecoProduto->value();
        int quantidadeProduto = ui->spnQuantidadeProduto->value();
        int quantidadeMinProduto = ui->spnQuantidadeMinProduto->value();
        int quantidadeMaxProduto = ui->spnQuantidadeMaxProduto->value();

        if((lddeProdutos.Busca(idProduto)).getId() != -1){
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
            lddeProdutos.Insere(produto);

            logado = conexao.abrir();
            if(logado){
                QSqlQuery query;
                query.prepare("insert into tb_produtos (id, nome, preco, quantidade, quantidade_minima, quantidade_maxima, prioridade) values""('" + ui->spnIdProduto->text() + "','" + ui->txtNomeProduto->text() + "','" + ui->spnPrecoProduto->text() + "','" + ui->spnQuantidadeProduto->text() + "','" + ui->spnQuantidadeMinProduto->text() + "','" + ui->spnQuantidadeMaxProduto->text() + "','" + QString::number(produto.getPrioridade()) + "')");
                if(query.exec()){
                    qDebug() << "Produto cadastrado";
                    QMessageBox::information(this, "OK", "Produto cadastrado com sucesso!");
                }
                else{
                    qDebug() << "Erro ao cadastrar produto";
                    QMessageBox::warning(this,"ERRO","ERRO ao cadastrar produto!");
                }
                ui->txtNomeProduto->clear();
                ui->spnPrecoProduto->setValue(0.00);
                ui->spnQuantidadeProduto->setValue(1);
                ui->spnQuantidadeMinProduto->setMaximum(0);
                ui->spnQuantidadeMaxProduto->setMinimum(1);
                ui->spnQuantidadeMaxProduto->setValue(1);
            }else{
                qDebug() << "Banco de Dados não foi aberto!";
            }
        }
        else{
            QMessageBox::warning(this, "ERRO", "Não foi possível cadastrar o produto!");
        }
}

void TelaGerenciaEstoque::on_btnEncontrarId_clicked()
{
    int i = 1;
    while((lddeProdutos.Busca(i)).getId() != -1){
        i++;
    }
    ui->spnIdProduto->setValue(i);
    ui->lblErroId->setText("");
}

void TelaGerenciaEstoque::on_spnQuantidadeProduto_editingFinished()
{
    ui->spnQuantidadeMinProduto->setMaximum(ui->spnQuantidadeProduto->value() - 1);
    ui->spnQuantidadeMaxProduto->setMinimum(ui->spnQuantidadeProduto->value());
}

void TelaGerenciaEstoque::on_spnIdProduto_editingFinished()
{
    ui->lblErroId->setText("");
}

void TelaGerenciaEstoque::on_txtNomeProduto_editingFinished()
{
   ui->lblErroNome->setText("");
}

void TelaGerenciaEstoque::on_spnPrecoProduto_editingFinished()
{
    ui->lblErroPreco->setText("");
}

void TelaGerenciaEstoque::on_btnPesquisar_clicked()
{
    QString nome = ui->txtPesquisarProduto->text();
    produto = lddeProdutos.Busca(nome);
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

void TelaGerenciaEstoque::on_tabCadastrarProdutos_tabBarClicked(int index)
{

}

void TelaGerenciaEstoque::on_btnExcluir_clicked()
{
    int linha = ui->twProdutos->currentRow();
    if(linha != -1)
    {
        logado = conexao.abrir();
        if(logado){
            int id = ui->twProdutos->item(linha,0)->text().toInt();
            QSqlQuery query;
            query.prepare("delete from tb_produtos where id=" + QString::number(id));
            if(query.exec()){
                ui->twProdutos->removeRow(linha);
                QMessageBox::information(this,"","Registro excluido!");
                lddeProdutos.Remove(id);
            }
            else{
                QMessageBox::warning(this,"ERRO","Erro ao excluir registro!");
            }
        }
        else{
            qDebug() << "Banco de Dados não foi aberto";
        }
    }
    else{
        QMessageBox::warning(this,"ERRO","Selecione um produto para ser excluído!");
    }

    ui->twProdutos->selectRow(0);
}

void TelaGerenciaEstoque::on_btnListarTodosProdutos_clicked()
{
    ui->twProdutos->setRowCount(0);
    int i = 0;
    produto = lddeProdutos[i];
    while(produto.getId() != -1){
        ui->twProdutos->insertRow(i);
        ui->twProdutos->setItem(i, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutos->setItem(i, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutos->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
        ui->twProdutos->setItem(i, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutos->setItem(i, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
        ui->twProdutos->setItem(i, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
        i++;
        produto = lddeProdutos[i];
    }
}

void TelaGerenciaEstoque::on_tabGerenciadorDeEstoque_tabBarClicked(int index)
{
    if(index == 1){
        ui->twProdutos->setRowCount(0);
        int i = 0;
        produto = lddeProdutos[i];
        while(produto.getId() != -1){
            ui->twProdutos->insertRow(i);
            ui->twProdutos->setItem(i, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twProdutos->setItem(i, 1, new QTableWidgetItem(produto.getNome()));
            ui->twProdutos->setItem(i, 2, new QTableWidgetItem("R$ " + QString::number(produto.getPreco())));
            ui->twProdutos->setItem(i, 3, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twProdutos->setItem(i, 4, new QTableWidgetItem(QString::number(produto.getQuantidadeMin())));
            ui->twProdutos->setItem(i, 5, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            i++;
            produto = lddeProdutos[i];
        }
    }

    if(index == 2){
        /*int qtdCadastrados = lddeProdutos.getQtdCadastrados();
        LES<Produto> lesProdutos(qtdCadastrados);
        for(int i = 0; i < qtdCadastrados; i++){
            lesProdutos.Insere(lddeProdutos[i]);
            produto = lddeProdutos[i];
        }
        lesProdutos.Imprime();
        */
    }
}

void TelaGerenciaEstoque::on_twListaDeCompras_cellActivated(int row, int column)
{

}
