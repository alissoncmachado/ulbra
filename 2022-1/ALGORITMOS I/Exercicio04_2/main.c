#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, novosal, aumento;

    printf("Digite seu salario: \n");
    scanf("%f", &sal);
    aumento = sal * 25/100;
    novosal = sal + aumento;

    printf("Seu aumento foi de 25 porcento e seu novo salario e: %.2f", novosal);
    return 0;
}
