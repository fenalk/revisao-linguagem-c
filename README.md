# revisao-linguagem-c
 Repositório criado para revisão da linguagem C para aplicação na disciplina de Estruturas de Dados II. Na aula inicial, foi estabelecido a importancia do domínio de ponteiros em C.

# introdução
Reconhecer a estrutura básica da linguagem C.
1. Diretivas include pré-processador em C que incluem bibliotecas padrão 
2. Função principal
3. Variáveis

# Tipos de Dados em C
Os dados são as informações a serem processadas por um computador. Podem ser classificados em várias categorias, dependendo de suas características.
1. Tipos Básicos
    - Consistem em tipos aritméticos inteiros e de ponto-flutuante.

    - Podemos usar o operador sizeof para descobrir o tamanho de um tipo ou variável.

    - Ponto-flutuante: float (4bytes, 6 casas decimais), double(8bytes, 15 casas decimais), long double(12bytes, 19 casas decimais).

    - Não há um tipo lógico definido na linguagem c original, porém a partir do padrão ISO C99, é possível usar o tipo (mais precisamente, macro) bool. No geral, em C, o valor inteiro 1 pode ser considerado como valor lógico true(verdadeiro) e o inteiro 0 como valor lógico false (falso). Na verdade, qualquer valor diferente de zero será tratado como verdadeiro. Para usarmos o tipo lógico bool precisamos incluir a biblioteda stdbool.h no código do programa.
    Caso usemos uma versão mais antiga do C, podemos "criar" um tipo lógico com o seguinte código:
        - typedef enum {false=0, true=1} logico;

    - Tipo caractere (char): já os tipos literais são tratados em C como valores numericos, e não como literais. Cada caractere possui um correspondente numérico, obedecendo geralmente à tabela ACSII de caracteres. Em C temos o tipo char para representar um caractere literal. Seu tamanho é de 1 byte(8bits), possuindo então valores entre 0 e 255. Caso precisemos armazenar uma cadeia de caracteres (string), usamos arrays do tipo char. Um caractere nulo, representado por \0, sempre indicará o final da cadeia - e ele conta no tamanho total da cadeia.

    - Declaração e Atribuição de Variáveis: uma variável é uma localização na memória RAm do computador que é utilizada para armazenar temporariamente os dados que são utilizados pelo programa. As variáveis possuem algumas características, como: 
        - Identificação("nome"), endereço (na memoria), tipo (de dados), tamanho, valor ("conteúdo").

        - tipos-dados nomes-variáveis, as variáveis devem ser declaradas no início do programa (mas em alguns casos podem ser declaradas em outras partes do programa).

        - Em C é possível realizar atribuição múltipla, na qual um valor é atribuído a uma variável e esta variável é atribuida a outra, em uma única linha de comando. y = x = 10;

    - função printf(string_controle_formatacao, argumentos): 
    ![Especificadores de Conversão](./img/image_01.png)

        - O tamanho exato de um campo no qual os dados são mostrados é especificado por um tamanho de campo. Para representar o tamanho do campo desejado devemos inserir um inteiro entre o símbolo % e o especificador de conversão. Caso o campo seja mais largo do que os dados a serem mostrados, os dados serão alinhados à direita no campo.

        - Precisão: A precisão com a qual os dados serão exibidos possui significado diferente para cada tipo. Quando usada com especificadores de conversão de inteiros, a precisão indica o número mínimo de dígitos a serem impressos. Caso o valor a ser mostrado tenha menos dígitos que a precisão especificada, serão prefixados zeros até totalizar o número de dígitos equivalentes. Quando usada com especificadores de conversão de ponto-flutuante e, E ou f, a precisão é o número de dígitos que aparecerão após o ponto decimal. Ao ser usada com especificadores de conversão de string(s), a precisão é o número máximo de caracteres que serão mostrados da cadeia. Para usarmos a precisão, devemos inserir um ponto(.) seguido de um número inteiro que representa a precisão desejada entre o sinal % e o especificador de conversão.

        - Sequência de Escape: A maioria dos caracteres pode ser mostrada diretamente pela função printf. Porém, há alguns caracteres que precisam de formatação especial para serem exibidos, como as aspas duplas (") que delimitam a string de controle em si. Alguns outros caracteres de controle como tabulação e o símbolo de porcentagem devem ser representado por sequência de escapa. Uma sequência de escape é representada por uma barra invertida (\) seguida por um caractere de escape. 
        ![Sequencia de Escape](./img/image_02.png)

        - Entrada de Dados - Função scanf: Lê os valores digitados no teclado, formata-os e os armazena em variáveis na memória.
        - Sintaxe: scanf (string_controle_formatação, argumentos);
        - A string_controle_formatação descreve os formatos das entradas, e os outros argumentos são ponteiros para variáveis nas quais as entradas serão armazenadas. Ao usarmos o scanf indicamos o endereço da variável de armazenamento do dado lido prefixando-a com o caractere **&**.

        - Operadores Aritmético: 
        ![Operadores aritméticos](./img/image_03.png)
        Para a operação de exponenciação, é necessário declarar a biblioteca **#include <math.h>**.



2. Tipos de Enumeração
    
3. Tipo void
4. Tipos Derivados (structs, arrays, ponteiros, unions, etc.)

# Estrutura de Controle de Decisão
São comandos para controlar o fluxos do programa que serão executados na sequência.

### 1. Desvio Condicional Simples:
Essas instrução tem por finalidade tomar uma decisão de acordo com o resultado de uma condição (teste lógico). Se o teste retornar verdadeiro, as instruções contidas entre as chaves serão executados; caso contrário, nada ocorre.
```C
if(condição){
    instrução caso condição retorne verdadeiro
}
instruções para condição falsa ou após executar as instruções de condições verdadeiro.
```
### 2. Desvio Condicional Composto:
Essa instrução tem por finalidade tomar uma decisão de acordo com o resultado de uma condição (teste lógico).
Se o teste retorna verdadeiro, as instruções codificadas entre as chaves do if serão executados. Se o teste retorna falso, as instruções contidas entre as chaves do else serão executadas.

```C
if(condição){
    instrução caso condição retorne verdadeiro
}else{
    instrução caso a condição retorne falso
}
instruções após executar as instruções de condições verdadeiro ou falso.
```

### 3. Desvio Condicional Aninhado ou Desvio Condicional Encadeado:
Usado quando é necessário verificar condições sucessivas onde uma ação será executada se um conjunto anterior de ações for satisfeito.

```C
if(condição 1){
    instrução caso condição 1 retorne verdadeiro
}else{
    if(condição 2){
        instrução caso condição 2 retorne verdadeiro
    }else{
        instrução caso a condição 2 retorne falso
    }
}

```
```C
if(condição 1){
    instrução caso condição 1 retorne verdadeiro
}else if(condição 2){
    instrução caso condição 2 retorne verdadeiro
}else if(condição 3){
    instrução caso condição 3 retorne verdadeiro
}else{
    instrução caso todas as condições anteriores sejam falso
}

```
Essa segunda sintaxe elimina o excesso de indentação;

# Estruturas de Controle de Repetição
Em muitos casos é necessário repetir um trecho de um programa diversas vezes. Nesse caso podemos usar um loop que efetue essa repetição de código quantas vezes forem necessários.
Os loops são chamados também de laços de repetição.
Essa estrutura realiza um teste lógico no início do loop, e cada vez que o teste retorna o valor verdadeiro, os comandos associados ao laço são executados.
Quando o teste retorna falso, o laço é encerrado e o processamento volta para o fluxo principal do programa.

```C
while(condição){
    instrução caso condição retorne verdadeiro, várias vezes de acordo com a condição
}
```
### Repetição controleda com while
Imagine que precisamos escrever um algoritmo que processe um conjunto de dados repetidas vezes, mas não sabemos de antemão quantas vezes o loop deve ser executado.
Nesse caso, precisamos usar uma técnica para controlar o número de repetições realizadas.
Para isso usaremos uma **flag**, que é uma variável utilizada como **"sentinela"** a qual determinará quando o laço while deve ser encerrado.

# Estruturas de Controle de Repetição - Laço For

Permite construir estruturas de loop para casos onde se conhece de antemão o número de repetições que devem ser realizadas (numero finito de laços).

Por exemplo, se soubermos de antemão que o laço deve se repetir 10 vezes, podemos usar a estrutura for.

```C
for(variávei = inicio; fim; incremento){
    instruções
}
```

# Função
Trecho de código que executa uma tarefa específica e que é permitido reutilizar esse código.

## Função void

#  Variáveis Locais
O escopo de uma variável determina como e onde uma variável poderá ser utilizada dentro de um programa.

Existem três escopos de um programa:
- Local:
 - As variáveis locais são declaradas dentro de uma função. Elas não podem ser acessadas d fora da função, nem serem utilizadas diretamente por outras funções. Quando a função onde a variável local foi declarada termina sua execução (quando retorna), a variável é destruída (memória desalocada).

- Parâmetro de Função:
    - Os parâmetros declarados de uma função são variáveis locais à função. Portanto, só podem ser acessados diretamente a partir da função, e sua existência cessa quando a função termina sua execução.

- Global:
    - As variáveis globais são declaradas fora das funções, incluindo a função main(). Assim, se torna acessíveis a partir de qualquer parte do programa, incluindo dentro de qualquer função presente. Elas permanecem disponíveis durante toda a execução do programa. 
    - OBS: Podemos ter duas variáveis com o mesmo nome em um programa, se uma delas for local e a outra for global. caso hajam duas variáveis com o mesmo nome, a variável local prevalece em seu escopo.

# Array unidimensionais
Um array é uma estrutura homogênea que mantém uma série de elementos de dados de mesmo tipo. 

Podemos acessar os elementos individuais por meio de uma posição de índice, geralmente numérica.

Possuem tamanho fixo.

Um array de uma dimensão pode ser chamado de "Vetor".

Um array bidimensional é conhecido como "Matriz".


# Ponteiros

Ponteiro é uma variável, mas especial que armazena endereços de posição de memória. 
