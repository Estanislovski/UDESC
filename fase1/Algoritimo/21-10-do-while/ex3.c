#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;
    int i = -1;

    do{
        printf("Digite um numero positivo: ");
        scanf("%f", &n);
        i++;
    } while (n > 0);
    printf("Foram digitados %i", i);
    
    return 0;
}