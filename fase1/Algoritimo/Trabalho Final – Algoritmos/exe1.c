#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tam = 10;
    int n[tam], pares[tam], impares[tam], somapar = 0, agrimpar = 0;

    for(i = 0; i < tam; i++){
        printf("Digite o %i numero inteiro: ", i + 1);
        scanf("%i", &n[i]);

        if(n[i] % 2 == 0){
            pares[i] = n[i];
            impares[i] = 0;
            somapar += n[i];
        }else{
            impares[i] = n[i];
            pares[i] = 0;
            agrimpar ++;
        }
    }
    //pares
    if(somapar == 0){
        printf("Não foram digitados numeros pares.\n");
    }else{
        printf("Os numeros pares digitados foram:\n");
        for(i = 0; i < tam; i++){
            if(pares[i] != 0){
                printf("%i\n", pares[i]);
            }
        }
        printf("A soma dos numeros pares foi: %i.\n", somapar);
    }
    //impares
    if(agrimpar == 0){
        printf("Não foram digitados numeros impares.\n");
    }else{
        printf("Os numeros impares digitados foram:\n");
        for(i = 0; i < tam; i++){
            if(impares[i] != 0){
                printf("%i\n", impares[i]);
            }
        }
        printf("Foram digitados %i numeros impares.\n", agrimpar);
    }
    return 0;
}