#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf ("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf ("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf ("%f", &nota3);

    media =(nota1 + nota2 + nota3)/3;

    printf("A m�dia das notas � de: %.2f\n", media);

    system("pause");
    return 0;
}