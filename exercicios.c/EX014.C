/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 15/03/2026
    Objetivo: calcular raiz de 3, arredondar o resultado e calcular a exponencial
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float exponencial;

    exponencial = exp(round(sqrt(3)));

    printf("O valor final e: %.2f!\n", exponencial);    
    return 0;
}
