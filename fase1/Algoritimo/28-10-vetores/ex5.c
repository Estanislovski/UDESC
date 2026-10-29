#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, agr = 0, n[5];
    
    for (i = 0; i < 5; i++){
        n[i] = (i + 1) * 2;
        agr = agr + n[i];
    }

    printf("A soma dos valores é %i", agr);
    return 0;
}