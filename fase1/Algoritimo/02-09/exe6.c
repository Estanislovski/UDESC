#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n1, n2, resultado;

    printf("Digite o 1º numero: ");
    scanf("%f", &n1);
    printf("Digite o 2º número: ");
    scanf("%f", &n2);

    resultado = n1 + n2;
    printf("\nA soma de %.2f e %.2f é %.2f\n", n1, n2, resultado);

    resultado = n1 * pow(n2,2);
    printf("\nO produto de %.2f pelo quadrado de %.2f é %.2f\n", n1, n2, resultado);

    resultado = pow(n1,2);
    printf("\nO quadrado de %.2f é %.2f\n", n1, resultado);

    resultado = pow(pow(n1,2) + pow(n2,2),0.5);
    printf("\nA raiz quadrada da soma dos quadrados de %.2f e %.2f é %.5f\n", n1, n2, resultado);
    return 0;
}