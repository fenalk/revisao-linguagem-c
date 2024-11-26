/*Estrutura básica em C*/

#include <stdio.h>
#include <stdlib.h>

// função principal tipo função sem retorno
void main(){
    //funcao printf que recebe argumentos
    printf("Linguagem C\n");
    //declaracao de variaveis
    int num1, num2, num3, soma;
    printf("Digite o primeiro numero:\n");
    //scanf entrada do usuario
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    printf("Soma: %d\n", soma);
    printf("Fim do Programa");

}
