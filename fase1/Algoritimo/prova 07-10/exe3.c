#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade;

    printf("Informe a quantidade de maçãs compradas: ");
    scanf("%i", &quantidade);

    if (quantidade <= 0){
        printf("Quantidade comprada não pode ser menor que 1.\n");
        printf("Informe um valor valido!");
    } else if (quantidade < 12){
        printf("Valor total da compra R$%.2f!\n", quantidade * 0.3);
        printf("Cada maçã custa R$0,30!");
    } else{
         printf("Valor total da compra R$%.2f!\n", quantidade * 0.25);
        printf("Cada maçã custa R$0,25!");       
    }
    return 0;
}