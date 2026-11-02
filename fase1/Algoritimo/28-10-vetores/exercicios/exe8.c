#include <stdio.h>
#include <stdlib.h>

int main() {
    char aux, vet [10] = {'t', 'r', 'x', 's', ' ', 'e', 'o', 'b', 'a', '!'};
    int i;

    aux = vet[5];
    vet[5] = vet[8];
    vet[8] = aux;

    for (i = 0; i <= 3; i++) {
        aux = vet[i];
        vet[i] = vet[7-i];
        vet[7-i] = aux;
    }

    vet[5] = vet[1];

    for (i = 0; i <= 9; i++) {
        printf("%c", vet[i]);
        printf("\n");
    }
    return 0;
}