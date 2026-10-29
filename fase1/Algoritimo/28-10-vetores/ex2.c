#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[10], i;

    for(i = 0; i < 10; i ++){
        n[i] = i + 1;
        printf("O numero na posição %i é %i\n", i, n[i]);
    }
    return 0;
}