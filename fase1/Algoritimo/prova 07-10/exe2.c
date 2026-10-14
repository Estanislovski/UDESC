#include <stdio.h>
#include <stdlib.h>

int main() {
    float metros;

    printf("Digite um valor em metros (1.00, não utilize virgula): ");
    scanf("%f", &metros);

    printf("%.2fm corresponde a %.0fcm!", metros, metros * 100);
    return 0;
}