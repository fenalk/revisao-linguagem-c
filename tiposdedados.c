#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
    printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short));
    printf("Tamanho de armazenamento para o tipo long: %d \n", sizeof(long));

    printf("Tamanho de armazenamento para o tipo float: %d \n", sizeof(float));
    printf("Tamanho de armazenamento para o tipo double: %d \n", sizeof(double));
    printf("Tamanho de armazenamento para o tipo long double: %d \n", sizeof(long double));

    return 0;

}