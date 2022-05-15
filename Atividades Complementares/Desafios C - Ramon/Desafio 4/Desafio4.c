#include <stdio.h>
#include <stdlib.h>

int main () {
int numGoleiro, reservas;
float aluguel, cota;
    do {
        printf("Bem vindo ao Cálculo de quadra esportiva.\n");
        printf("Informe quantos goleiros terá no jogo de hoje(0, 1 ou 2): \n");
        scanf("%d", &numGoleiro);
    } while (numGoleiro <0 || numGoleiro >2);
    do {
        printf("Informe quantos reservas terá no jogo de hoje: \n");
        scanf("%d", &reservas);
    } while (reservas < 0);

    aluguel = 160.00;
    if (numGoleiro == 0) {
        cota = aluguel / (14 + reservas);
        printf("Cada jogador deverá pagar: R$ %.2f.\n", cota);
    } else if (numGoleiro == 1) {
        cota = aluguel / (13 + reservas);        
        printf("Cada jogador deverá pagar: R$ %.2f.\n", cota);      
    } else {
        cota = aluguel / (12 + reservas);        
        printf("Cada jogador deverá pagar: R$ %.2f.\n", cota); 
    }
    system("pause");
    return 0;
}