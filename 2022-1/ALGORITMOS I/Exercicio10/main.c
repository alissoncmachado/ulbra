#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359
int main()
{
    float area, raio;

    printf("Digite o raio: \n");
    scanf("%f", &raio);
    area = (PI * raio) * 2;

    printf("A area do circulo e de: %.2f \n", area);
    return 0;
}
