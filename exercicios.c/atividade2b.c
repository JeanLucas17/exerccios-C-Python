/******************************************************************************
Nome..: Jean Lucas
data..: 24/03/2026
objetivo: calcular a poupança
*******************************************************************************/
#include <stdio.h>

int main()
{
    char    sonho_consumo[50];
    float   valor_sonho;
    float   poupar_mes;
    float   meses;
    
    printf("Qual o seu sonho de consumo? ");
    scanf("%s", sonho_consumo);
    
    printf("Qual o valor do(a) %s? ", sonho_consumo);
    scanf("%f", &valor_sonho);
    
    printf("Quantos R$ voce consegue poupar por mes? ");
    scanf("%f", &poupar_mes);
    
    meses = (float) valor_sonho / poupar_mes;
    
    printf("Voce ira economizar R$ %.2f por %.0f meses para comprar o(a) %s!",poupar_mes, meses, sonho_consumo);
    
    return 0;
}

