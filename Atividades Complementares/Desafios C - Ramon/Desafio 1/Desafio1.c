#include <stdio.h>
#include <stdlib.h>


int main () {

int idade, difer;
    do {
        printf("Informe sua idade: \n");
        scanf("%d", &idade);
    } while (idade <0);

    if (idade < 18) {
        difer = abs(18 - idade);
            if (difer == 1) {
                printf("Voce e menor de idade, falta %d ano para voce ser maior.\n", difer);                
            } else {
                printf("Voce e menor de idade, falta %d anos para voce ser maior.\n", difer);
            }
    } else {
        printf("Voce ja pode frequentar o Clube dos Coroas no Entrevero.\n");
    }

    system("pause");
    return 0;
}