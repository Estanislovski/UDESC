#include <stdio.h>
#include <stdlib.h>

int main() {
    float pe;
    int cp;

    printf("Informe o preço de etiqueta: ");
    scanf("%f", &pe);
    printf("_______________________________");
    printf("Tabela de concição de pagamento");
    printf("_______________________________");
    print("Codigo | ");

    printf("Informe a condição de pagamento: ");
    scanf("%i", &cp);

    switch (cp){
    case 1:
        printf("O valor a ser pago é R$ %f", pe - (pe * 0.25));
        break;
    default:
        printf("Informe um valor valido!!");
        break;
    }

    return 0;
}