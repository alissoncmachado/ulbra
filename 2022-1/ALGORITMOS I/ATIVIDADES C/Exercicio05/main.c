#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, novosal, porc, aumento;
    printf("Digite o salario atual: \n");
    scanf("%f", &sal);
    printf("Digite a porcentagem de aumento: \n");
    scanf("%f", &porc);

    aumento = sal * porc/100;
    novosal = sal + aumento;

    printf("O novo salario e de: %.2f", novosal);
    return 0;
}
