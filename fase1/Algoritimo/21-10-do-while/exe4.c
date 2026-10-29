#include <stdio.h>
#include <stdlib.h>

int main() {
    int digitado, maior = 0;
    
    while (digitado != 0){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &digitado);
        if (digitado > maior){
            maior = digitado;
        }
    }

    printf("O maior número digitado foi %d", maior);
    
    return 0;
}