#include <stdio.h>
#include <stdlib.h>

/*Leia 2 matrizes 5 × 5, de maneira aleatória, mostre elas na tela e então calcule e mostre a soma entre 
elas. */

int main() {
    int i, j, tam = 2;
    int matriz1[tam][tam], matriz2[tam][tam];
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o numero intero que ocupara a posicao da linha %i e coluna %i da matriz 1: ", i + 1, j + 1);
            scanf("%i", &matriz1[i][j]);
        }
    }

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o numero intero que ocupara a posicao da linha %i e coluna %i da matriz 2: ", i + 1, j + 1);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("Dados da Matriz 1\n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%i ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Dados da Mtariz 2\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%i ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}