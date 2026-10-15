#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;

    printf("Digite um número(para sair digite 0): ");
    scanf("%i", &i);///sempre tera um scanf antes do while
    while(i != 0){
        printf("O triplo do número digitado é %i\n", i * 3);

        printf("Digite um número(para sair digite 0): ");
        scanf("%i", &i);
        ///sempre tera um scanf antes de encerrar o bloco de nota
    }
    return 0;
} 