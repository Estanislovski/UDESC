#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n1);

    printf("Digite outro número inteiro: ");
    scanf("%i", &n2);

    if (n1 > n2){
        printf("%i é maior que %i", n1, n2);
    } else if (n2 > n1){
        printf("%i é maior que %i", n2, n1);
    } else{
        printf("Você digitou dois números iguais");
    }
    return 0;
}