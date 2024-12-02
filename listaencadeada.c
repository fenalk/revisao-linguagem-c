#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
struct No {
    int dado;
    struct No* proximo;
};

// Função para adicionar um nó no início da lista
void push(struct No** cabeca_inicio, int novo_dado) {
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    novo_no->dado = novo_dado;
    novo_no->proximo = (*cabeca_inicio);
    (*cabeca_inicio) = novo_no;
}

// Função para imprimir a lista
void imprimirLista(struct No* no) {
    while (no != NULL) {
        printf("%d -> ", no->dado);
        no = no->proximo;
    }
    printf("NULL\n");
}

// Função principal
int main() {
    struct No* cabeca = NULL;  // Inicializa a cabeça da lista como NULL
    int valor = -1;  // Inicializa a variável valor com um valor diferente de 0

    // Loop para permitir que o usuário adicione múltiplos valores até digitar 0
    while (1) {
        printf("Adicione um valor à lista (digite 0 para parar): \n");
        scanf("%d", &valor);

        // Se o valor inserido for 0, o loop termina
        if (valor == 0) {
            break;
        }

        // Chama a função push para adicionar o valor à lista
        push(&cabeca, valor);
    }

    // Imprime a lista encadeada
    printf("Lista encadeada: ");
    imprimirLista(cabeca);

    return 0;
}
