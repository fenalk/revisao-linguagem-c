#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 3

int main(){

    int matriz[LINHAS][COLUNAS];

    printf("Digite os valores da matriz:\n");
    for (size_t i = 0; i < LINHAS; i++)
    {
        for (size_t j = 0; j < COLUNAS; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    printf("\nImprime matriz:\n");
    for (size_t i = 0; i < LINHAS; i++)
    {
        for (size_t j = 0; j < COLUNAS; j++)
        {
           printf("%d ", matriz[i][j]);
           
        }
        printf("\n");
        
    }
    
    return 0;


    
}