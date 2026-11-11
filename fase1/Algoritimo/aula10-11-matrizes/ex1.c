#include <stdio.h>
#include <stdlib.h>

int main() {
    //tipodamatriz nomedamatriz [qte de linhas][qte de colunas]
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i/*linha*/, j/*coluna*/;//var auxiliares

//para demonstrar apenas 1 dado da matriz
    printf("%i\n\n", a[1][1]);

//laço de repetição para percorrer apenas uma linha da matriz
    for(i = 0; i < 3; i++){
        printf("%i ", a[0][i]);
    }
    printf("\n\n");

//laço de repetição para percorrer toda a matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
