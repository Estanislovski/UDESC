#include <stdio.h>
#include <stdlib.h>

int main() {
    float pe;
    int cp;

    printf("Informe o preço de etiqueta: ");
    scanf("%f", &pe);
    printf("______________________________________________________\n");
    printf("          Tabela de concição de pagamento\n");
    printf("______________________________________________________\n");
    printf("Codigo |     Condição de Pagamento     \n");
    printf("   1   | A vistas em dinheiro e cheque Desconto de 10%%\n");
    printf("   2   | A vista cartão de credito desconto de 5%%\n");
    printf("   3   | Em 2 vezes preço da etiqueta sem juros\n");
    printf("   4   | Em 3 vezes preço da etiqueta com 10%% de juros\n");

    printf("\nInforme a condição de pagamento: ");
    scanf("%i", &cp);

    switch (cp){
        case 1:
            printf("O valor a ser pago é R$ %.2f", pe - (pe * 0.1));
            break;
        case 2:
            printf("O valor a ser pago é R$ %.2f", pe - (pe * 0.05));
            break;
        case 3:
            printf("O valor a ser pago é R$ %.2f com parcelas de R$ %.2f", pe, pe / 2);
            break;
        case 4:
            printf("O valor a ser pago é R$ %.2f com parcelas de R$ %.2f", pe * 1.10, (pe * 1.10) / 3);
            break;
        default:
            printf("Informe um valor valido!!");
            break;
        }

    return 0;
}