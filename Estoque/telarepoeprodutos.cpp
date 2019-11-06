#include "telarepoeprodutos.h"
#include "ui_telarepoeprodutos.h"

static PILHA<Produto> pilhaProdutos;
static LDDE<Produto> *lddeProdutos;
static Produto produto;
static QLabel *labelPacotes[20][2];
static int qtdPacotes = 0;
static int qtdDescarregados = 0;
static int qtdProdutosCaminhao = 0;

TelaRepoeProdutos::TelaRepoeProdutos(QWidget *parent, PILHA<Produto> *pilhaCopia, LDDE<Produto> *lddeCopia) : QDialog(parent),
                                                                                                              ui(new Ui::TelaRepoeProdutos)
{
    ui->setupUi(this);

    lddeProdutos = lddeCopia;                 // Pega o endereço da lddeProdutos principal, usada no gerenciamento do estoque
    qtdProdutosCaminhao = pilhaCopia->Size(); // Quantidade total de produtos do caminhão
    qtdPacotes = pilhaCopia->Size() - 1;      // Quantidade de pacotes que serão descarregados

    /* Processo de troca de produtos entre a pilha da tela anterior para
     * poder ser utilizada nessa tela
     */
    int qtdAux = pilhaCopia->Size();
    PILHA<Produto> pilhaAuxiliar;
    for (int i = 0; i < qtdAux; i++)
    {
        pilhaAuxiliar.Empilha(pilhaCopia->Desempilha());
    }

    for (int i = 0; i < qtdAux; i++)
    {
        pilhaProdutos.Empilha(pilhaAuxiliar.Desempilha());
    }

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

    // Deixa todos os pacotes invisíveis inicialmente
    for (int i = 0; i < 20; i++)
    {
        labelPacotes[i][0]->setVisible(false);
        labelPacotes[i][1]->setVisible(false);
    }

    // Configurações iniciais da tabela de produtos do caminhão (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twProdutosCaminhao->setColumnCount(5);
    ui->twProdutosCaminhao->verticalHeader()->setVisible(false);
    ui->twProdutosCaminhao->horizontalHeader()->setFixedHeight(30);
    ui->twProdutosCaminhao->setColumnWidth(0, 80);
    ui->twProdutosCaminhao->setColumnWidth(1, 200);
    ui->twProdutosCaminhao->setColumnWidth(2, 125);
    ui->twProdutosCaminhao->setColumnWidth(3, 125);
    ui->twProdutosCaminhao->setColumnWidth(4, 125);
    QStringList cabecalhosProdutosCaminhao = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    ui->twProdutosCaminhao->setHorizontalHeaderLabels(cabecalhosProdutosCaminhao);
    ui->twProdutosCaminhao->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twProdutosCaminhao->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutosCaminhao->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    // Configurações iniciais da tabela de produtos descarregados (cabeçalho, tamanho, num. de colunas, etc..)
    ui->twProdutosDescarregados->setColumnCount(5);
    ui->twProdutosDescarregados->verticalHeader()->setVisible(false);
    ui->twProdutosDescarregados->horizontalHeader()->setFixedHeight(30);
    ui->twProdutosDescarregados->setColumnWidth(0, 80);
    ui->twProdutosDescarregados->setColumnWidth(1, 200);
    ui->twProdutosDescarregados->setColumnWidth(2, 125);
    ui->twProdutosDescarregados->setColumnWidth(3, 125);
    ui->twProdutosDescarregados->setColumnWidth(4, 125);
    QStringList cabecalhosProdutosDescarregados = {"ID", "Nome", "Quantidade", "Qtd. Máxima", "Prioridade"};
    ui->twProdutosDescarregados->setHorizontalHeaderLabels(cabecalhosProdutosDescarregados);
    ui->twProdutosDescarregados->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->twProdutosDescarregados->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->twProdutosDescarregados->setStyleSheet("QTableView{selection-background-color:#FF6633}");

    // Inicializa a tabela de produtos que tem dentro do caminhão, assim como os pacotes dele
    PILHA<Produto> pilhaAux;
    pilhaAux = pilhaProdutos;
    for (int j = 0; j < pilhaProdutos.Size(); j++)
    {
        // Popula a tabela
        produto = pilhaAux.Desempilha();
        ui->twProdutosCaminhao->insertRow(j);
        ui->twProdutosCaminhao->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutosCaminhao->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutosCaminhao->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutosCaminhao->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
        ui->twProdutosCaminhao->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));

        // Popula o caminhão com os pacotes
        labelPacotes[qtdPacotes][0]->setVisible(true);
        labelPacotes[qtdPacotes][1]->setVisible(true);
        labelPacotes[qtdPacotes][1]->setText(produto.getNome());
        qtdPacotes--;
    }
    qtdPacotes = pilhaProdutos.Size() - 1; // Quantidade de pacotes a serem descarregados
}

TelaRepoeProdutos::~TelaRepoeProdutos()
{
    qtdPacotes = 0;
    delete ui;
}

