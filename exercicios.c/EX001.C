/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 14/03/2026
    Objetivo: calcular expressões aritméticas
*/

#include <stdio.h>

int main()
{
    printf("2 x 6 + 11 x 5 = %d\n", 2*6 + 11*5);
    printf("20 / (-2) / 5 = %d\n", 20/(-2)/5);
    printf("20 / 2 x 2 = %d\n", 20/2*2);
    printf("(3+9) / 3 x 4 = %d\n", (3+9)/3*4);
    printf("(5 x 6 / (3+2) - 15 x 4) / 6-4 = %d\n", (5*6/(3+2) - 15*4)/6-4);
    printf("4 + 32 x 2 - 7 x 2 / (9-2) = %d\n", 4+32*2 -7*2/(9-2));
    return 0;
}
