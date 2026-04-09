/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 15/03/2026
    Objetivo: calcular pedaços de madeira e sobra
*/
#include <stdio.h>

int main()
{
    int pedacos_3m;
    int pedacos_4m;
    int pedacos_5m;

    int sobra_3m;
    int sobra_4m;
    int sobra_5m; 

    pedacos_3m = 300 / 45;
    pedacos_4m = 400 / 45;
    pedacos_5m = 500 / 45;

    sobra_3m = 300 % 45;
    sobra_4m = 400 % 45;
    sobra_5m = 500 % 45;

    printf("Para tabuas de 3 metros:\nQuantidade de pedacos: %d\nSobra de madeira: %d cm\n\n", pedacos_3m, sobra_3m);
    printf("Para tabuas de 4 metros:\nQuantidade de pedacos: %d\nSobra de madeira: %d cm\n\n", pedacos_4m, sobra_4m);
    printf("Para tabuas de 5 metros:\nQuantidade de pedacos: %d\nSobra de madeira: %d cm\n\n", pedacos_5m, sobra_5m);
    return 0;
}
