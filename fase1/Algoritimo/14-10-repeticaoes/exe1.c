#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, c = 0;

    printf("Digite um número inteiro(digite 0 para sair): ");
    scanf("%i", &i);
    while (i != 0){
        if (i >= 100 && i <= 200){
            c ++;
        }
        printf("Digite um número inteiro(digite 0 para sair): ");
        scanf("%i", &i);
    }
    printf("Foram digitados %i números entre 100 e 200", c);
    return 0;
}