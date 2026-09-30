#include <stdio.h>

int main(){
    int n1, n2, n3, maior;

    printf("\nDigite o 1º numero inteiro: ");
    scanf("%i", &n1);
    printf("\nDigite o 2º numero inteiro: ");
    scanf("%i", &n2);
    printf("\nDigite o 3º numero inteiro: ");
    scanf("%i", &n3);

    maior = n1;

    if (maior < n2){
        maior = n2;
    }
    
    if (maior < n3){
        maior = n3;
    }

    printf("\nO maior numero digitado foi %i\n", maior);

    return 0;
}