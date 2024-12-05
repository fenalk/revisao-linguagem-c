#include <stdio.h>
#include <stdlib.h>

/*Grafo de Lista adjacência*/

//Passo 1: primeiro a definir a estrutura do no 
struct No
{
    int vertice;
    struct No* proximo; //ponteiro para proximo no da lista adj;
};

//Passo 2: define a estrutura do grafo;
struct Grafo
{
    int numerosVertices;
    struct No** listaAdj; //cada ponteiro aponta para lista ligada de adjacencia 
    
};


//Passo 3: funcao para criar o grafo
struct Grafo* criarGrafo(int numerosVertices){
    struct Grafo* grafo = (struct Grafo*) malloc(sizeof(struct Grafo)); //aloca memoria para estrutura do grafo
    grafo->numerosVertices = numerosVertices;
    grafo->listaAdj = (struct No**) malloc(numerosVertices * sizeof(struct No*)); //aloca memoria para lista adj

    for(int i = 0; i < numerosVertices; i++){ //cada lista adj inicia como null
        grafo->listaAdj[i] = NULL;
    }
    return grafo;

}

//Passo 4: funcao sem retorno para adicionar uma aresta no grafo
//ponteiro para estrutura do grafo; origem e destino que devem ser conectados
void adicionarArestas(struct Grafo* grafo, int origem, int destino){ 
    //no de destino a origem
    struct No* novoNo = (struct No*) malloc(sizeof(struct No)); //
    novoNo->vertice = destino;
    novoNo->proximo = grafo->listaAdj[origem];
    grafo->listaAdj[origem] = novoNo;

    //no de origem a destino
    novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->vertice = origem;
    novoNo->proximo = grafo->listaAdj[destino];
    grafo->listaAdj[destino] = novoNo;

} 

//Passo 5: funcao sem retorno para imprimir o grafo
void imprimeGrafo(struct Grafo* grafo){
    for(int i = 0; i < grafo->numerosVertices; i++){
        struct No* percorrelista = grafo->listaAdj[i];
        printf("Vertice %d: ", i);
        while(percorrelista != NULL){
            printf("%d -> ", percorrelista->vertice);
            percorrelista = percorrelista->proximo;
        }
        printf("NULL\n");

    }
}

//Passo 6: funcao para perguntar ao usuario a origem e destino
void Usuario(struct Grafo* grafo){
    int origem;
    int destino;
    char resposta;

    do{
        printf("Digite o vertice de origem: ");
        scanf("%d", &origem);
        printf("Digite o vertice de destino: ");
        scanf("%d", &destino);

        adicionarArestas(grafo, origem, destino);
    
        printf("Quer adiconar outra aresta? 's' para continuar e 'n' para sair: ");
        scanf(" %c", &resposta);
    }while(resposta == 's');
}

//Passo 7: funcao principal para executar o cod
int main(){
    int numVertices;
    printf("Digite o numero de vertices: ");
    scanf("%d", &numVertices);

    //cria o numero de vertices a partir da entrada do usuario
    struct Grafo* grafo = criarGrafo(numVertices);

    Usuario(grafo);
    imprimeGrafo(grafo);

    return 0;
    
}
