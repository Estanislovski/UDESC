#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, j;
    float p[2], q[2];

    printf("Digite as coordenadas do ponto P (x1 y1): ");
    scanf("%f %f", p[0], p[1]);

    for(i = 0; i < 2; i++){
        printf("%.2f\n", p[i])
    }
    return 0;
}