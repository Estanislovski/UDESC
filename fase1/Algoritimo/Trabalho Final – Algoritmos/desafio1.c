#include <stdio.h>
#include <stdlib.h>

int i, j, op;
char matriz[3][3];

void limparmatriz(){
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = 'a';
        }
    }
}
void imprimirmatriz(){
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %c", matriz[i][j]);
        }
    printf("\n");
    }
}

void ajuda(){
    printf("")
}

void menu(){
    do{
        printf("\n0 - Sair");
        printf("\n1 - Jogar");
        printf("\n3 - Ajuda");
        printf("\nDigite uma opção: ")
        scanf("%i", op);
    }while(op != 0)
}

int main() {

    return 0;
}