#include <stdio.h>
#include <stdlib.h>

int main() {
    float n[10];
    int i, r = 10;

    for(i = 0; i < r; i++){
        printf("Digite o %iº número real: ", i + 1);
        scanf("%f", &n[i]);
    }

    printf("A ordem inversa dos numeros digitados é:\n");
    for(i = r - 1; i >= 0; i--){
        printf("%.2f\n", n[i]);
    }
    return 0;
}