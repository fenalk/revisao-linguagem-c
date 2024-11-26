#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Soma dois numeros\n");
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    printf("\n");
    printf("A soma do primeiro numero %d com o segundo numero %d eh %d", a,b, a + b);

    return 0;
}