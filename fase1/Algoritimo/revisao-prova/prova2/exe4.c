#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("\nDigite o primeiro número inteiro: ");
    scanf("%i", &n1);
    printf("Digite o segundo número inteiro: ");
    scanf("%i", &n2);

    if (n1 > n2){
        printf("A diferença entre %i e %i é %i\n", n1, n2, n1 - n2);
    } else{
        printf("A diferença entre %i e %i é %i\n", n2, n1, n2 - n1);
    }

    return 0;
}