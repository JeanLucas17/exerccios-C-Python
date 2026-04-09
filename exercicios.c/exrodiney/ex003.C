/*
ALUNO: JEAN LUCAS THOMAZELLI SILVA
DATA: 21/03/2026
OBJETIVO: Calcular o rendimento do carro na praca
*/

#include <stdio.h>

int main()
{
    float hodometro_inicio;
    float hodometro_final;
    float preco_combustivel = 5.24;
    float combustivel_litros;
    float valor_gasto;
    float valor_recebido;
    float quilometros;
    float lucro;
    float media_consumo;

    printf("Quantos Km o hodometro marcava no inicio?\n");
    scanf("%f", &hodometro_inicio);

    printf("Quantos Km o hodometro marcou no final?\n");
    scanf("%f", &hodometro_final);

    printf("Quantos litros de combustivel foram gastos?\n");
    scanf("%f", &combustivel_litros);

    printf("Quantos R$ voce recebeu dos passageiros?\n");
    scanf("%f", &valor_recebido);

    quilometros = hodometro_final - hodometro_inicio;
    valor_gasto = combustivel_litros * preco_combustivel;
    lucro = valor_recebido - valor_gasto;
    media_consumo = (float) quilometros / combustivel_litros;

    printf("O hodometro inicial marcava %.0f!\n", hodometro_inicio);
    printf("O hodometro final marcou %.0f!\n", hodometro_final);
    printf("Foram percorridos %.0f Km no dia!\n", quilometros);
    printf("O lucro foi de R$ %.2f!\n", lucro);
    printf("A media de consumo e de %.2f Km/l!\n", media_consumo);
    return 0;
}
