#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade, codigo;

    printf(" __________________________\n");
    printf("|    Tabela de produtos    |\n");
    printf("|CÓDIGO|  PRODUTO  | PREÇO |\n");
    printf("|100   |Detergente |R$ 2.50|\n");
    printf("|101   |Esponja    |R$ 4,50|\n");
    printf("|102   |Lã e aço   |R$ 2,20|\n");
    printf("|__________________________|\n");

    printf("Digite o codigo do produto: ");
    scanf("%i", &codigo);
    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);

    switch(codigo){
        case 100:
            printf("O valor total da compra é R$%.2f", quantidade * 2.5);
            break;
        case 101:
            printf("O valor taotal da compra é R$%.2f", quantidade * 4.5);
            break;
        case 102:
            printf("O valor total da compra é R$%.2f", quantidade * 2.2);
            break;
        default:
            printf("Codigo do produto invalido! ");
            printf("Reinicie o sistema e informe um codigo valido");
            //a ideia é q os dois prints fiquem na mesma linha.
    }
    return 0;
}