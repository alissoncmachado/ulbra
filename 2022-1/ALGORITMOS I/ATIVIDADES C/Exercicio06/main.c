#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal, liquido,grat, imposto;

    printf("Digite seu sal�rio: \n");
    scanf("%f", &sal);

    grat = sal *5/100;
    imposto = sal * 7/100;
    liquido = sal + grat - imposto;

    printf("Seu sal�rio � de: %.2f\n", liquido);

    system("pause");
    return 0;
}
