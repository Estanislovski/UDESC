#include <stdio.h>
#include <stdlib.h>

int main() {
    float n[5];
    int i;

    for(i = 0; i < 5; i ++){
        printf("Digite o %iº número: ", i + 1);
        scanf("%f", &n[i]);
    }

    for(i = 4; i >= 0; i --){
        printf("%.2f\n", n[i]);
        //printf("O número na posição %i é %.2f\n", i, n[i]);
    }
    return 0;
}