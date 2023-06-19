//Elaborar um programa que apresente como resultado os quadrados dos números inteiros existentes na faixa de valores de 15 a 200.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i;

    printf("Os números inteiros de 15 a 200 elevados ao quadrado:\n\n");

    //fazer a leitura dos valores de 15 a 200
    for (i = 15; i <= 200; i++) {
    //fazer a operação do quadrado dos números    
        int quadrado = i * i;
    //mostrar o resultado do quadrado dos números
        printf("%d^2 = %d\n", i, quadrado);
    }

    return 0;
}

