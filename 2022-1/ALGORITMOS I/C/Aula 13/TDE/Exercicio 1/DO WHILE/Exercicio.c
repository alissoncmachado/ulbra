/* Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo 
deve ser feito três vezes uma usando o DO WHILE */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, resultado, i;
    i = 1;
    resultado = 0;
    do {
        printf("Informe o número %d:\n", i);
        scanf("%d", &numero);
        resultado = resultado+ numero;
        i++;
    } while (i <=10);

    printf("A soma dos números informados é de %d\n", resultado);   
    system("pause");
    return 0;
}
