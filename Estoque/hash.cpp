#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class IHash{
public:
    virtual bool Insere(string) = 0;
    virtual bool Busca(string) = 0;
    virtual bool Remove(string) = 0;
    virtual void Imprime() = 0;
    virtual ~IHash(){
    };
};

class Hash;

class Colisao{
private:
    int colisao = 0; // 0 = livre, 1 = ocupado sem colisao, 2 = ocupado com colisao, 3 = livre com colisao
    int end=0;
    string valor;

    friend class Hash;
};

class Hash : public IHash{
private:
    Colisao *v; // Vetor de colisoes
    int n, nC; // n e tamanho atual do vetor e nC e tamanho atual de colisoes
    int max, maxC; // max e tamanho maximo da Hash e maxC e tamanho maximo de colisoes

    int funcHash(string x){
        int somaPalavras = 0;
        for(int i = 0; i<x.size(); i++){
            somaPalavras += int(x[i]);
        }
        return calculaDobra(somaPalavras);
    }
    int calculaDobra(int x){
        int tamanhoHash = max;
        int numeroDeCasas = (to_string(x)).size();
        int vetorDobra[numeroDeCasas];

        for(int i = 0; i < numeroDeCasas; i++){
            vetorDobra[i] = x%10;
            x = x/10;
        }

        int tamanhoVetorDobra = (numeroDeCasas%2 == 0 ? numeroDeCasas/2 : numeroDeCasas/2 + 1);
        int iteracoes = 0;
        string guardaSomaDasCasas;
        int valorDaDobra = tamanhoHash + 1;
        numeroDeCasas--;

        while( valorDaDobra > tamanhoHash && iteracoes < 20)
        {
            for(int i = 0, j = numeroDeCasas; i < tamanhoVetorDobra; i++, j--){
                vetorDobra[i] = (vetorDobra[i] + vetorDobra[j])%10;
                guardaSomaDasCasas += to_string(vetorDobra[i]);
            }

            stringstream converte(guardaSomaDasCasas);
            converte >> valorDaDobra;

            iteracoes++;
            guardaSomaDasCasas = "";
            if(tamanhoVetorDobra%2 == 0)
            {
                tamanhoVetorDobra = tamanhoVetorDobra/2;
                if(tamanhoVetorDobra == 1)
                {
                    numeroDeCasas = tamanhoVetorDobra;
                }
                else
                {
                    numeroDeCasas = tamanhoVetorDobra + 1;
                }
            }
            else
            {
                tamanhoVetorDobra = tamanhoVetorDobra/2 + 1;
                numeroDeCasas = tamanhoVetorDobra;
            }
        }

        if(iteracoes >= 20){
            valorDaDobra = valorDaDobra % tamanhoHash;
        }

        return valorDaDobra;
    }
    void colidiu(string x){ // Funsao para caso colidir
        int idx = max; // idx = tamanho maximo da Hash + quantidade de colisoes atual
        if(v[idx].colisao == 0){
            v[idx].end = max+1; // Salva o numero da colisao
            v[idx].colisao = 1;
            nC++; // aumenta em 1 o valor de colisoes acontecidas
        }
        else if(v[idx].colisao == 1){
            v[idx].colisao = 2;
            idx++;
            v[idx].colisao = 1;
            v[idx].end = idx+1;
            nC++;
        }
        else if(v[idx].colisao == 2){
            while(v[idx].colisao != 3 && v[idx].colisao != 1)
                idx++;

            if(v[idx].colisao == 0)
                v[idx].colisao = 1;
            else if(v[idx].colisao == 3)
                v[idx].colisao = 2;

            idx++;
            v[idx].end = idx;
            v[idx].colisao = 1;
            nC++;
        }
        else{
            v[idx].colisao = 2;
        }

        v[idx].valor = x; // String salva na parte de colisoes
    }
    void dobrarV(){ // Funsao de dobrar o vetor Hash
        string *aux = new string[max+maxC+1]; // Vetor temporario para segurar as senhas
        int j = 0;
        for(int i=0; i<max+maxC; i++){ // For para preencher o vetor temporario
            if(!v[i].valor.empty()){
                aux[j] = v[i].valor;
                j++;
            }
        }
        delete[] v; // Deleta v

        max = max*2; // Dobra max
        maxC = max*0.5; // maxC tem metade do max
        v = new Colisao[max+maxC]; // Cria novo vetor Hash
        zeraTudo(); // Zera o vetor Hash inteiro
        n = 0, nC = 0; // Zera todas variaveis
        for(int i=0; i<j; i++) // For para reconstruir Hash
            Insere(aux[i]); // Inseri todas variaveis de volta
    }
    void zeraTudo(){ // Funcao para zerar tudo do vetor Hash (So para garantia)
        for (int i = 0; i < max + maxC; ++i)
            v[i].valor = "";
        for (int i = 0; i < max; ++i)
            v[i].end = max;
    }
public:
    Hash(int tam){
        max = tam; // max tem tamanho desejado
        maxC = tam*0.5; // maxC tem metade do tamanho original
        n = 0;
        nC = 0;
        v = new Colisao[max+maxC]; // vetor Hash vai ter tamanho max + maxC
        zeraTudo(); // Zera o vetor inteiro, para garantia
    }
    bool Insere(string x){
        if(x.empty())
            return false;
        if(n >= (max*0.8) || nC >= (maxC*0.8)) // Quando n chegar a 80% do max de espaços livres. Dobra os espaços
            dobrarV();

        if(v[funcHash(x)].colisao == 0){ // Se colisao for 0 apenas insere
            v[funcHash(x)].valor = x;
            v[funcHash(x)].colisao = 1; // Colisao vira 1
        }
        else if(v[funcHash(x)].colisao == 1 || v[funcHash(x)].colisao == 2){ // Se colisao for 1 ou 2
            v[funcHash(x)].colisao = 2; // Colisao vira 2 ou continua 2
            colidiu(x); // Chama funsao colidiu
        }
        else{ // Se colisao for 3
            v[funcHash(x)].valor = x; // Insere valor
            v[funcHash(x)].colisao = 2; // Colisao vira 2
        }
        n++;

        return true;
    }
    bool Busca(string x){
        if(v[funcHash(x)].colisao == 2 || v[funcHash(x)].colisao == 3){ // Se colisao for 2 ou 3
            if(v[funcHash(x)].valor == x) // Compara com seus valores do Hash principal
                return true;

            int aux = max;
            while(!v[aux].valor.empty()){ // Enquanto valor existir
                if(v[aux].valor == x) // Se valor é oque eu quero
                    return true;
                if(v[aux].colisao == 2 || v[aux].colisao == 3) // Se nao, mas tiver colisoes ainda
                    aux = v[aux].end; // aux tem valor da prox colisao
                else // Se valor for 1 ou 0, significa que nao existe
                    return false;
            }

            return false; // se nenhuma das colosoes for igual, valor nao existe
        }
        else if(v[funcHash(x)].colisao == 0)
            return false; // Se colisao for 0 valor nao existe
        else{ // Se Colisao for 1, nao tem colisao
            if(v[funcHash(x)].valor != x) // E se n for o valor
                return false;
        }

        return true; // Se chegar aqui, valor existe
    }
    bool Remove(string x){ // Remover valor x da Hash
        if(v[funcHash(x)].colisao == 1){
            v[funcHash(x)].colisao = 0; // Se existe sem colisao, colisao vai para 0
        }
        else if(v[funcHash(x)].colisao == 2) {
            if(v[funcHash(x)].valor != x){ // Se valor for diferente, vai conferir as colisoes
                int aux = max; // aux tem valor da colisao
                while(!v[aux].valor.empty()){
                    if(v[aux].colisao == 0) // Se colisao for , nao existe nada (Apenas Precausao_
                        return false;
                    else if(v[aux].colisao == 1){ // Se colisao for 1
                        if (v[aux].valor == x){ // Se for o valor desejado
                            v[aux].valor = "";
                            v[aux].colisao = 0;
                            if(aux-1 >= max)
                                v[aux-1].colisao = 1;
                            n--;
                            nC--;
                            return true;
                        }
                        else // Se nao retorna false
                            return false;
                    }
                    else{ // Se colisao for 2 ou 3
                        if(v[aux].valor == x) { // Confere valor
                            v[aux].valor = "";
                            v[aux].colisao = 3;
                            n--;
                            return true;
                        }
                        else // Se nao for o desejado, aux tera valor da proxima colisao
                        {
                            aux = v[aux].end;
                        }
                    }
                }

                return false; // Se nenhuma das colisoes for a desejada, valor nao existe
            }

            v[funcHash(x)].colisao = 3; // Se existe com colisao, colisao vai para 3
        }
        else if(v[funcHash(x)].colisao == 3){ // Nao existe valor, mas existe colisao
            int aux = max; // aux tem valor da colisao
            while(!v[aux].valor.empty()){
                if(v[aux].colisao == 0) // Se colisao for , nao existe nada (Apenas Precausao_
                    return false;
                else if(v[aux].colisao == 1){ // Se colisao for 1
                    if (v[aux].valor == x){ // Se for o valor desejado
                        v[aux].valor = "";
                        v[aux].colisao = 0;
                        if(aux-1 >= max)
                            v[aux-1].colisao = 1;
                        n--;
                        nC--;
                        return true;
                    }
                    else // Se nao retorna false
                        return false;
                }
                else{ // Se colisao for 2 ou 3
                    if(v[aux].valor == x) { // Confere valor
                        v[aux].valor = "";
                        v[aux].colisao = 3;
                        n--;
                        return true;
                    }
                    else // Se nao for o desejado, aux tera valor da proxima colisao
                    {
                        aux = v[aux].end;
                    }
                }
            }

            return false; // Se nenhuma das colisoes for a desejada, valor nao existe
        }
        else{ // Se for 0, nao remove nada
            return false;
        }

        v[funcHash(x)].valor = ""; // Remove valor
        n--;
        //OBS: Se colisao for 0 então nao muda nada, pois nao existe valor, nem colisoes
        return true;
    }
    void Imprime(){ // Apenas para conferir. Imprime toda a Hash
        for(int i=0; i<max+maxC; i++){
            if(!v[i].valor.empty()) {
                cout << "Idx " << i << ": " << v[i].valor;
                /*if (v[i].colisao == 2) {
                    cout << " /Col: " << v[v[i].end + max].valor << " / End: " << max+v[i].end << " / Coli: " << v[v[i].end + max].colisao;
                }*/
                cout << endl;
            }
        }
        cout << endl;
    }
    ~Hash(){
    };
};

/*int main() {
    Hash h(10);
    h.Insere("Thomas");
    h.Insere("Guih");
    h.Insere("Anderson");
    h.Insere("Rocha");
    h.Imprime();
    h.Remove("Rocha");
    h.Imprime();

    h.Insere("Gilberto");
    h.Insere("Breno");
    h.Insere("Adriano");
    h.Insere("Gustavo");
    h.Insere("Caio");
    h.Insere("Joao");
    h.Insere("Kaike");
    h.Insere("Jose");
    h.Imprime();
    h.Remove("Thomas");
    h.Remove("Gustavo");
    h.Imprime();
    h.Insere("Gustavo");
    cout << h.Busca("Gustavo") << endl;
    h.Imprime();
    h.Insere("Thomas");
    h.Imprime();
    h.Remove("Jose");
    h.Remove("Gustavo");
    h.Imprime();
    h.Insere("Thomas");
    h.Imprime();
    h.Insere("Gustavo");
    h.Imprime();


    return 0;
}*/