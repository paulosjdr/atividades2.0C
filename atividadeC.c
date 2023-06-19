//Elaborar um programa que apresente o somatório dos valores pares existentes na faixa de 1 até 500.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");

    int soma = 0;
    int i;

    //fazer a leitura dos valores de 1 a 500 
    for (i = 1; i <= 500; i++) {
    //fazer a leitura dos valores pares
        if (i % 2 == 0) {
    //fazer a soma dos valores
            soma += i;
        }
    }
    //mostrar o resultado da soma dos números pares
    printf("O somatório dos valores pares de 1 a 500 é: %d\n", soma);

    return 0;
}
