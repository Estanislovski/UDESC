#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vlrund, vlrtotal;
    int quantidade;

    vlrund = 2.30;
    quantidade = 5;
    vlrtotal = vlrund * quantidade;

    printf("O valor total da compra foi R$%.2f", vlrtotal);
    return 0;
}