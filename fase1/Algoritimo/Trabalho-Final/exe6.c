#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, soma = 0, a[6] = {1, 0, 5, -2, -5, 7};

    soma = a[0] + a[1] + a[5];

    printf("A soma dos valores é %i\n", soma);

    a[4] = 100;

    for (i = 0; i < 6; i++){
        printf("%i\n", a[i]);
    }
    
    return 0;
}