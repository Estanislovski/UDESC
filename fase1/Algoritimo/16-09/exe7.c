#include <stdio.h>
#include <stdlib.h>

int main() {
    int nivel;
    float horas, salario;

    printf("Professor nivel: ");
    scanf("%i", &nivel);
    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);

    switch (nivel){
        case 1:
            printf("O valor a ser pago é R$ %.2f", horas * 12);
            break;
        case 2:
            printf("O valor a ser pago é R$ %.2f", horas * 17);
            break;
        case 3:
            printf("O valor a ser pago é R$ %.2f", horas * 25);
            break;
        default:
            printf("Informe um nivel valido\n");
            break;
    }

    ///printf("O valor a ser pago é R$ %.2f", salario);
    
    return 0;
}