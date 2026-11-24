#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;

    printf("Informe um numero inteiro entre 1 e 10: ");
    scanf("%i", &n);
    while(n < 1 || n > 10){
        printf("Informe um numero inteiro entre 0 e 10: ");
        scanf("%i", &n);        
    }

    for(i = 1; i <= 10; i++){
        printf("%2iX%2i=%2i\n", n, i, n * i);
    } 
    return 0;
}