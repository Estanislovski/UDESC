#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;
    char g;

    printf("Imforme o genero do aluno(m/f): ");
    scanf("%c", &g);
    printf("Informe a 1ª nota: ");
    scanf("%f", &n1);
    printf("Informe a 2ª nota: ");
    scanf("%f", &n2);
    printf("Informe a 3ª nota: ");
    scanf("%f", &n3);
    printf("Informe a 1ª nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if ((media >= 6) && (g == 'm')) {
        printf("Caro aluno, seu resultado é: Aprovado!");
    } else if ((media < 6) && (g == 'm')) {
        printf("Caro aluno, seu resultado é: Reprovado!");
    } else if ((media >= 6) && (g == 'f')) {
        printf("Cara aluna, seu resultado é: Aprovada!");
    } else {
        printf("Cara aluna, seu resultado é: Reprovada!");
    }

    return 0;
}