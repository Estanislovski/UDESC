#include <stdio.h>
#include <stdlib.h>

/*Uma posição de uma matriz é referenciada por linha e coluna, faça um programa que leia uma matriz 
4×4. O programa deve perguntar o valor de cada posição da matriz, em seguida imprima esta matriz na 
tela */

int main() {
    int i, j, tam = 4;
    int a[tam][tam];

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o numero intero que ocupara a posicao da linha %i e coluna %i: ", i + 1, j + 1);
            scanf("%i", &a[i][j]);
        }
    }
    printf("Matriz Digitada\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}