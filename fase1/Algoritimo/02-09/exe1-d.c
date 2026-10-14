#include <stdio.h>
#include <stdlib.h>

int main() {
    float vlrtotal, vlrund;
    int quantiadade;

    vlrtotal = 57.5;
    quantiadade = 23;

    vlrund = vlrtotal / quantiadade;

    printf("Cada caixa de leite custou R$%.2f", vlrund);
    return 0;
}