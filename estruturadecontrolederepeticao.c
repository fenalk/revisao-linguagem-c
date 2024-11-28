#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("---Contador---"); 
    int contador = 1;
    while(contador <=10){
        printf("%d\n", contador);
        contador++;
    }

    printf("\n\nMedia Calculada\n");
    int contadorr;
    float nota, mediaa,total;
    total = 0;
    contadorr = 1;

    while(contadorr <= 4){
        printf("Digite nota: ");
        scanf("%f", &nota);
        total += nota;
        contadorr++;

    }

    mediaa = total / 4;
    printf("Nota media: %.2f\n", mediaa);    

    printf("\n\nRepeticaoo controlada\n");
    
    int contadoor = 0;
    float valor, meedia, tootal;
    printf("Digite um valor (-1 para encerrar): ");
    scanf("%f", &valor);

    while(valor != -1){
        tootal += valor;
        contadoor++;
        printf("Digite um valor (-1 para encerrar): ");
        scanf("%f", &valor);

    }

    meedia = tootal / contadoor;
    printf("O valor medio: %.2f\n", meedia);


    return 0;


}