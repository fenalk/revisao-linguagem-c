#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10  // Número máximo de vértices no grafo

// Função para criar e inicializar a matriz de adjacência
void criarMatrizAdjacente(int grafo[MAX_VERTICES][MAX_VERTICES], int numVertices) {
    // Inicializa a matriz com 0
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            grafo[i][j] = 0;
        }
    }
}

// Função para adicionar uma aresta ao grafo (não direcionada)
void adicionarAresta(int grafo[MAX_VERTICES][MAX_VERTICES], int origem, int destino) {
    grafo[origem][destino] = 1;
    grafo[destino][origem] = 1;  // Para grafo não direcionado
}

// Função para adicionar uma aresta ponderada ao grafo
void adicionarArestaPonderada(int grafo[MAX_VERTICES][MAX_VERTICES], int origem, int destino, int peso) {
    grafo[origem][destino] = peso;
    grafo[destino][origem] = peso;  // Para grafo não direcionado
}

// Função para imprimir a matriz de adjacência
void imprimirMatrizAdjacente(int grafo[MAX_VERTICES][MAX_VERTICES], int numVertices) {
    printf("Matriz de Adjacência:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }
}

// Função principal
int main() {
    int grafo[MAX_VERTICES][MAX_VERTICES];  // Matriz de adjacência
    int numVertices = 5;  // Definindo o número de vértices do grafo

    // Criando a matriz de adjacência e inicializando com 0
    criarMatrizAdjacente(grafo, numVertices);

    // Adicionando arestas no grafo
    adicionarAresta(grafo, 0, 1);
    adicionarAresta(grafo, 0, 4);
    adicionarAresta(grafo, 1, 2);
    adicionarAresta(grafo, 1, 3);
    adicionarAresta(grafo, 1, 4);
    adicionarAresta(grafo, 2, 3);
    adicionarAresta(grafo, 3, 4);

    // Imprimindo a matriz de adjacência
    imprimirMatrizAdjacente(grafo, numVertices);

    return 0;
}
