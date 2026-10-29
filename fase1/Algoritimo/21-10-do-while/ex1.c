#include <stdio.h>
#include <stdlib.h>

int main() {
    float n, qtepo = 0, qteneg = -1;
    do{
        printf("Digite um numero: ");
        scanf("%f", &n);
        if (n > 0){
            qtepo ++;
        }else{
            qteneg ++;
        }
    } while (n != 0);
    printf("Quantidade de positivos %.f\n", qtepo);
    printf("Quantidade de negativos %.f\n", qteneg);    
    return 0;
}