#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, soma;

    printf("Digite o 1º número: ");
    scanf("%f", &n1);

    printf("Digite o 2º número: ");
    scanf("%f", &n2);

    soma = n1 + n2;

    if (soma > 20){
        printf("A soma de %.2f e %.2F subtraido de 5 é %.2f", n1, n2, (soma - 5));
    }

    return 0;
}