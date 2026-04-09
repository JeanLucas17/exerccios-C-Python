/*
ALUNO: JEAN LUCAS THOMAZELLI SILVA
DATA: 21/03/2026
OBJETIVO: Mostrar informações do funcionario
*/

#include <stdio.h>

int main()
{
    char nome[50];
    char cargo[50];
    int idade;
    float salario_bruto;
    float salario_reajuste;
    float gratificacao;
    float salario_total;
    float salario_liquido;
    float desconto;

    printf("Qual seu nome?\n");
    scanf("%s", nome);

    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    printf("Qual o seu cargo?\n");
    scanf("%s", cargo);

    printf("Qual seu salario?\n");
    scanf("%f", &salario_bruto);
    
    salario_reajuste = salario_bruto + (salario_bruto * 0.38);
    gratificacao = salario_bruto * 0.20;
    salario_total = salario_reajuste + gratificacao;
    desconto = salario_total * 0.15;
    salario_liquido = salario_total - desconto;
    
    printf("Seu nome e %s, voce tem %d anos e o seu cargo e %s\n!", nome, idade, cargo);
    printf("Seu salario bruto inicial e de R$ %.2f\n!", salario_bruto);
    printf("Seu salario bruto com reajuste e de R$ %.2f\n!", salario_reajuste);
    printf("Voce recebeu uma gratificacao de R$ %.2f\n!", gratificacao);
    printf("Seu salario teve um desconto de R$ %.2f\n!", desconto);
    printf("Seu salario liquido e de R$ %.2f\n!", salario_liquido);
    
    return 0;
}
