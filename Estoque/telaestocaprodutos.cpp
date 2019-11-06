#include "telaestocaprodutos.h"
#include "ui_telaestocaprodutos.h"

static PILHA<Produto> pilha;
static LDDE<Produto> *lddeProdutosOrigem;
static Produto produto;
static LES<Produto> listaDeCompras(1);
static int qtdProdutosReposicao = 0;
static QLabel *labelPacotes[20][2];

telaEstocaProdutos::telaEstocaProdutos(QWidget *parent, LES<Produto> *listaDePrioridade, LDDE<Produto> *lddeProdutosTemp) : QDialog(parent),
                                                                                                                            ui(new Ui::telaEstocaProdutos)
{
    ui->setupUi(this);

    // Inicialização da matriz das caixas e labels dos produtos
    labelPacotes[0][0] = ui->lblCaixa1;
    labelPacotes[0][1] = ui->lblProduto1;
    labelPacotes[1][0] = ui->lblCaixa2;
    labelPacotes[1][1] = ui->lblProduto2;
    labelPacotes[2][0] = ui->lblCaixa3;
    labelPacotes[2][1] = ui->lblProduto3;
    labelPacotes[3][0] = ui->lblCaixa4;
    labelPacotes[3][1] = ui->lblProduto4;
    labelPacotes[4][0] = ui->lblCaixa5;
    labelPacotes[4][1] = ui->lblProduto5;
    labelPacotes[5][0] = ui->lblCaixa6;
    labelPacotes[5][1] = ui->lblProduto6;
    labelPacotes[6][0] = ui->lblCaixa7;
    labelPacotes[6][1] = ui->lblProduto7;
    labelPacotes[7][0] = ui->lblCaixa8;
    labelPacotes[7][1] = ui->lblProduto8;
    labelPacotes[8][0] = ui->lblCaixa9;
    labelPacotes[8][1] = ui->lblProduto9;
    labelPacotes[9][0] = ui->lblCaixa10;
    labelPacotes[9][1] = ui->lblProduto10;
    labelPacotes[10][0] = ui->lblCaixa11;
    labelPacotes[10][1] = ui->lblProduto11;
    labelPacotes[11][0] = ui->lblCaixa12;
    labelPacotes[11][1] = ui->lblProduto12;
    labelPacotes[12][0] = ui->lblCaixa13;
    labelPacotes[12][1] = ui->lblProduto13;
    labelPacotes[13][0] = ui->lblCaixa14;
    labelPacotes[13][1] = ui->lblProduto14;
    labelPacotes[14][0] = ui->lblCaixa15;
    labelPacotes[14][1] = ui->lblProduto15;
    labelPacotes[15][0] = ui->lblCaixa16;
    labelPacotes[15][1] = ui->lblProduto16;
    labelPacotes[16][0] = ui->lblCaixa17;
    labelPacotes[16][1] = ui->lblProduto17;
    labelPacotes[17][0] = ui->lblCaixa18;
    labelPacotes[17][1] = ui->lblProduto18;
    labelPacotes[18][0] = ui->lblCaixa19;
    labelPacotes[18][1] = ui->lblProduto19;
    labelPacotes[19][0] = ui->lblCaixa20;
    labelPacotes[19][1] = ui->lblProduto20;

    for (int i = 0; i < 20; i++)
    {
        labelPacotes[i][0]->setVisible(false);
        labelPacotes[i][1]->setVisible(false);
    }

    lddeProdutosOrigem = lddeProdutosTemp;
    listaDeCompras = *listaDePrioridade;

    // Configurações iniciais da lista de prioridade (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twListaPrioridade->setColumnCount(5);
    ui->twListaPrioridade->verticalHeader()->setVisible(false);
    ui->twListaPrioridade->horizontalHeader()->setFixedHeight(30);
    ui->twListaPrioridade->setColumnWidth(0, 80);
    ui->twListaPrioridade->setColumnWidth(1, 200);
    ui->twListaPrioridade->setColumnWidth(2, 125);
    ui->twListaPrioridade->setColumnWidth(3, 125);
    ui->twListaPrioridade->setColumnWidth(4, 125);
    QStringList cabecalhosLista = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    ui->twListaPrioridade->setHorizontalHeaderLabels(cabecalhosLista);
    ui->twListaPrioridade->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twListaPrioridade->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twListaPrioridade->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    // Inicializa a tabela de prioridade com os produtos que precisam de reposição
    int linha = 0;
    for (int j = 0; j < (*listaDePrioridade).Size(); j++)
    {
        produto = (*listaDePrioridade)[j]; // Variavel produto pega cada produto da lista
        if (produto.getPrioridade() > 0.0)
        {
            qDebug() << "Produto: " << produto.getNome();
            ui->twListaPrioridade->insertRow(linha);
            ui->twListaPrioridade->setItem(linha, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twListaPrioridade->setItem(linha, 1, new QTableWidgetItem(produto.getNome()));
            ui->twListaPrioridade->setItem(linha, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twListaPrioridade->setItem(linha, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twListaPrioridade->setItem(linha, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
            linha++;
        }
    }

    // Configurações iniciais da tabela de produtos do caminhão (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twPilhaEstoque->setColumnCount(5);
    ui->twPilhaEstoque->verticalHeader()->setVisible(false);
    ui->twPilhaEstoque->horizontalHeader()->setFixedHeight(30);
    ui->twPilhaEstoque->setColumnWidth(0, 80);
    ui->twPilhaEstoque->setColumnWidth(1, 200);
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
    /* As variaveis abaixo são resetadas para que nada seja duplicado
     * ao entrar novamente nessa tela, pois o qt não deleta sózinho
     * essas variaveis quando a tela atual é fechada
     */
    qtdProdutosReposicao = 0;
    listaDeCompras.Reseta();
    pilha.Reseta();
    delete ui;
}

void telaEstocaProdutos::on_buttonEnviaProduto_clicked()
{
    // Pega o index da linha selecionada da tabela
    int linha = ui->twListaPrioridade->currentRow();
    if (linha == 0) // Se for a primeira linha
    {
        // Verifica se o tamanhanho da pilha está no limite (20)
        if (pilha.Size() == 20)
        {
            QMessageBox::warning(this, "ERRO", "O maximo de 20 produtos foi atingido!");
        }
        else
        {
            if (linha != -1) // Se essa linha existe
            {
                // Pega o id da linha seleciona e busca ela para ser empilhada
                int id = ui->twListaPrioridade->item(linha, 0)->text().toInt();
                produto = listaDeCompras.Busca(id);
                pilha.Empilha(produto);

                /* Insere um pacote no caminhão com o nome
                 * do produto
                 */
                labelPacotes[qtdProdutosReposicao][0]->setVisible(true);
                labelPacotes[qtdProdutosReposicao][1]->setVisible(true);
                labelPacotes[qtdProdutosReposicao][1]->setText(produto.getNome());
                qtdProdutosReposicao++;

                // Remove o produto selecionado
                listaDeCompras.Remove(id);

                QMessageBox::information(this, "ACCEPT", "Pedido de reabastecimento do produto enviado!");
                // Popula novamente a tabela sem o produto que foi removido
                linha = 0;
                ui->twListaPrioridade->setRowCount(0); // Reseta a lista de produtos
                for (int j = 0; j < listaDeCompras.Size(); j++)
                { // Monta Tabela
                    produto = listaDeCompras[j];
                    if (produto.getPrioridade() > 0.0)
                    {
                        ui->twListaPrioridade->insertRow(linha);
                        ui->twListaPrioridade->setItem(linha, 0, new QTableWidgetItem(QString::number(produto.getId())));
                        ui->twListaPrioridade->setItem(linha, 1, new QTableWidgetItem(produto.getNome()));
                        ui->twListaPrioridade->setItem(linha, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
                        ui->twListaPrioridade->setItem(linha, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
                        ui->twListaPrioridade->setItem(linha, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
                        linha++;
                    }
                }

                PILHA<Produto> pilhaAux;
                pilhaAux = pilha;                   // Pilha auxiliar para montar a tabela da pilha
                ui->twPilhaEstoque->setRowCount(0); // Reseta a pilha de produtos
                for (int j = 0; j < pilha.Size(); j++)
                { // Monta Pilha Para Renovar Estoque
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
            else
            {
                QMessageBox::warning(this, "ERRO", "Nenhum produto foi selecionado!");
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Escolha primeiro os itens de maior prioridade!");
    }
    // Por padrão, seleciona automaticamente a primeira linha disponível da tabela
    ui->twListaPrioridade->selectRow(0);
}

void telaEstocaProdutos::on_buttonEnviaTudo_clicked()
{
    if (pilha.Size() == 20)
        QMessageBox::warning(this, "ERRO", "O maximo de 20 produtos foi atingido!");
    else if (pilha.Size() == (*lddeProdutosOrigem).getQtdCadastrados())
        QMessageBox::warning(this, "ERRO", "Todos produtos ja foram enviados!");
    else
    {
        PILHA<Produto> pilhaAux;                      // Pilha auxiliar para montar a tabela da pilha
        int faltaProdutos = 20 - (20 - pilha.Size()); // Quantidade de produtos que falta para completar 20

        for (int i = faltaProdutos; i < 20 && i < (*lddeProdutosOrigem).getQtdCadastrados(); i++)
        {
            produto = listaDeCompras[0];
            if (produto.getPrioridade() > 0)
            {
                qDebug() << "Id: " << produto.getId();
                pilha.Empilha(produto);
                labelPacotes[qtdProdutosReposicao][0]->setVisible(true);
                labelPacotes[qtdProdutosReposicao][1]->setVisible(true);
                labelPacotes[qtdProdutosReposicao][1]->setText(produto.getNome());
                qtdProdutosReposicao++;
                listaDeCompras.Remove(); // Remove o de maior prioridade
            }
        }

        int linha = 0;
        ui->twListaPrioridade->setRowCount(0); // Reseta a lista de produtos
        for (int j = 0; j < listaDeCompras.Size(); j++)
        { // Monta Tabela
            produto = listaDeCompras[j];
            if (produto.getPrioridade() > 0.0)
            {
                qDebug() << "Produto: " << produto.getNome();
                ui->twListaPrioridade->insertRow(linha);
                ui->twListaPrioridade->setItem(linha, 0, new QTableWidgetItem(QString::number(produto.getId())));
                ui->twListaPrioridade->setItem(linha, 1, new QTableWidgetItem(produto.getNome()));
                ui->twListaPrioridade->setItem(linha, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
                ui->twListaPrioridade->setItem(linha, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
                ui->twListaPrioridade->setItem(linha, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
                linha++;
            }
        }
        ui->twListaPrioridade->selectRow(0);

        pilhaAux = pilha;
        ui->twPilhaEstoque->setRowCount(0); // Reseta a pilha de produtos
        for (int j = 0; j < pilha.Size(); j++)
        { // Monta Pilha Para Renovar Estoque
            produto = pilhaAux.Desempilha();
            qDebug() << "Produto: " << produto.getNome();
            ui->twPilhaEstoque->insertRow(j);
            ui->twPilhaEstoque->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twPilhaEstoque->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
            ui->twPilhaEstoque->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twPilhaEstoque->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twPilhaEstoque->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
        }
        QMessageBox::information(this, "OK", "Produtos enviados para reposição com sucesso!");
    }
}

void telaEstocaProdutos::on_buttonEnviaCaminhao_clicked()
{

    if (pilha.Size() == 0)
    {
        QMessageBox::warning(this, "ERRO", "Nenhum produto foi selecionado para reposição!");
    }
    else
    {
        close();
        TelaRepoeProdutos telaRepoeProdutos(this, &pilha, lddeProdutosOrigem);
        telaRepoeProdutos.exec();
    }
}
