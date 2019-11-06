#include "telarepoeprodutos.h"
#include "ui_telarepoeprodutos.h"

static PILHA<Produto> pilhaProdutos;
static LDDE<Produto>* lddeProdutos;
static Produto produto;
static QLabel* labelProduto[20][2];
static int qtdPacotes = 0;
static int qtdDescarregados = 0;
static int qtdProdutosCaminhao = 0;
TelaRepoeProdutos::TelaRepoeProdutos(QWidget *parent, PILHA<Produto>* pilhaCopia, LDDE<Produto>* lddeCopia) :
    QDialog(parent),
    ui(new Ui::TelaRepoeProdutos)
{
    ui->setupUi(this);
    lddeProdutos = lddeCopia;
    qtdProdutosCaminhao = pilhaCopia->Size();
    qtdPacotes = pilhaCopia->Size() - 1;

    int qtdAux = pilhaCopia->Size();
    PILHA<Produto> pilhaAuxiliar;
    for(int i = 0; i < qtdAux; i++){
        pilhaAuxiliar.Empilha(pilhaCopia->Desempilha());
    }

    for(int i = 0; i < qtdAux; i++){
        pilhaProdutos.Empilha(pilhaAuxiliar.Desempilha());
    }

    labelProduto[0][0] = ui->lblCaixa1;
    labelProduto[0][1] = ui->lblProduto1;
    labelProduto[1][0] = ui->lblCaixa2;
    labelProduto[1][1] = ui->lblProduto2;
    labelProduto[2][0] = ui->lblCaixa3;
    labelProduto[2][1] = ui->lblProduto3;
    labelProduto[3][0] = ui->lblCaixa4;
    labelProduto[3][1] = ui->lblProduto4;
    labelProduto[4][0] = ui->lblCaixa5;
    labelProduto[4][1] = ui->lblProduto5;
    labelProduto[5][0] = ui->lblCaixa6;
    labelProduto[5][1] = ui->lblProduto6;
    labelProduto[6][0] = ui->lblCaixa7;
    labelProduto[6][1] = ui->lblProduto7;
    labelProduto[7][0] = ui->lblCaixa8;
    labelProduto[7][1] = ui->lblProduto8;
    labelProduto[8][0] = ui->lblCaixa9;
    labelProduto[8][1] = ui->lblProduto9;
    labelProduto[9][0] = ui->lblCaixa10;
    labelProduto[9][1] = ui->lblProduto10;
    labelProduto[10][0] = ui->lblCaixa11;
    labelProduto[10][1] = ui->lblProduto11;
    labelProduto[11][0] = ui->lblCaixa12;
    labelProduto[11][1] = ui->lblProduto12;
    labelProduto[12][0] = ui->lblCaixa13;
    labelProduto[12][1] = ui->lblProduto13;
    labelProduto[13][0] = ui->lblCaixa14;
    labelProduto[13][1] = ui->lblProduto14;
    labelProduto[14][0] = ui->lblCaixa15;
    labelProduto[14][1] = ui->lblProduto15;
    labelProduto[15][0] = ui->lblCaixa16;
    labelProduto[15][1] = ui->lblProduto16;
    labelProduto[16][0] = ui->lblCaixa17;
    labelProduto[16][1] = ui->lblProduto17;
    labelProduto[17][0] = ui->lblCaixa18;
    labelProduto[17][1] = ui->lblProduto18;
    labelProduto[18][0] = ui->lblCaixa19;
    labelProduto[18][1] = ui->lblProduto19;
    labelProduto[19][0] = ui->lblCaixa20;
    labelProduto[19][1] = ui->lblProduto20;

    for(int i = 0; i < 20; i++){
        labelProduto[i][0]->setVisible(false);
        labelProduto[i][1]->setVisible(false);
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

    PILHA<Produto> pilhaAux;
    pilhaAux = pilhaProdutos;
    for(int j=0; j<pilhaProdutos.Size(); j++){
        produto = pilhaAux.Desempilha();
        ui->twProdutosCaminhao->insertRow(j);
        ui->twProdutosCaminhao->setItem(j, 0, new QTableWidgetItem(QString::number(produto.getId())));
        ui->twProdutosCaminhao->setItem(j, 1, new QTableWidgetItem(produto.getNome()));
        ui->twProdutosCaminhao->setItem(j, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
        ui->twProdutosCaminhao->setItem(j, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
        ui->twProdutosCaminhao->setItem(j, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
        labelProduto[qtdPacotes][0]->setVisible(true);
        labelProduto[qtdPacotes][1]->setVisible(true);
        labelProduto[qtdPacotes][1]->setText(produto.getNome());
        qtdPacotes--;
    }
    qtdPacotes = pilhaProdutos.Size() - 1;
}

TelaRepoeProdutos::~TelaRepoeProdutos()
{
    qtdPacotes = 0;
    delete ui;
}

void TelaRepoeProdutos::closeEvent(QCloseEvent *event){
    if(qtdProdutosCaminhao != qtdDescarregados){
        QMessageBox::StandardButton dialog;
        dialog = QMessageBox::warning(this, "Saída Negada",
                                      "Você só pode sair depois que descarregar o caminhão!",
                                      QMessageBox::Ok);
        if (dialog == QMessageBox::Ok) {
            event->ignore();
        } else {
            event->ignore();
        }
    }
}

void TelaRepoeProdutos::on_btnEnviarEstoque_clicked()
{
    int linha = ui->twProdutosCaminhao->currentRow();
    if(linha != 0)
    {
        QMessageBox::warning(this, "ERRO", "Descarregue o primeiro item para descarregar os outros!");
    }
    else{
        produto = pilhaProdutos.Desempilha();
        QSqlQuery query;
        query.prepare("update tb_produtos set quantidade=" + QString::number(produto.getQuantidadeMax()) + ", prioridade=" + QString::number(0) + " where id=" + QString::number(produto.getId()));
        if (query.exec())
        {
            produto.Atualiza(produto.getQuantidadeMax()); // Atualiza Quantidade
            produto.AtualizaP(); // Atualiza Prioridade
            (*lddeProdutos).Atualiza(produto, produto.getId()); // Salva na lddeProdutos
            labelProduto[qtdPacotes][0]->setVisible(false);
            labelProduto[qtdPacotes][1]->setVisible(false);
            qtdPacotes--;

            ui->twProdutosCaminhao->removeRow(0);

            ui->twProdutosDescarregados->insertRow(qtdDescarregados);
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 0, new QTableWidgetItem(QString::number(produto.getId())));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 1, new QTableWidgetItem(produto.getNome()));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 2, new QTableWidgetItem(QString::number(produto.getQuantidade())));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 3, new QTableWidgetItem(QString::number(produto.getQuantidadeMax())));
            ui->twProdutosDescarregados->setItem(qtdDescarregados, 4, new QTableWidgetItem(QString::number(produto.getPrioridade()) + "%"));
            qtdDescarregados++;
            if(qtdDescarregados != qtdProdutosCaminhao){
                QMessageBox::information(this,"OK","Produto descarregado com sucesso!");
            }
            else{
                QMessageBox::information(this,"OK","Caminhão descarregado com sucesso!");
            }
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "Erro ao descarregar produto " + produto.getNome());
        }
    }
    ui->twProdutosCaminhao->selectRow(0);
}

