#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    printf("\n\n");

    printf("funcaoo printf(string_controle_formatacao, argumentos)\n");
    int a,b;
    a = 12;
    b = 30;
    printf("O valor de a eh %d e o valor de b eh: %d", a, b);
    printf("\n\n");

    printf("%5d\n", 6);
    printf("%10d\n", 6);
    printf("%10d\n", 700);
    printf("%c\n", 'T');
    printf("%1c\n", 'A');
    printf("%2c\n", 'B');
    printf("%3c\n", 'C');
    printf("%4c\n", 'D');
    printf("%10f\n", 23.8);
    printf("%-10d\n", 700);

    printf("\n\nFuncao printf - Precisao\n");
    int x = 450;
    float f = 250.12345;
    char s[] = "Fernanda Borges";
    printf("Precisao de Inteiros:\n");
    printf("%d\n", x);
    printf("%.5d\n", x);
    printf("%.18d\n", x);
    printf("%10.5d\n", x);
    printf("%10.12d\n", x);

    printf("\n\nPrecisao de ponto-flutuante:\n");
    printf("%f\n", f);
    printf("%.2f\n", f);
    printf("%.1f\n", f);
    printf("%8.2f\n", f);

    printf("\n\nPrecisao em literais:\n");
    printf("%s\n", s);
    printf("%.5s\n", s);
    printf("%.18s\n", s);
    printf("%10.5s\n", s);

    printf("\n\nSequencia de Escape\n");
    printf("Aspas simples: \' \n");
    printf("Aspas duplas: \" \n");
    printf("Interrogacao: \? \n");
    printf("Barra invertida: \\ \n");
    printf("Mudar de Linha: \n \n");
    printf("Tab: \t Tabulado \n");
    printf("Cursor no inicio da linha: \r \n");
    printf("Sinal sonoro: \a");

    /*printf("\n\nEntrada de dadaos Scanf\n");
    int inteiro1;
    float f1, f2;
    char letra;
    char frase[15];

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite um numero ponto-flutuante: ");
    scanf("%f %f", &f1, &f2);
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    printf("Digite uma frase: ");
    scanf("%s", &frase);

    printf("\nNumero inteiro: %d\n", inteiro1);
    printf("Ponto flutuante: %.2f e %.2f\n", f1, f2);
    printf("Caractere: %c\n", letra);
    printf("Frase: %s\n\n", frase);*/

    printf("\n\nEntrada de dadaos Scanf\n");
    int dia, mes, ano;
    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("\nDia: %d\n", dia);
    printf("\nMes: %d\n", mes);
    printf("\nAno: %d\n", ano);

    printf("\n\nOperadores Aritmeticos\n");
    int e,y,z,w;
    printf("Digite um numero: ");
    scanf("%d", &e);
    printf("Digite o valor a somar: ");
    scanf("%d", &y);

    z = e + y;
    w = pow(e, 3); //x elevado ao cubo

    printf("\nA soma de %d com %d equivale a %d\n", e, y, z);
    printf("\n%d elevado ao cubo: %d\n", e, w);




    return 0;

}