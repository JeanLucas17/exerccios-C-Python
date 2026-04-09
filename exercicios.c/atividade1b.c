/******************************************************************************
Nome..: Jean Lucas
data..: 24/03/2026
objetivo: mini calculadora
*******************************************************************************/
#include <stdio.h>

int main()
{
    int     numero1;
    int     numero2;
    int     soma;
    int     subtracao;
    int     multiplicacao;
    int     divisao_inteira;
    int     modulo;
    
    printf("Digite um numero...: ");
    scanf("%d", &numero1);
    
    printf("Digite outro numero: ");
    scanf("%d", &numero2);
    
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao_inteira = numero1 / numero2;
    modulo = numero1 % numero2;
    
    printf("A soma entre %d e %d = %d!\n", numero1, numero2, soma);
    printf("A subtracao entre %d e %d = %d!\n", numero1, numero2, subtracao);
    printf("A multiplicacao entre %d e %d = %d!\n", numero1, numero2, multiplicacao);
    printf("A divisao inteira entre %d e %d = %d\n", numero1, numero2, divisao_inteira);
    printf("O resto da divisao inteira de %d por %d = %d!\n", numero1, numero2, modulo);

    return 0;
}
