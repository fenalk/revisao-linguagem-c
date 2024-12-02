#include <stdio.h>
#include <stdlib.h>

//variavel global
int numero = 15;

void escrevaNome();
void escrevaValor();

int main(){
    escrevaNome();
    printf("o numero eh %d\n", numero);
    escrevaValor();
   

    return 0;
}

void escrevaNome(){
    printf("Meu nome eh Fernanda\n");

    return 0;
}

void escrevaValor(){
    //dobro - variavel local

    int dobro = numero * 2;
    printf("E o dobro eh %d\n", dobro);
}