void TelaRepoeProdutos::on_btnConcluirDescarga_clicked()
{
    if(qtdProdutosCaminhao == qtdDescarregados){
        QMessageBox::information(this,"OK","Descarregamento concluído!");
        close();
    }
    else{
        QMessageBox::warning(this,"ERRO","O caminhão ainda não foi descarregado!");
    }
}

void TelaRepoeProdutos::on_btnEnviarTudoEstoque_clicked()
{
    int qtdLinhas = ui->twProdutosCaminhao->rowCount();
    if(qtdLinhas != 0)
    {
        bool caminhaoDescarregado = false;
        while(pilhaProdutos.Size() != 0)
        {
            produto = pilhaProdutos.Desempilha();
            QSqlQuery query;
            query.prepare("update tb_produtos set quantidade=" + QString::number(produto.getQuantidadeMax()) + ", prioridade=" + QString::number(0) + " where id=" + QString::number(produto.getId()));
            if (query.exec())
            {
                produto.Atualiza(produto.getQuantidadeMax()); // Atualiza Quantidade
                produto.AtualizaP(); // Atualiza Prioridade
                (*lddeProdutos).Atualiza(produto, produto.getId()); // Salva na lddeProdutos
                labelProduto[qtdPacotes][0]->setVisible(false);
                labelProduto[qtdPacotes][1]->setVisible(false);
                qtdPacotes--;

                ui->twProdutosCaminhao->removeRow(0);

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
        if(caminhaoDescarregado)
            QMessageBox::information(this,"OK","Caminhão descarregado com sucesso!");
        else
            QMessageBox::warning(this,"ERRO","Não foi possível descarregar o caminhão");
    }
    else{
        QMessageBox::warning(this, "ERRO", "Não existe produtos a serem descarregados!");
    }

}
