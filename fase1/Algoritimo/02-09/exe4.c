#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, resultado;

    printf("Digite o 1º número inteiro: ");
    scanf("%i", &n1);

    printf("Digite o 2º número inteiro: ");
    scanf("%i", &n2);

    resultado = n1 * n2;

    printf("%i X %i = %i", n1, n2, resultado);

    return 0;
}