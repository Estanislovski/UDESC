#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano;
    float valor;

    printf("Digite o Valor do veículo: ");
    scanf("%i", &ano);
    printf("Informe o ano de fabricação do veículo: ");
    scanf("%f", &valor);

    if (ano < 1990){
        printf("O imposto devido é R$ %.2f", valor * 0.01);
    } else{
        printf("O imposto devido é R$ %.2f", valor * 0.015);
    }

    return 0;
}