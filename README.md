# OBS:
  É necessário importar o build no qt creator para acessar o banco de dados sqlite.
# Desenvolvedores
- Guilherme Rocha RA: 22.118.024-3
- Thomas Anderson RA: 22.118.175-3
- Victor Masumoto RA: 22.118.003-0

# Controle e Gerenciamento de Estoque
 
  Esse software foi desenvolvido com o intuito de gerenciar o estoque de produtos de uma empresa genérica, e, além disso, para simular a compra e venda de produtos foi criada uma seção para os clientes utilizarem, para que exista essa dinâmica entre a empresa e o cliente, e para que os produtos do estoque possam ser modificados em uma situação mais realista.

## Tela Inicial

  A tela inicial é onde você pode escolher entre ser um funcionário ou um cliente, na qual o funcionário será responsável pelo gerenciamento do estoque da empresa, enquanto que o cliente será capaz de realizar compras e pedidos para essa mesma empresa.
  
<p align="center">
  <img width="50%" height="50%"  src="inventory_images/tela_inicial.png">
</p>

##  Tela de Login do Funcionário
  
  Na tela de login do funcionário, ele pode escolher entre voltar para a tela inicial com o botão <b>home</b>, se cadastrar com o botão <b>cadastrar novo funcionário</b> ou caso ele já esteja cadastrado, inserir suas informações e acessar a tela de gerenciamento do estoque ao apertar o botão <b> Entrar</b>.

<p align="center">
  <img width="50%" height="50%"  src="inventory_images/login_funcionario.png">
</p>

## Tela de Cadastro de Funcionário

  Aqui é onde o funcionário realizará seu cadastro para fazer login no sistema, no entanto, é necessário que ele realize o preenchimento de cada campo de forma correta, sem deixar campos em branco, ou insuficientes, como podemos ver nas imagens a seguir:

<p  align="center">
  <img alt="imagem" width="50%" height="50%"  src="inventory_images/cadastro_funcionario_verificação1.png">
  <img alt="imagem" width="50%" height="50%"  src="inventory_images/cadastro_funcionario_verificação2.png">
</p>

  Na primeira imagem, se o funcionário pressionar o botão de cadastrar, aparecerá todos os erros relacionado aos campos que ele precisa preencher. Já na segunda imagem, após preencher os campos, existem dois casos especiais relacionados ao login e a senha, no caso do login, não pode existir mais de um login com o mesmo nome, enquanto que no caso da senha, ela precisa ter pelo menos 8 characteres e, obviamente, ambos os campos da senha e confirmar senha devem ser iguais.

### Processo de Login do Funcionário

  Quando o funcionário já está cadastro e for realizar o login no sistema, essa tela também é responsável por verificar duas variaveis, primeiro o nome de usuário, que como podemos ver na imagem abaixo, apresenta um erro caso o funcionário digite um nome de login que não foi cadastrado:

<p align="center">
  <img alt="imagem" width="50%" height="50%"  src="inventory_images/login_func_usuario.png">
</p>

  E caso o usuário exista, porém a senha está errada, ele apresenta uma mensagem de erro:

<p  align="center">
  <img alt="imagem" width="50%" height="50%"  src="inventory_images/login_func_senha.png">
</p>

## Tela de Gerenciamento de Estoque

  Como é possível ver na imagem abaixo, a tela de cadastro está dividida em 4 abas: Cadastrar Produtos, Remover Produtos, Lista de Compras e Pedidos, cada qual com sua função específica que será explicada adiante. 

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/gerenciador_estoque.png">
</p>

### Aba Cadastrar Produtos
  
  Nessa aba é realizado o cadastro dos produtos do estoque, na qual é necessário preencher os campos mostrados na imagem e, caso contrário, é mostrado uma mensagem de erro. No caso dos campos que se referem a quantidade, o software automáticamente impede que a quantidade máxima seja maior que a quantidade atual, assim como impede que a quantidade mínima seja maior que a quantidade atual.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cadastro_produto_verificação.png">
</p>

  Como é possível editar o id do produto, normalmente isso poderia erros como o que foi expressado na imagem abaixo:

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cadastro_produto_erro.png">
</p>

  No entanto, foi adicionado um botão para buscar pelo primeiro ID disponível para cadastrar um produto, assim o funcionário pode utilizar o padrão de ID que quiser, mas caso esqueça em algum momento, ele pode utilizar o botão para buscar o primeiro ID desocupado.
  
<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cadastro_produto_botao_disponivel.png">
</p>

