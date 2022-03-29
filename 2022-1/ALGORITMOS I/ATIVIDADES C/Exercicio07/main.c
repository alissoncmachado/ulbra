#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, imposto, grat, liquido;

    printf("Digite seu salario: \n");
    scanf("%f", &sal);

    imposto = sal *10/100;
    liquido = sal +50 - imposto;

    printf("Seu salario sera de: %.2f", liquido);

    return 0;
}
