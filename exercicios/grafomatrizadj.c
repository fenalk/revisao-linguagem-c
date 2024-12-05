#include <stdio.h>
#include <stdlib.h>

/*Grafo de Matriz adjacência*/

//Passo 1: define qts de vertices da matriz 4x4
#define vertices 4

//Passo 2: funcao sem retorno para inicializar a matriz adj
void inicializarMatriz(int matriz[vertices][vertices]){ // matriz[passo1][passo1]
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            matriz[i][j]= 0; //zero para locais onde não há arestas entre os vértices
        }    
    }
} 

//Passo 3: funcao para adicionar a aresta ao grafo onde o valor de ligação será 1
void adicionarAresta(int matriz[vertices][vertices], int origem, int destino){
    matriz[origem][destino] = 1;
    matriz[destino][origem] = 1;

}

//Passo 4: funcao sem retorno de imprimir a matriz adj
void imprimeMatriz(int matriz[vertices][vertices]) {
    printf("\nMatriz de Adjacencia:\n");
    for (int i = 0; i < vertices; i++) {
        printf("Vertice %d: ", i);
        for (int j = 0; j < vertices; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

//Passo 5: funcao para entrada do usuario de origem e destino
void Usuario(int matriz[vertices][vertices]){
    int origem;
    int destino;
    char resposta;

    do{
        printf("Digite o vertice de origem: ");
        scanf("%d", &origem);
        printf("Digite o vertice de destino: ");
        scanf("%d", &destino);

        adicionarAresta(matriz, origem, destino);
    
        printf("Quer adiconar outra aresta? 's' para continuar e 'n' para sair: ");
        scanf(" %c", &resposta);
    }while(resposta == 's');
}


//Passo 6: funcao principal para executar o cod
int main(){
    int matriz[vertices][vertices];
    inicializarMatriz(matriz);

    Usuario(matriz);

    imprimeMatriz(matriz);

    return 0;
}

//Passo 1: 

