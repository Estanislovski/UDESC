#include <stdio.h>
#include <stdlib.h>

int main() {
    //string nome;
    float n1, n2, n3, media;

    /*printf("Digite o nome do aluno: ");
    scanf("%s", &nome);*/
    printf("\nDigite a 1ª nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota do aluno: ");
    scanf("%f", &n2);
    printf("Digite a 3ª nota do aluno: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 6.5){
        printf("Aluno Aprovado, média %.2f\n", media);
    } else if(media <= 4.599999){
        printf("Aluno Reprovado, média %.2f\n", media);
    } else{
        printf("Aluno em Recuperação, média %.2f\n", media);
    }

    return 0;
}