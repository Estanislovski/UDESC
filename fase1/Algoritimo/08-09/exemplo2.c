#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, soma;

    printf("Digite o 1º número inteiro: ");
    scanf("%i", &n1);

    printf("Digite o 2º número inteiro: ");
    scanf("%i", &n2);

    soma = (n1 + n2);
    
    if (soma > 10){
        printf("%i", soma);
    }
    return 0;
}