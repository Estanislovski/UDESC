#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[9], i;
    float media;

    vetor[9] = 0;

    for(i = 0; i < 8; i++){
        printf("Digite o %i numero inteiro: ", i + 1);
        scanf("%i", &vetor[i]);
        vetor[9] = vetor[9] + vetor[i];
    }
    media = vetor[9] / 8.0;
    printf("%i\n", vetor[9]);
    printf("A media dos valores digitadoes é: %.2f", media);

    return 0;
}