#include <stdio.h>
#include <stdlib.h>

#define MAXVERTICE 10

// Função DFS usando matriz de adjacência
void dfsMatrizAdj(int adjMatrix[MAXVERTICE][MAXVERTICE], int n, int visitado[MAXVERTICE], int vertice) {
    visitado[vertice] = 1;
    printf("Visitado %d\n", vertice);

    // Visitando todos os vértices adjacentes
    for (int i = 0; i < n; i++) {
        if (adjMatrix[vertice][i] == 1 && visitado[i] == 0) {
            dfsMatrizAdj(adjMatrix, n, visitado, i);
        }
    }
}

int main() {
    int n = 4;  // Número de vértices
    int adjMatrix[MAXVERTICE][MAXVERTICE] = {0};  // Inicializa a matriz com 0
    int visitado[MAXVERTICE] = {0};  // Inicializa o vetor de visitados com 0

    // Adicionando arestas (grafo não direcionado)
    adjMatrix[0][1] = adjMatrix[1][0] = 1;
    adjMatrix[0][2] = adjMatrix[2][0] = 1;
    adjMatrix[1][2] = adjMatrix[2][1] = 1;
    adjMatrix[2][3] = adjMatrix[3][2] = 1;

    printf("DFS a partir do vertice 0:\n");
    dfsMatrizAdj(adjMatrix, n, visitado, 0);

    return 0;
}
