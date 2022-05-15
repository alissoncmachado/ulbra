#include <stdio.h>
#include <stdlib.h>

int main () {
float km, kg;
int calorias;
    do {
        printf("Bem vindo a Calculadora da Turminha do Pedal.\n");
        printf("Informe quantos km você pretende pedalar este ano: \n");
        scanf("%f", &km);
    } while (km < 0 );

    // meta
    calorias = 2664 / 62;
    calorias = km * calorias;
    printf("\nSe você pedalar %.3f km em um ano, você queimará %d calorias.\n\n", km, calorias);

    // dia
    km = km / 365;
    calorias = calorias / 365;
    if (km < 1) {
        printf("Para cumprir a meta, você deverá pedalar %.3f metros por dia e queimará %d calorias/dia.\n", km, calorias);
    } else {
        printf("Para cumprir a meta, você deverá pedalar %.3f km por dia e queimará %d calorias/dia.\n\n", km, calorias);
    }
    // semana
    km = km * 7;
    calorias = calorias * 7;  
    if (km < 1) {
        printf("Para cumprir a meta, você deverá pedalar %.3f metros por dia e queimará %d calorias/semana.\n", km, calorias);
    } else {
        printf("Para cumprir a meta, você deverá pedalar %.3f km por dia e queimará %d calorias/semana.\n", km, calorias);
    }

    // mes
    km = km * 4;
    calorias = calorias * 4;  
    if (km < 1) {
        printf("Para cumprir a meta, você deverá pedalar %.3f metros por dia e queimará %d calorias/mês.\n", km, calorias);
    } else {
        printf("Para cumprir a meta, você deverá pedalar %.3f km por dia e queimará %d calorias/mês.\n", km, calorias);
    }

    system("pause");
    return 0;
}