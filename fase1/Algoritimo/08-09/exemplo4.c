#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0){ //se positivo
        printf("A raiz quadrada de %.2f é %.2f", n, sqrt(n));
    }else if (n < 0){ //se negativo
        printf("O quadrado de %.2f é %.2f", n, pow(n,2));
    } else { ///se zero
        printf("o número informado foi %.0f", n);
    }
    
    return 0;
}