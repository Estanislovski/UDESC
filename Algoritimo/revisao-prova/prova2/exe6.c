#include <stdio.h>
#include <stdlib.h>

int main() {
    int quant, codigo;

    printf("\n");
    printf(" _____________________________\n");
    printf("|    Cardapio da Lancheria    |\n");
    printf("|_____________________________|\n");
    printf("|Código|    Produto    |Preço |\n");
    printf("|100   |Cachorro quente|R$1,20|\n");
    printf("|101   |Bauru Simples  |R$1,30|\n");
    printf("|102   |Bauru com ovo  |R$1,50|\n");
    printf("|103   |Hamburger      |R$1,20|\n");
    printf("|104   |Cheseeburger   |R$1,30|\n");
    printf("|105   |Refrigerante   |R$1,00|\n");
    printf("|_____________________________|\n");
 
    printf("\nDigite o código do produto desejado: ");
    scanf("%i", &codigo);
    printf("Digite a quantidade desejada: ");
    scanf("%i", &quant);

    switch (codigo){
        case 100:
            printf("O total do pedido foi R$%.2f por %i Cachorros quentes\n", 1.2 * quant, quant);
            break;
        case 101:
            printf("O total do pedido foi R$%.2f por %i Baurus\n", 1.3 * quant, quant);
            break;
        case 102:
            printf("O total do pedido foi R$%.2f por %i Baurus com ovo\n", 1.5 * quant, quant);
            break;
        case 103:
            printf("O total do pedido foi R$%.2f por %i Hamburger\n", 1.2 * quant, quant);
            break;
        case 104:
            printf("O total do pedido foi R$%.2f por %i Cheeseburger\n", 1.3 * quant, quant);
            break;
        case 105:
            printf("O total do pedido foi R$%.2f por %i Refrigerantes\n", 1 * quant, quant);
            break;
        default:
            printf("Informe um código valido!!\n");
            break;
    }


    return 0;
}