// Evento de fechamento que impede que o usuário saia antes de descarregar todos os produtos
void TelaRepoeProdutos::closeEvent(QCloseEvent *event)
{
    if (qtdProdutosCaminhao != qtdDescarregados)
    {
        QMessageBox::StandardButton dialog;
        dialog = QMessageBox::warning(this, "Saída Negada",
                                      "Você só pode sair depois que descarregar o caminhão!",
                                      QMessageBox::Ok);
        if (dialog == QMessageBox::Ok)
        {
            event->ignore();
        }
        else
        {
            event->ignore();
        }
    }
}

void TelaRepoeProdutos::on_btnEnviarEstoque_clicked()
{
    // Pega a linha atual
    int linha = ui->twProdutosCaminhao->currentRow();

    // Verifica se não é a primeira linha
    if (linha != 0)
    {
        QMessageBox::warning(this, "ERRO", "Descarregue o primeiro item para descarregar os outros!");
    }
    else
    { // Se for a primeira linha
        // Descarrega o pacote do caminhão e manda ele para o estoque
        produto = pilhaProdutos.Desempilha();

        // Atualiza o estoque com o produto que foi descarregado
        QSqlQuery query;
        query.prepare("update tb_produtos set quantidade=" + QString::number(produto.getQuantidadeMax()) + ", prioridade=" + QString::number(0) + " where id=" + QString::number(produto.getId()));
        if (query.exec())
        {
            // Altera a quantidade do produto para atualizar a lddeProdutos quando voltar a tela principal
            produto.Atualiza(produto.getQuantidadeMax());       // Atualiza Quantidade
            produto.AtualizaP();                                // Atualiza Prioridade
            (*lddeProdutos).Atualiza(produto, produto.getId()); // Salva na lddeProdutos

            // Retira o pacote selecionado do caminhão
            labelPacotes[qtdPacotes][0]->setVisible(false);
            labelPacotes[qtdPacotes][1]->setVisible(false);
            qtdPacotes--;

            // Remove o produto do caminhão
            ui->twProdutosCaminhao->removeRow(0);

            // E passa ele para o estoque
            ui->twProdutosDescarregados->insertRow(qtdDescarregados);
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 1, new QTableWidgetItem(produto.getNome()));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
            qtdDescarregados++;

            QMessageBox::information(this, "OK", "Produto descarregado com sucesso!");
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "Erro ao descarregar produto " + produto.getNome());
        }
    }
    // Por padrão, seleciona a primeira linha da tabela do caminhão para o próximo descarregamento
    ui->twProdutosCaminhao->selectRow(0);
}

void TelaRepoeProdutos::on_btnConcluirDescarga_clicked()
{
    // Verifica se todos os produtos foram descarregados e volta para a tela principal se verdadeiro
    if (qtdProdutosCaminhao == qtdDescarregados)
    {
        QMessageBox::information(this, "OK", "Descarregamento concluído!");
        close();
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "O caminhão ainda não foi descarregado!");
    }
}

void TelaRepoeProdutos::on_btnEnviarTudoEstoque_clicked()
{
    // Verifica se existe produtos a serem descarregados
    int qtdLinhas = ui->twProdutosCaminhao->rowCount();
    if (qtdLinhas != 0) // Se ainda existir
    {
        // Envia todos os produtos para o estoque
        bool caminhaoDescarregado = false;
        while (pilhaProdutos.Size() != 0)
        {
            produto = pilhaProdutos.Desempilha();

            // Atualiza a tabela de produtos com os produtos descarregados
            QSqlQuery query;
            query.prepare("update tb_produtos set quantidade=" + QString::number(produto.getQuantidadeMax()) + ", prioridade=" + QString::number(0) + " where id=" + QString::number(produto.getId()));
            if (query.exec())
            {
                produto.Atualiza(produto.getQuantidadeMax());       // Atualiza Quantidade
                produto.AtualizaP();                                // Atualiza Prioridade
                (*lddeProdutos).Atualiza(produto, produto.getId()); // Salva na lddeProdutos

                // Retira o pacote do caminhão
                labelPacotes[qtdPacotes][0]->setVisible(false);
                labelPacotes[qtdPacotes][1]->setVisible(false);
                qtdPacotes--;

                // Retira o produto da tabela de produtos do caminhão
                ui->twProdutosCaminhao->removeRow(0);

                // Passa o produto para a tabela de estoque
                ui->twProdutosDescarregados->insertRow(qtdDescarregados);
                ui->twProdutosDescarregados->setItem(qtdDescarregados, 0, new QTableWidgetItem(QString::number(produto.getId())));
                ui->twProdutosDescarregados->setItem(qtdDescarregados, 1, new QTableWidgetItem(produto.getNome()));
                ui->twProdutosDescarregados->setItem(qtdDescarregados, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
                ui->twProdutosDescarregados->setItem(qtdDescarregados, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
                ui->twProdutosDescarregados->setItem(qtdDescarregados, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
                qtdDescarregados++;

                caminhaoDescarregado = true;
            }
            else
            {
                caminhaoDescarregado = false;
            }
        }
        if (caminhaoDescarregado)
            QMessageBox::information(this, "OK", "Caminhão descarregado com sucesso!");
        else
            QMessageBox::warning(this, "ERRO", "Não foi possível descarregar o caminhão");
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Não existe produtos a serem descarregados!");
    }
}
