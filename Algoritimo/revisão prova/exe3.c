#include <stdio.h>

int main(){
    int idade;

    printf("\nDigite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18){
        printf("Maior de idade\n");
    } else{
        printf("Menor de idade\n");
    }

    return 0;
}