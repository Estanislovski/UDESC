#include <stdio.h>
#include <stdlib.h>

int main() {
    float n[5], agregador = 0, media;
    int i;

    for(i = 0; i< 5; i++){
        printf("Digite o %iº numero: ", i + 1);
        scanf("%f", &n[i]);
        agregador = agregador + n[i];
    }
    media = agregador / i;
    printf("A media dos numeros é %.2f", media);
    
    return 0;
}