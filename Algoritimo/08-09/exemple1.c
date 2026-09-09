#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%i", &n);

    if (n > 20){
        printf("%i é maior que 20", n);
    }
    return 0;
}