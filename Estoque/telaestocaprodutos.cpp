#include "telaestocaprodutos.h"
#include "ui_telaestocaprodutos.h"

static PILHA<Produto> pilha;
static LDDE<Produto>* lddeProdutosOrigem;
static Produto produto;
static LES<Produto> listaDeCompras(1);

telaEstocaProdutos::telaEstocaProdutos(QWidget *parent, LES<Produto>* listaDePrioridade, LDDE<Produto>* lddeProdutosTemp) :
    QDialog(parent),
    ui(new Ui::telaEstocaProdutos)
{
    ui->setupUi(this);

    lddeProdutosOrigem = lddeProdutosTemp;
    listaDeCompras = *listaDePrioridade;

    // Configurações iniciais da lista de prioridade (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twListaPrioridade->setColumnCount(5);
    ui->twListaPrioridade->verticalHeader()->setVisible(false);
    ui->twListaPrioridade->horizontalHeader()->setFixedHeight(30);
    ui->twListaPrioridade->setColumnWidth(0, 80);
    ui->twListaPrioridade->setColumnWidth(1, 290);
    ui->twListaPrioridade->setColumnWidth(2, 125);
    ui->twListaPrioridade->setColumnWidth(3, 125);
    ui->twListaPrioridade->setColumnWidth(4, 125);
    QStringList cabecalhosLista = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    ui->twListaPrioridade->setHorizontalHeaderLabels(cabecalhosLista);
    ui->twListaPrioridade->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twListaPrioridade->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twListaPrioridade->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    for(int j=0; j<(*listaDePrioridade).Size(); j++){
        produto = (*listaDePrioridade)[j]; // Variavel produto pega cada produto da lista
        qDebug() << "Produto: " << produto.getNome();
        ui->twListaPrioridade->insertRow(j);
        ui->twListaPrioridade->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twListaPrioridade->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
        ui->twListaPrioridade->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twListaPrioridade->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
        ui->twListaPrioridade->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
    }

    // Configurações iniciais da pilha de compras (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twPilhaEstoque->setColumnCount(5);
    ui->twPilhaEstoque->verticalHeader()->setVisible(false);
    ui->twPilhaEstoque->horizontalHeader()->setFixedHeight(30);
    ui->twPilhaEstoque->setColumnWidth(0, 80);
    ui->twPilhaEstoque->setColumnWidth(1, 290);
    ui->twPilhaEstoque->setColumnWidth(2, 125);
    ui->twPilhaEstoque->setColumnWidth(3, 125);
    ui->twPilhaEstoque->setColumnWidth(4, 125);
    QStringList cabecalhosPilha = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    ui->twPilhaEstoque->setHorizontalHeaderLabels(cabecalhosPilha);
    ui->twPilhaEstoque->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twPilhaEstoque->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twPilhaEstoque->setStyleSheet("QTableView{selection-background-color:#FF6633}");

}

telaEstocaProdutos::~telaEstocaProdutos()
{
    listaDeCompras.Reseta();
    pilha.Reseta();
    delete ui;
}

void telaEstocaProdutos::on_buttonEnviaProduto_clicked()
{
    if(pilha.Size() >= 20){
        QMessageBox::warning(this, "ERRO", "O maximo de 20 produtos foi atingido!");
    }
    else{
        // Pega o index da linha que foi selecionada
        int linha = ui->twListaPrioridade->currentRow();
        if (linha != -1) // Se essa linha existe
        {
            /* Seus dados são pegados para serem excluidos na lddeProdutos, no banco de dados
             * e na tabela de produtos
             */
            int id = ui->twListaPrioridade->item(linha, 0)->text().toInt();
            produto = listaDeCompras.Busca(id);
            pilha.Empilha(produto);
            listaDeCompras.Remove(id);
            QMessageBox::information(this, "ACCEPT", "Pedido de reabastecimento do produto enviado!");
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "Selecione o produto que deseja reabastecer!");
        }

        ui->twListaPrioridade->setRowCount(0); // Reseta a lista de produtos
        for(int j=0; j<listaDeCompras.Size(); j++){ // Monta Tabela
            produto = listaDeCompras[j];
            qDebug() << "Lista: " << produto.getNome();
            ui->twListaPrioridade->insertRow(j);
            ui->twListaPrioridade->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twListaPrioridade->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
            ui->twListaPrioridade->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twListaPrioridade->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twListaPrioridade->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
        }
        ui->twListaPrioridade->selectRow(0);

        PILHA<Produto> pilhaAux;
        pilhaAux = pilha; // Pilha auxiliar para montar a tabela da pilha
        ui->twPilhaEstoque->setRowCount(0); // Reseta a pilha de produtos
        for(int j=0; j<pilha.Size(); j++){ // Monta Pilha Para Renovar Estoque
            produto = pilhaAux.Desempilha();
            qDebug() << "Pilha: " << produto.getNome();
            ui->twPilhaEstoque->insertRow(j);
            ui->twPilhaEstoque->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twPilhaEstoque->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
            ui->twPilhaEstoque->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twPilhaEstoque->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twPilhaEstoque->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
        }
    }
}

