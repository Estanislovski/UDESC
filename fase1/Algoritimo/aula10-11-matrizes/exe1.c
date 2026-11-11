#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, tam = 105;
    int a[tam][tam];

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            a[i][j] = 1;
            if ( i == j){
                a[i][j] = 0;
            }
        }
    }
    printf("Matriz a\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
