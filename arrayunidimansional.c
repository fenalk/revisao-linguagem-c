#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    float notas[4] = {7.5, 8.0, 6.5, 3.5};
   //float avaliacoes[] = {7.5, 8.0, 6.5, 3.5};
    int i;

    /*
    for(i = 0; i <4 ; i++){
        printf("Nota %d = %4.2f\n", i+1, notas[i]);
    }
    */

   for(i=0; i<4; i++){
    printf("Entre com a %d nota do aluno: \n", i+1),
    scanf("%f", &notas[i]);
   }

   for(i = 0; i < 4; i++){
    printf("Nota %d = %4.2f\n", i+1, notas[i]);
   }


    //Algoritmo de ordenação Bubblesort
    int numeros[TAM];
    int aux, contador;
    
    printf("Entre com dez numeros para preencher o array, e pressione enter apos digitar cada um:\n");
    for(i = 0; i < TAM; i++){
        scanf("%d", &numeros[i]);

    }

    printf("Ordem atual dos itens no array:\n");
    //printa os numeros um ao lado do outro
    for(i = 0; i < TAM; i++){
        printf("%d ", numeros[i]);
    }


    //Ordenação bubblesort
    for(contador = 1; contador < TAM; contador++){
        for(i = 0; i < TAM - 1; i++){ //i < TAM - 1 não vai comparar com a ultima posicao
            if(numeros[i] > numeros[i+1]){
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
            }
        }
    }

    printf("\nElemetnos do array em ordem crescente:\n");

    for (i = 0; i < TAM; i ++){
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}