void telaEstocaProdutos::on_buttonEnviaTudo_clicked()
{
    if(pilha.Size() == 20)
        QMessageBox::warning(this, "ERRO", "O maximo de 20 produtos foi atingido!");
    else if(pilha.Size() == (*lddeProdutosOrigem).getQtdCadastrados())
        QMessageBox::warning(this, "ERRO", "Todos produtos ja foram enviados!");
    else{
        PILHA<Produto> pilhaAux; // Pilha auxiliar para montar a tabela da pilha
        int faltaProdutos = 20 - (20 - pilha.Size()); // Quantidade de produtos que falta para completar 20

        for(int i=faltaProdutos; i<20 && i<(*lddeProdutosOrigem).getQtdCadastrados(); i++){
            produto = listaDeCompras[0];
            qDebug() << "Id: " << produto.getId();
            pilha.Empilha(produto);
            listaDeCompras.Remove(); // Remove o de maior prioridade
        }

        ui->twListaPrioridade->setRowCount(0); // Reseta a lista de produtos
        for(int j=0; j<listaDeCompras.Size(); j++){ // Monta Tabela
            produto = listaDeCompras[j];
            qDebug() << "Produto: " << produto.getNome();
            ui->twListaPrioridade->insertRow(j);
            ui->twListaPrioridade->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twListaPrioridade->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
            ui->twListaPrioridade->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twListaPrioridade->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twListaPrioridade->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
        }
        ui->twListaPrioridade->selectRow(0);

        pilhaAux = pilha;
        ui->twPilhaEstoque->setRowCount(0); // Reseta a pilha de produtos
        for(int j=0; j<pilha.Size(); j++){ // Monta Pilha Para Renovar Estoque
            produto = pilhaAux.Desempilha();
            qDebug() << "Produto: " << produto.getNome();
            ui->twPilhaEstoque->insertRow(j);
            ui->twPilhaEstoque->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twPilhaEstoque->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
            ui->twPilhaEstoque->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twPilhaEstoque->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twPilhaEstoque->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
        }
    }
}

void telaEstocaProdutos::on_buttonEnviaCaminhao_clicked()
{
    if(pilha.Size() == 0)
    {
        QMessageBox::warning(this, "ERRO", "Selecione Alguns Produtos Para Pedir a Reposição de Estoque!");
    }
    else{
        PILHA<Produto> pilhaAux;
        pilhaAux = pilha;
        pilha.Inverte();
        while(pilhaAux.Size() != 0)
        {
            produto = pilhaAux.Desempilha();
            QSqlQuery query;
            query.prepare("update tb_produtos set quantidade=" + QString::number(produto.getQuantidadeMax()) + ", prioridade=" + QString::number(0) + " where id=" + QString::number(produto.getId()));
            if (query.exec())
            {
                produto.Atualiza(produto.getQuantidadeMax()); // Atualiza Quantidade
                produto.AtualizaP(); // Atualiza Prioridade
                (*lddeProdutosOrigem).Atualiza(produto, produto.getId()); // Salva na lddeProdutos
            }
            else
            {
                QMessageBox::warning(this, "ERRO", "Erro ao atualizar o produto " + produto.getNome());
            }
        }

        produto = pilha.Desempilha();
        ui->produto_1->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_2->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_3->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_4->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_5->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_6->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_7->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_8->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_9->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_10->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_11->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_12->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_13->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_14->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_15->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_16->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_17->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_18->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_19->setText(produto.getNome());
        produto = pilha.Desempilha();
        ui->produto_20->setText(produto.getNome());

        //Ativar giff e fechar esta aba!
    }

    //close();
}
