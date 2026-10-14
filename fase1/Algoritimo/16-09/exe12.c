#include <stdio.h>
#include <stdlib.h>

int main() {
    int cod;
    float salarioatual, novosalario;

    printf("Digite o codigo do seu cargo: ");
    scanf("%i", &cod);
    printf("Digite seu Salario atual: ");
    scanf("%f", &salarioatual);

    //switch case apenas compara igualdades

    switch (cod){
        case 101:
            novosalario = salarioatual * 1.1;
            break;
        case 102:
            novosalario = salarioatual * 1.2;
            break;
        case 103:
            novosalario = salarioatual * 1,3;
            break;
        default:
            novosalario = salarioatual * 1.4;
            break;
    }

    printf("Novo salario é R$ %.2f", novosalario);

    return 0;
}