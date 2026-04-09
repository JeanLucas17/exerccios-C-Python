#include <stdio.h>

int main ()
{
    int numero1;
    int numero2;
    int soma;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("A soma entre %d e %d = %d\n", numero1, numero2, soma);

    return 0;
}
