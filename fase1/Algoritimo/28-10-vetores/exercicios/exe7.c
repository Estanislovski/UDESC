#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, r = 4;//var. auxiliares
    float vetor[r], somapos = 0;
    int qtdneg = 0, zero = 0;//contado

    for(i = 0; i < r; i++){
        printf("Digite %i numero real: ", i + 1);
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0){
            qtdneg ++;
        }else if (vetor[i] > 0){
            somapos = somapos + vetor[i];
        }else{
            zero++;
        }
    }
    printf("A soma dos anúmeros positivos é %.2f\n", somapos);
    printf("Números negativos foram digitados %i vez(es)\n", qtdneg);
    printf("O zero foi digitado %i vez(es)\n", zero);
    return 0;
}