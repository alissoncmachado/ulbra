#include <stdio.h>
#include <stdlib.h>

int main () {

int numero, result;
    do {
        printf("Informe um número maior que zero: \n");
        scanf("%d", &numero);
    } while (numero <=0);

    result = numero % 2;

    if (result == 0) {
        printf("O número %d é: PAR\n", numero);
    } else {
        printf("O número %d é: ÍMPAR\n", numero);        
    }

    system("pause");
    return 0;
}