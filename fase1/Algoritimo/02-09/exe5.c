#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n1, n2, n3, n4, soma;

    printf("Digite o 1º número: ");
    scanf("%f", &n1);
    printf("Digite o 2º número: ");
    scanf("%f", &n2);
    printf("Digite o 3º número: ");
    scanf("%f", &n3);
    printf("Digite o 4º número: ");
    scanf("%f", &n4);

    soma = pow(n1,2) + pow(n2,2) + pow(n3,2) + pow(n4,2);
    
    printf("%.2f", soma);
    return 0;
}