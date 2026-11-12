#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, tam = 4;
    int a[tam][tam], somadp = 0;
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o numero intero que ocupara a posicao da linha %i e coluna %i: ", i + 1, j + 1);
            scanf("%i", &a[i][j]);
            //printf("%i ", a[i][j]);

            if(i == j){
                somadp += a[i][j];
            }
        }
        //printf("\n");
    }


    printf("A soma da Diagonal Principal e %i", somadp);
    return 0;
}
