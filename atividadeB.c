//Construir um programa que apresente a soma dos cem primeiros números naturais (1+2+3+ ... +98+99+100).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int soma = 0;
    int i;
    
    //fazer a leitura dos valores de 1 a 100
    for (i = 1; i <= 100; i++) {
    //fazer a soma dos números    
        soma += i;
    }
    //mostrar o resultado da soma dos números
    printf("A soma dos cem primeiros números naturais é: %d\n", soma);

    return 0;
}
