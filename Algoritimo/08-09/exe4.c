#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2;

    printf("Digite um número: ");
    scanf("%f", &n1);

    printf("Digite outro número: ");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("A diferença entre %.2f e %.2f é %.2f", n1, n2, n1 - n2);
    } else{
        printf("A diferença entre %.2f e %.2f é %.2f", n2, n1, n2 - n1);
    }

    return 0;
}