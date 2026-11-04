#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10], menor, pos, i;

    for(i = 0; i < 10; i++){
        printf("Digite o %iº número inteiro: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    menor = vetor[0];
    pos = 0;

    for(i = 1; i < 10; i++){
        if(menor > vetor[i]){
            menor = vetor[i];
            pos = i;
        }
    }
    printf("O menor valor informado foi %i, e esta armazenado no indice n %i do vetor.", menor, pos);
    return 0;
}