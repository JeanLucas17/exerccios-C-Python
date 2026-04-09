/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 15/03/2026
    Objetivo: calcular media e mostrar as notas com 1 casa decimal
*/
#include <stdio.h>

int main()
{
    float media;
    float n1;
    float n2;
    float n3;
    float n4;

    n1 = 8;
    n2 = 7.5;
    n3 = 10;
    n4 = 9;

    media = (n1 + n2 * 2 + n3 * 3 + n4 * 4) / 10.0;

    printf("As notas do aluno nas avaliacoes e:\n%.1f \n%.1f \n%.1f \n%.1f \nA media do aluno e: %.1f\n", n1, n2, n3, n4, media);
    return 0;
}
