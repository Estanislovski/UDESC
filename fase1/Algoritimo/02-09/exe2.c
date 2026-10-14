#include <stdio.h>
#include <stdlib.h>

int main() {
    float c, f;

    printf("\nDigite uma temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (f-32) / 1.8;

    printf("%.2fº Fahrenheit equivalem a %.2fº Celsius", f, c);

    return 0;
}