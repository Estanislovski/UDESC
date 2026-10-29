#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;

    do{
        printf("Digite um numero: ");
        scanf("%f", &n);
        if (n != -999){
            printf("O triplo de %.2f é %.2f\n", n, n *3);
        }
    } while (n != -999);
    
    return 0;
}