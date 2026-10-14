#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    if (numero > 0){
        printf("O numero é positivo!\n");
    } else {
        printf("O numero é negativo!\n");
    }

    if (numero % 2 == 0){
        printf("O numero é par!\n");
    }
    if (numero % 2 != 0){
        printf("O numero é impar!\n");
    }
    return 0;
}