### Aba Remover Produtos

  Nessa aba é onde pode ser realizado o processo de listagem dos produtos, assim como a exclusão dos mesmos.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/remover_produto.png">
</p>

  Para pesquisar por um produto, basta digitar seu nome no campo <b>Pesquisar Produto</b> e pressionar o botão <b>Pesquisar</b>.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/remover_produto_pesquisar.png">
</p>

  Para listar todos os produtos, basta pressionar o botão <b>Listar todos os produtos</b>.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/remover_produto_listar.png">
</p>

E para excluir um produto, é só selecionar ele clicando em cima, e então apertar o botão <b>Excluir</b>, como mostra a imagem abaixo:

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/remover_produto_excluir.png">
</p>

E assim, o produto é excluído do banco de dados e, consequentemente, da listagem.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/remover_produto_excluir2.png">
</p>

### Aba Lista de Compras

  Essa aba é responsável por mostrar a lista de produtos em ordem de prioridade de compra, logo, ele mostra quais são os itens que precisam ser repostos no estoque, fazendo uma relação entre a quantidade atual e a quantidade mínima que foi estabelecidade no seu cadastro, e que eventualmente é atualizada quando um cliente faz um pedido.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/tela_lista_prioridade.png">
</p>

  Essa lista então é enviada com os itens que precisam ser repostos ao pressionar o botão <b>Repor Estoque</b>, para que então sejá realizado o processo de reposição dos itens (que será detalhado na seção sobre o processo de compra e reposição).

### Aba Pedidos

  Aqui é realizado uma listagem em ordem de prioridade de todos pedidos feitos pelos clientes, na qual a ordem de prioridade é relacionada a ordem que os pedidos foram realizados.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/tela_pedidos.png">
</p>

## Tela de Login do Cliente

  Essa tela é utilizada para o cliente realizar seu login e acessar a interface que simula as compras de produtos da empresa, na qual existe a opção dele realizar um cadastro, caso ele não tenha, ao pressionar o texto <b>Sem cadastro? Clique Aqui!</b>, ou então acessar o sistema após preencher corretamente os campos com seus dados e pressionar o botão <b>Entra</b>.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/login_cliente.png">
</p>

## Tela de Cadastro do Cliente

  É aqui onde o cliente podera se cadastrar para poder logar no sistema. Existe algumas diferenças em relação aos dados exigidos em comparação com a tela de cadastro de funcionários, mas como o processo de verificação é o mesmo, não existe a necessidade de apresentá-lo aqui.
  
<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cadastro_cliente.png">
</p>

### Processo de Login do Cliente
  
  Como o processo de login do cliente é o mesmo que do funcionário, não existe a necessidade de mostrá-lo aqui.
  
## Tela de Gerenciamento de Compras do Cliente

  Essa tela foi criada com o intuito de simular o processo de compra de um cliente, para que então o gerenciamento de estoque possa ser realizado de uma forma mais realistíca. Essa tela foi dividida em 3 abas: Produtos, Cesta de Compras e Status dos Pedidos, cada qual com sua funcionalidade.
  
<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cliente_tela_inicial.png">
</p>

### Aba Produtos

  Assim como na aba remover produtos da tela de gerenciamento de estoque, é possível pesquisar um produto pelo nome, assim como listar todos os produtos. Além disso, é nessa aba que o cliente selecionará os itens que ele deseja adicionar a sua lista de compras, na qual ele só precisa selecionar o produto, digitar a quantidade desejada, que automaticamente limita para a quantidade atual do estoque, e assim manda-los para a sua cesta de compras ao pressionar o botão <b>Adicionar produto a cesta de compras</b>.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cliente_tela_inicial_adicionar.png">
</p>

  E dessa forma a quantidade adiciona a cesta é subtraída da lista atual:

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cliente_tela_inicial_adicionar2.png">
</p>

### Aba Cesta de Compras

  Nessa aba é mostrado todos os itens que foram escolhidos para serem comprados, e então efetuar a confirmação da compra por meio do botão <b> Confirmar Pedido de Compras</b>, mas caso o cliente se arrependa, ele pode excluir os produtos que não deseja comprar ao selecionar um produto e pressionar o botão <b>Excluir Pedido</b>, para que então sejam "repostos" na aba produtos.

<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/cliente_cesta1.png">
</p>

### Aba Status dos Pedidos

  Nessa aba é mostrado todos os pedidos realizados pelo cliente e o status de cada um deles, que somente será modificado após a confirmação do funcionário na tela de gerenciamento de estoque.
  
<p  align="center">
  <img alt="imagem" width="60%" height="60%"  src="inventory_images/tela_entrega1.png">
</p>
