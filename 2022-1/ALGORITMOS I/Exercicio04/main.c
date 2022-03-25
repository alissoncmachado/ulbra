#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, novosal;

    printf("Digite seu salario: \n");
    scanf("%f", &sal);

    novosal = sal + sal * 25/100;

    printf("Seu aumento foi de 25 porcento e seu novo salario e: %.2f", novosal);
    return 0;
}
