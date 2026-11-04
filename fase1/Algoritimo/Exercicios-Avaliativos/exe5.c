#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, r = 10; //Var. Auxiliares
    int vetor[r], maior, menor, diferenca;

    for(i = 0; i < r; i++){
        printf("Digite um numero : ");
        scanf("%i", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 0; i < r; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }else if(vetor[i] < menor){
            menor = vetor[i];       
        }
    }

    diferenca = maior - menor;

    printf("O menor número digitado foi %i\n", menor);
    printf("O maior número digitado foi %i\n", maior);
    printf("A diferença entre eles é de %i\n", diferenca);
    return 0;
}