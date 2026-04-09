/*
ALUNO: JEAN LUCAS THOMAZELLI SILVA
DATA: 21/03/2026
OBJETIVO: Calcular informações sobre o combustivel
*/

#include <stdio.h>

int main()
{
    int quilometros;
    float combustivel;
    float combustivel_reais;
    float media_combustivel;
    float preco;
    preco = 5.24;

    printf("Quantos litros de combustivel foram gastos?\n");
    scanf("%f", &combustivel);

    printf("Quantos Km foram percorridos?\n");
    scanf("%d", &quilometros);

    combustivel_reais = combustivel * preco;
    media_combustivel = (float) quilometros / combustivel;

    printf("Foram gastos %.1f litros de combustivel!\n", combustivel);
    printf("Foram percorridos %d Km!\n", quilometros);
    printf("Foram gastos R$ %.2f em combustivel!\n", combustivel_reais);
    printf("A media de consumo e %.2f Km/l!\n", media_combustivel);

    return 0;
}
