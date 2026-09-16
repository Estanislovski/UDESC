#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;
    char g;

    printf("Informe a 1ª nota: ");
    scanf("%f", &n1);
    printf("Informe a 2ª nota: ");
    scanf("%f", &n2);
    printf("Informe a 3ª nota: ");
    scanf("%f", &n3);
    printf("Informe a 1ª nota: ");
    scanf("%f", &n4);
    printf("Imforme o genero do aluno(m/f): ");
    scanf("%c", &g);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6 && g == "m") {
        printf("Aluno Aprovado");
    } else if (media < 6 && g == "m") {
        printf("Aluno Reprovado!");
    } else if (media >= 6 && g == "f") {
        printf("Aluna Aprovada!");
    } else {
        printf("Aluna Reprovada!");
    }
    
    return 0;
}