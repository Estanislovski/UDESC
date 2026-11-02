#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int i, r = 4; //Var. Auxiliares
    float vetor[r], maior, menor;
    /*float vetor[r], maior = INT_MIN, menor = INT_MAX;

    for(i = 0; i < r; i++){
        printf("Digite um numero : ");
        scanf("%f", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }*/

    for(i = 0; i < r; i++){
        printf("Digite um numero : ");
        scanf("%f", &vetor[i]);
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

    printf("O menor número digitado foi %.f\n", menor);
    printf("O maior número digitado foi %.f\n", maior);
    return 0;
}