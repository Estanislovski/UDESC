#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor[5], agr = 0, i;
    float media;

    printf("Esse Programa soma 5 números inteiros digitados pelo usuário e apresenta a média deles.\n\n");

    for(i = 0; i < 5; i++){
        printf("Digite o %iº número inteiro: ", i + 1);
        scanf("%i", &valor[i]);
        agr = agr + valor[i];
    }
    printf("\nA soma dos números digitados é %i\n", agr);
    media = agr / 5;
    printf("A media dos numeros digitados é %.2f", media);
    return 0;
}