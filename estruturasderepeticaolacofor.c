#include <stdio.h>
#include <stdlib.h>

int main(){
    //Estruturas de Repetição - laço for
    
    int cont;
    char cod;
    float nota, media, total;
    total = 0;
    cod = 'c';

    while (cod != 'F'){
        for(cont = 1; cont <=4; cont ++){
            printf("digite a nota: ");
            scanf("%f", &nota);
            total += nota;
        
        }
        media = total / 4;
        printf("Nota media: %.2f\n\n", media);
        total = 0;
        nota = 0;

        printf("Deseja calcular a media de mais um aluno? Pressione qualquer tecla para prosseguir, ou a tecla 'F' para encerrar.\n");   
        cod = getche();
    
    }

    

    return 0;

}