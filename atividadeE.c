//Construir um programa que apresente todos os valores numéricos divisíveis por 4 e menores que 200.
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i;

    printf("Valores divisíveis por 4 e menores que 200:\n");

    //fazer a leitura dos valores de 0 a 200
    for (i = 0; i < 200; i++) {
    //fazer a leitura dos valores divisíveis por 4
        if (i % 4 == 0) {
    //mostrar o resultado da divisão dos números
            printf("%d\n", i);
        }
    }

    return 0;
}
 
