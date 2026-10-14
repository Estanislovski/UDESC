#include <stdio.h>
#include <stdlib.h>

int main() {
    char genero;
    float altura;

    printf("Digite o genero (m - Masc, f - Fem): ");
    scanf("%c", &genero);
    printf("Digite sua Altura(em metros): ");
    scanf("%f", &altura);

    if (genero =='f'){
        printf("Seu peso ideal é %.2fkg!", (62.1 * altura) - 44.7);
    }else{
        printf("Seu peso ideal é %.2fkg!", (72.7 * altura) - 58);
    }

    return 0;
}