#include <stdio.h>
#include <stdlib.h>

int main() {
    char genero;

    printf("Digite o sexo(f/m): ");
    scanf("%c", &genero);

    //printf("%c\n", genero);

    if ((genero == 'f') || (genero == 'm')){
        printf("Genero Valido");
    } else{
        printf("Genero Invalido");
    }

    return 0;
}