#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, c = 0;
    float s = 0;

    printf("Digite um numero inteiro positivo (Para parar digite um numero negativo): ");
    scanf("%i", &i);
    while (i >= 0){
        c ++;
        s = s + i;
        printf("Digite um numero inteiro positivo (Para parar digite um numero negativo): ");
        scanf("%i", &i);
    }
    printf("Foram digitados %i números positivos\n", c);
    printf("A soma dos numeros positivos é %i\n", s);
    printf("A média dos numeros positivos digitados é %.2f\n", s / c);
    return 0;
}