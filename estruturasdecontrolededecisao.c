#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("---Desvio condicional Simples---"); 
    float n1,n2;
    float media;

    printf("\nPrimeira Nota: ");
    scanf("%f", &n1);
    printf("Segunda Nota: ");
    scanf("%f", &n2);

    media = (n1 + n2)/2.0;

    if(media >= 7.0){
        printf("Media da Nota: %.2f\nAprovada!", media);

    }
    printf("\nFim da execucao\n\n.");

    printf("---Desvio condicional Composto---");

    float nota1,nota2;
    float media_aritmetica;

    printf("\nPrimeira Nota: ");
    scanf("%f", &nota1);
    printf("Segunda Nota: ");
    scanf("%f", &nota2);

    media_aritmetica = (nota1 + nota2)/2.0;

    if(media_aritmetica >= 7.0){
        printf("Media da Nota: %.2f\nAprovada!\n\n", media_aritmetica);
    }else{
        printf("Media da Nota: %.2f\nReprovada!", media_aritmetica);
    }
    printf("\nFim da execucao.\n\n");


    printf("--- Desvio Condicional Aninhado ou Desvio Condicional Encadeado---");
    float av1,av2;
    float media_av;

    printf("\nPrimeira Nota: ");
    scanf("%f", &av1);
    printf("Segunda Nota: ");
    scanf("%f", &av2);

    media_av = (av1 + av2)/2.0;

    if(media_av >= 7.0){
        printf("Media da Nota: %.2f\nAprovada!\n\n", media_av);
    }else{
        if(media_av >= 5.0){
            printf("Media da Nota: %.2f\nEsta em Recuperacao", media_av);
        }else{
            printf("Media da Nota: %.2f\nReprovada!", media_av);   
        }
        
    }
    printf("\nFim da execucao.\n\n");

    printf("Outra sintaxe: Desvio Condicional Aninhado");
    float ava1,ava2;
    float media_ava;

    printf("\nPrimeira Nota: ");
    scanf("%f", &ava1);
    printf("Segunda Nota: ");
    scanf("%f", &ava2);

    media_ava = (ava1 + ava2)/2.0;

    if(media_ava >= 7.0){
        printf("Media da Nota: %.2f\nAprovada!\n\n", media_ava);
    }else if (media_av >= 5.0){
        printf("Media da Nota: %.2f\nEsta em Recuperacao", media_ava);
    }else{
        printf("Media da Nota: %.2f\nReprovada!", media_ava);   
    }
        
    
    printf("\nFim da execucao.\n\n");

    return 0;
}