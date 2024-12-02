#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó para a lista de adjacência
struct No {
    int vertice;
    struct No* proximo;
};

// Definindo a estrutura do grafo, onde cada vértice tem uma lista de adjacência
struct Grafo {
    int numVertices;
    struct No** listaAdjacente;
};

// Função para criar um grafo com um número de vértices
struct Grafo* criarGrafo(int numVertices) {
    struct Grafo* grafo = (struct Grafo*) malloc(sizeof(struct Grafo));
    grafo->numVertices = numVertices;
    grafo->listaAdjacente = (struct No**) malloc(numVertices * sizeof(struct No*));

    // Inicializando todas as listas de adjacência como NULL
    for (int i = 0; i < numVertices; i++) {
        grafo->listaAdjacente[i] = NULL;
    }
    return grafo;
}

// Função para adicionar uma aresta no grafo (não direcionada)
void adicionarAresta(struct Grafo* grafo, int origem, int destino) {
    // Adicionando o destino à lista de adjacência da origem
    struct No* novoNo = (struct No*) malloc(sizeof(struct No));
    novoNo->vertice = destino;
    novoNo->proximo = grafo->listaAdjacente[origem];
    grafo->listaAdjacente[origem] = novoNo;

    // Adicionando a origem à lista de adjacência do destino (grafo não direcionado)
    novoNo = (struct No*) malloc(sizeof(struct No));
    novoNo->vertice = origem;
    novoNo->proximo = grafo->listaAdjacente[destino];
    grafo->listaAdjacente[destino] = novoNo;
}

// Função para imprimir o grafo
void imprimirGrafo(struct Grafo* grafo) {
    for (int i = 0; i < grafo->numVertices; i++) {
        struct No* temp = grafo->listaAdjacente[i];
        printf("Vértice %d: ", i);
        while (temp != NULL) {
            printf("%d -> ", temp->vertice);
            temp = temp->proximo;
        }
        printf("NULL\n");
    }
}

// Função principal
int main() {
    struct Grafo* grafo = criarGrafo(5);  // Criando um grafo com 5 vértices

    // Adicionando arestas
    adicionarAresta(grafo, 0, 1);
    adicionarAresta(grafo, 0, 4);
    adicionarAresta(grafo, 1, 2);
    adicionarAresta(grafo, 1, 3);
    adicionarAresta(grafo, 1, 4);
    adicionarAresta(grafo, 2, 3);
    adicionarAresta(grafo, 3, 4);

    // Imprimindo o grafo
    imprimirGrafo(grafo);

    return 0;
}
