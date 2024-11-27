#include <stdio.h>
#include <stdlib.h>

int main(){
    //
    /*printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
    printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short));
    printf("Tamanho de armazenamento para o tipo long: %d \n", sizeof(long));

    printf("Tamanho de armazenamento para o tipo float: %d \n", sizeof(float));
    printf("Tamanho de armazenamento para o tipo double: %d \n", sizeof(double));
    printf("Tamanho de armazenamento para o tipo long double: %d \n", sizeof(long double));*/


    //declaração de variável
    /*int a,b,c;
    char letra;
    float valor, aumento;
    double patrimonio;
    int x = 0;
    float salario, juros = 0.08; */

    //exemplo 1
    int idade;
    float salario, valor;
    idade = 25;

    valor = 4500.50;
    salario = valor;
    printf("Idade: %d\n", idade);
    printf("E o salario: %f\n", salario);

    int a,b;
    a = 12;
    b = 30;
    printf("O valor de a eh %d e o valor de b eh: %d", a, b);


    return 0;

}