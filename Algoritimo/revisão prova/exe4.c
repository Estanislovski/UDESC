#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;

    printf("\nDigite a 1ª nota: ");
    scanf("%f", &n1);
    printf("\nDigite a 2ª nota: ");
    scanf("%f", &n2);
    printf("\nDigite a 3ª nota: ");
    scanf("%f", &n3);
    printf("\nDigite a 4ª nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 7){
        printf("\nSua média foi %.2f, portanto, você esta Aprovado!\n", media);
    }else if(media < 5){
        printf("\n Sua média foi %.2f, portanto, você esta em Dependência!\n", media);
    }else{
        printf("Sua média foi %.2f, portato, você esta em Recuperação!\n", media);
    }

    return 0;
}