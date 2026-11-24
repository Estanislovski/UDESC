#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float p[2], q[2], distancia = 0;

    printf("Digite as coordenadas do ponto P (x1 y1): ");
    scanf("%f %f", &p[0], &p[1]);

    printf("Digite as coordenadas do ponto Q (x2 y2): ");
    scanf("%f %f", &q[0], &q[1]);

    distancia = sqrt(pow((q[0] - p[0]),2) + pow((q[1] - p[1]),2));

    printf("A distancia entre os pontos P e Q é: %.2f\n", distancia);
    
    return 0;
}