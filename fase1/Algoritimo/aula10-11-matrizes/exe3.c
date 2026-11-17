#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia uma matriz quadrada e escreva todos os elementos, exceto os elementos 
da diagonal principal. */

int main() {
    int i, j, tam = 4;// var auxiliar
    int matriz[4][4]={{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4},{1, 2, 3, 4}};

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(i == j){
                printf("  ");
            }else{
                printf("%i ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}