#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    srand(time(NULL));
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            a[i][j] = rand()%100;
            b[i][j] = rand()%100;
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    /*for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }*/

    printf("\nMatriz A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%i ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz c:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%i ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
