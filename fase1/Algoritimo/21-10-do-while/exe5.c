#include <stdio.h>
#include <stdlib.h>

int main() {
    float altmaior = 0, altmenor = 1000, altura, homens, mulheres, porctman = 0;
    float agrmulher = 0, agrhomens = 0, mediamasc, mediafem, agraltpop = 0;
    float mediaaltpop = 0;
    int i, genero;

    for(i = 0; i <= 5; i++){
        printf("Digite seu genero (o - masc, 1 - fem): ");
        scanf("%f", &genero);
        printf("Digite sua Altura, em centimetros: ");
        scanf("%f", &altura);
        if (altura > altmaior){
            altmaior = altura;
        }
        if (altura < altmenor){
            altmenor = altura;
        }
        if(genero = 1){
            mulheres ++;
            agrmulher = agrmulher + altura;
        }else if( genero = 0){
            homens ++;
        }
        agraltpop = agraltpop + altura;

    }
    printf("Menor altura encontrada na pesquisa foi de %fcm", altmenor);
    printf("Maior altura encontrada na pesquisa foi de %fcm", altmaior);
    //printf(); deu preguiça de terminar mas tentar fazer sozinho depois
    return 0;
}