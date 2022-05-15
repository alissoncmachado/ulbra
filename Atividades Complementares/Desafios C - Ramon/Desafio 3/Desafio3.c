#include <stdio.h>
#include <stdlib.h>

int main () {
int numero, result;
    do {
        printf("Descobrindo se o número é múltiplo de 5.\n");
        printf("Informe um número maior que zero: \n");
        scanf("%d", &numero);
    } while (numero <=0);

    result = numero % 5;

    if (result == 0) {
        printf("O número %d é múltiplo de 5.\n", numero);
    } else {
        printf("O número %d não é múltiplo de 5.\n", numero);        
    }

    system("pause");
    return 0;
}