/* Escrever um programa que gera os números de 1000 a 1999 e escreve aqueles que divididos por 11 dão um 
resto igual a 5. */

#include <stdio.h>
#include <stdlib.h>

int main () {
int i=1500;
int resultado;
    printf("Abaixo números entre 1500 a 1999 que divididos por 11, tem o mod igual a 5:\n");
    while (i <=1999) {
    resultado = i%11;
    if (resultado ==5) {
        printf("%d\n", i);
    }
    i++;

    }

    system("pause");
    return 0;
}