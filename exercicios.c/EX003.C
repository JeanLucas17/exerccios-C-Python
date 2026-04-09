/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 14/03/2026
    Objetivo: calcular a conta telefonica
*/
#include <stdio.h>

int main()
{
    float assinatura;
    float impulsos;
    float interurbanos;
    float chamadas;
    float total;

    assinatura = 17.90;
    impulsos = (254 - 90) * 0.04;
    interurbanos = 34.29;
    chamadas = 23 * 0.20;
    total = assinatura + impulsos + interurbanos + chamadas;

    printf("O preco da assinatura e R$%.2f!\n", assinatura);
    printf("O total de impulsos e R$%.2f!\n", impulsos);
    printf("O total de interurbanos e R$%.2f!\n", interurbanos);
    printf("R$%.2f para chamadas de celular!\n", chamadas);
    printf("O valor total e de R$%.2f!\n", total);
    
    return 0;
}
