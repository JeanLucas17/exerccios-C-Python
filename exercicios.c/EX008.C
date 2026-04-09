/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 15/03/2026
    Objetivo: calcular o imposto 
*/
#include <stdio.h>

int main()
{
    float imposto1;
    float imposto2;
    float imposto3;
    float imposto4;

    imposto1 = 1200;
    imposto2 = 1201 * 0.10;
    imposto3 = 5001 * 0.15;
    imposto4 = 1001 * 0.20;

    printf("Ate %.2f e isento de imposto!\n", imposto1);
    printf("De 1.201,00 a 5.000,00 e 10%% de imposto, para 1.201,00 fica: %.2f\n", imposto2);
    printf("De 5.001,00 a 10.000,00 e 15%% de imposto, para 5.001,00 fica: %.2f\n", imposto3);
    printf("Acima de 10.000,00 e 20%% de imposto, para 10.001,00 fica: %.2f\n", imposto4);
    return 0;
}
