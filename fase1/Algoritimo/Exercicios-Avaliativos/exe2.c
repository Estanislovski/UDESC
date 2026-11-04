#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, r = 10;//Variaveis Auxiliares;
    int vetor[r];
    int par = 0;//agregadores

    for(i = 0; i < r; i++){
        printf("Digite o %iº número inteiro: ", i + 1);
        scanf("%i", &vetor[i]);

        if((vetor[i] % 2) == 0){
            par ++;
        }
    }
    printf("A quantidade de números pares digitados foi: %i", par);
    return 0;
}