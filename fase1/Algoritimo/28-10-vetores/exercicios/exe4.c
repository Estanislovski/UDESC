#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, r = 10;
    float entrada[r], saida[r];


    for(i = 0; i < r; i++){
        printf("Digit4e o %iº número: ", i + 1);
        scanf("%f", &entrada[i]);
        saida[i] = pow(entrada[i], 2);
    }

    for(i = 0; i < r; i++){
        printf("o quadrado de %.2f é: %.2f\n", entrada[i], saida[i]);
    }
    return 0;
}