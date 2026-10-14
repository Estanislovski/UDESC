#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Informe a 1ª nota: ");
    scanf("%f", &n1);
    printf("Informe a 2ª nota: ");
    scanf("%f", &n2);
    printf("Informe a 3ª nota: ");
    scanf("%f", &n3);
    printf("Informe a 1ª nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6){
    printf("Aprovada");
    } else{
        printf("Reprovado");
    }
    return 0;
}