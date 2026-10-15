#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, c = 0;

    printf("Digite um numero inteiro positivo (Para parar digite um numero negativo): ");
    scanf("%i", &i);
    while (i >= 0){
        c ++;

        printf("Digite um numero inteiro positivo (Para parar digite um numero negativo): ");
        scanf("%i", &i);
    }
    printf("Foram digitados %i números positivos", c);
    return 0;
}