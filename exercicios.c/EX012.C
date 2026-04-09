/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 15/03/2026
    Objetivo: calcular quantidade minima de fios para comprar
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float quantidade_fios;

    quantidade_fios = sqrt(pow(11.5, 2) + pow(6.3, 2));

    printf("A quantidade minima de fios a serem comprados e de: %.2f metros!\n", quantidade_fios);
    return 0;
}
