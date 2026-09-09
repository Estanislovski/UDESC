#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, media;

    printf("Informe a 1ª nota: ");
    scanf("%f", &n1);

    printf("Informe a 2ª nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 6){
        printf("\nAluno Aprovado\n");
    } else{
        printf("\nAluno Reprovado\n");
    }
    return 0;
}