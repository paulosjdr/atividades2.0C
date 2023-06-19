// Elaborar um programa que apresente todos os valores numéricos inteiros ímpares 
situados na faixa de O a 20. Sugestão: para verificar se o valor numérico é ímpar,
dentro do laço de repetição, fazer a verificação lógica dessa condição com a instrução if
dentro do próprio laço, perguntando se o valor numérico do contador é ímpar (se o resto
do número dividido por 2 é diferente de zero); sendo, mostre-o; não sendo, passe para
o próximo valor numérico.
  
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i;

    printf("Valores ímpares de 0 a 20:\n\n");
    
    //fazer a leitura dos valores de 1 a 20
    for (i = 0; i <= 20; i++) {
    //fazer a leitura dos valores ímpares    
        if (i % 2 != 0) {
    //mostrar os números ímpares
            printf("%d\n", i);
        }
    }

    return 0;
}
