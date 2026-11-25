#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
    printf("aqui será a ajuda");
}

void jogar(){

    int i, j, v, coluna;
    char linha;

    limparmatriz()

    for(v = 1; v < 10; v++){
        if(v % 2 == 0){
            printf("Informe a coordenada para colocar o 'X' (linha A-C e coluna 1-3, ex.: A 2): ");
            scanf("%c %i", &linha, &coluna);
            linha = toupper(linha);

            if(linha == 'A'){
                i = 0;
            }else if(linha == 'B'){
                i = 1;
            }else if(linha == 'C'){
                i = 2;
            }else{
                printf("digite uma coordenada valida.");
                v--;
            }
            
            if(coluna > 0 && coluna <= 3) {
                j = coluna - 1;
            }else{
                printf("digite uma coordenada valida.");
                v--;                
            }

            printf("%i", v);
        }else{
            printf("Informe a coordenada para colocar o 'O' (linha A-C e coluna 1-3, ex.: A 2): ");
            scanf("%c %i", &linha, &coluna);
            linha = toupper(linha);

            if(linha >= 'A' && linha <= 'C'){
                i = linha -'A';
            }
        }

        imprimirmatriz();
    }
}

int main() {
    int op;
    do{
        printf("\n0 - Sair");
        printf("\n1 - Jogar");
        printf("\n2 - Ajuda");
        printf("\nDigite uma opção: ");
        scanf("%i", &op);

        if(op == 0){
            printf("Voce esta saíndo do jogo, até mais!!!!");
        }else if(op == 1){
            jogar();
        }else if(op == 2){
            ajuda();
        }else{
            printf("Escolha uma opção valida!");
        }
    }while(op != 0);
    return 0;
}