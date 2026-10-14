#include <stdio.h>
#include <stdlib.h>

int main() {
float numero;

printf("\nDigite um número: ");
scanf("%f", &numero);

if (numero >= 30 && numero <= 90){
    printf("O número %.2f esta entre 30 e 90!\n", numero);
} else {
    printf("O número %.2f não existe no intervalo de 30 e 90!\n", numero);
}

    return 0;
}