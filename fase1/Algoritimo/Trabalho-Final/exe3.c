#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tam = 4;
    float notas[tam], Ma = 0.0;

    for(i = 0; i < (tam - 1); i++){
        printf("Digite a %i nota do Aluno: ", i + 1);
        scanf("%f", &notas[i]);
        notas[tam - 1] += notas[i];
    }
    
    Ma = notas[tam - 1];
    notas[tam - 1] = notas[tam - 1] / (tam - 1);
    Ma = (Ma + notas[tam - 1]) / tam;

    if(Ma >= 9.0){
        printf("A nota do Aluno é 'A'\n");
    }else if(Ma >= 7.5){
        printf("A nota do Aluno é 'B'\n");
    }else if(Ma >= 6.0){
        printf("A nota do Aluno é 'C'\n");
    }else if (Ma >= 4.0){
        printf("A nota do Aluno é 'D'\n");
    }else{
        printf("A nota do Aluno é 'E'\n");
    }
    
    return 0;
}