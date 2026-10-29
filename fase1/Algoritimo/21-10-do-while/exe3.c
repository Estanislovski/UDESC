#include <stdio.h>
#include <stdlib.h>

int main() {
    int impares = 1, pares = 0, num;

    do{
        printf("Digite um inteiro positiv0(Digite 999 para sair): ");
        scanf("%i", &num);
        if ( num % 2 == 0){
            pares = pares + num;

        }else{
            impares = impares * num;
        }
    } while (num != 999);

    printf("A soma dos números pares é %i\n", pares);
    printf("O produto  dos números impares é %i\n", impares / 999);
    
    return 0;
}