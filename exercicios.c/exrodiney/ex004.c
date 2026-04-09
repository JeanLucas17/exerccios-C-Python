/*
ALUNO: JEAN LUCAS THOMAZELLI SILVA
DATA: 21/03/2026
OBJETIVO: Calcular informações do funcionario
*/

#include <stdio.h>

int main()
{
    char nome[50];
    int horas;
    int dependentes;
    float salario_bruto;
    float salario_liquido;
    float desconto_ir;
    float desconto_inss;

    printf("Qual o seu nome?\n");
    scanf("%s", nome);

    printf("Voce trabalhou quantas horas?\n");
    scanf("%d", &horas);

    printf("Quantos dependentes voce tem?\n");
    scanf("%d", &dependentes);

    salario_bruto = 12 * horas + 40 * dependentes;
    desconto_inss = salario_bruto * 0.085;
    desconto_ir = salario_bruto * 0.05;
    salario_liquido = salario_bruto - desconto_inss - desconto_ir;

    printf("Seu nome e %s!\n", nome);
    printf("Seu salario bruto e de R$ %.2f!\n", salario_bruto);
    printf("Desconto do INSS: R$ %.2f!\n", desconto_inss);
    printf("Desconto IR: R$ %.2f!\n", desconto_ir);
    printf("O salario liquido do funcionario e de: R$ %.2f!\n", salario_liquido);

    return 0;
}
