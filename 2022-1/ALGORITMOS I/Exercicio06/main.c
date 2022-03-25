#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, liquido,grat, imposto;

    printf("Digite seu salario: \n");
    scanf("%f", &sal);

    grat = sal *5/100;
    imposto = sal * 7/100;
    liquido = sal + grat - imposto;

    printf("Seu salario e de: %.2f", liquido);

    return 0;
}
