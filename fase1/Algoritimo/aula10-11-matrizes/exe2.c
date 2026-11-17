#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia uma matriz quadrada e escreva todos os elementos, exceto os elementos
da diagonal principal. */

int main() {
    int i, j, tam = 4;// var auxiliar
    float matriz[4][4]/*={{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4}}*/;

    for(i = 0; i < tam; i++){//scan
        for(j = 0; j < tam; j++){
            printf("Digite o numero intero que ocupara a posicao da linha %i e coluna %i: ", i + 1, j + 1);
            scanf("%f",&matriz[i][j]);
        }
    }

    for(i = 0; i < tam; i++){//print
        for(j = 0; j < tam; j++){
            if(i == j){
                printf("    ");
            }else{
                printf("%.2f ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
