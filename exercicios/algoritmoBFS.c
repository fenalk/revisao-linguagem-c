#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 40

struct fila {
  int itens[TAMANHO];
  int frente;
  int tras;
};

struct fila* criarFila();
void enfileirar(struct fila* f, int);
int desenfileirar(struct fila* f);
void exibir(struct fila* f);
int estaVazia(struct fila* f);
void imprimirFila(struct fila* f);

struct no {
  int vertice;
  struct no* proximo;
};

struct no* criarNo(int);

struct Grafo {
  int numVertices;
  struct no** listasAdjacentes;
  int* visitado;
};

// Algoritmo BFS
void bfs(struct Grafo* grafo, int verticeInicial) {
  struct fila* f = criarFila();

  grafo->visitado[verticeInicial] = 1;
  enfileirar(f, verticeInicial);

  while (!estaVazia(f)) {
    imprimirFila(f);
    int verticeAtual = desenfileirar(f);
    printf("Visitado %d\n", verticeAtual);

    struct no* temp = grafo->listasAdjacentes[verticeAtual];

    while (temp) {
      int verticeAdjacente = temp->vertice;

      if (grafo->visitado[verticeAdjacente] == 0) {
        grafo->visitado[verticeAdjacente] = 1;
        enfileirar(f, verticeAdjacente);
      }
      temp = temp->proximo;
    }
  }
}

// Criar um nó
struct no* criarNo(int v) {
  struct no* novoNo = malloc(sizeof(struct no));
  novoNo->vertice = v;
  novoNo->proximo = NULL;
  return novoNo;
}

// Criar o grafo
struct Grafo* criarGrafo(int vertices) {
  struct Grafo* grafo = malloc(sizeof(struct Grafo));
  grafo->numVertices = vertices;

  grafo->listasAdjacentes = malloc(vertices * sizeof(struct no*));
  grafo->visitado = malloc(vertices * sizeof(int));

  int i;
  for (i = 0; i < vertices; i++) {
    grafo->listasAdjacentes[i] = NULL;
    grafo->visitado[i] = 0;
  }

  return grafo;
}

// Adicionar aresta
void adicionarAresta(struct Grafo* grafo, int origem, int destino) {
  // Adicionar aresta de origem para destino
  struct no* novoNo = criarNo(destino);
  novoNo->proximo = grafo->listasAdjacentes[origem];
  grafo->listasAdjacentes[origem] = novoNo;

  // Adicionar aresta de destino para origem
  novoNo = criarNo(origem);
  novoNo->proximo = grafo->listasAdjacentes[destino];
  grafo->listasAdjacentes[destino] = novoNo;
}

// Criar uma fila
struct fila* criarFila() {
  struct fila* f = malloc(sizeof(struct fila));
  f->frente = -1;
  f->tras = -1;
  return f;
}

// Verificar se a fila está vazia
int estaVazia(struct fila* f) {
  if (f->tras == -1)
    return 1;
  else
    return 0;
}

// Adicionar elementos na fila
void enfileirar(struct fila* f, int valor) {
  if (f->tras == TAMANHO - 1)
    printf("\nFila Cheia!!");
  else {
    if (f->frente == -1)
      f->frente = 0;
    f->tras++;
    f->itens[f->tras] = valor;
  }
}

// Remover elementos da fila
int desenfileirar(struct fila* f) {
  int item;
  if (estaVazia(f)) {
    printf("Fila vazia");
    item = -1;
  } else {
    item = f->itens[f->frente];
    f->frente++;
    if (f->frente > f->tras) {
      printf("Resetando fila ");
      f->frente = f->tras = -1;
    }
  }
  return item;
}

// Imprimir a fila
void imprimirFila(struct fila* f) {
  int i = f->frente;

  if (estaVazia(f)) {
    printf("Fila vazia");
  } else {
    printf("\nFila contém \n");
    for (i = f->frente; i < f->tras + 1; i++) {
      printf("%d ", f->itens[i]);
    }
  }
}

int main() {
  struct Grafo* grafo = criarGrafo(6);
  adicionarAresta(grafo, 0, 1);
  adicionarAresta(grafo, 0, 2);
  adicionarAresta(grafo, 1, 2);
  adicionarAresta(grafo, 1, 4);
  adicionarAresta(grafo, 1, 3);
  adicionarAresta(grafo, 2, 4);
  adicionarAresta(grafo, 3, 4);

  bfs(grafo, 0);

  return 0;
}
