/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 15/03/2026
    Objetivo: calcular raiz, potencia, Cos, arredondar para inteiro
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float raiz;
    float potencia;
    float cosseno;
    float arredondado;

    raiz = sqrt(169);
    potencia = pow(17, 2);
    cosseno = cos(0);
    arredondado = round(1.65);

    printf("Raiz quadrada de 169 = %.0f\n", raiz);
    printf("17 elevado a 2 = %.0f\n", potencia);
    printf("Cosseno de 0 = %.0f\n", cosseno);
    printf("1.65 arredondado para inteiro = %.0f\n", arredondado);
    return 0;
}
