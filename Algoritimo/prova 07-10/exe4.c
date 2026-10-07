#include <stdio.h>
#include <stdlib.h>

int main() {
    float imc, kg, altura;

    printf("informe sua Altura em m(1.75, não utiliza virgulas): ");
    scanf("%f", &altura);
    printf("Informe seu peso em kg(65.50, não utiliza virgulas): ");
    scanf("%f", &kg);

    imc = kg / (altura * altura);

    if (imc < 18.5){
        printf("O IMC do paciente é %.2f, ele está abaixo do peso ideal!", imc);
    } else if(imc >= 18.5 && imc < 25){
        printf("O IMC do paciente é %.2f, ele está no peso ideal!", imc);
    } else if(imc >= 25 && imc < 30){
        printf("O IMC do paciente é %.2f, ele está acima do peso!", imc);
    } else{
        printf("O IMC do paciente é %.2f, ele está obeso!", imc);
    }
    return 0;
}