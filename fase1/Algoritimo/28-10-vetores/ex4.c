#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5], i;

    for(i = 0; i < 5; i ++){
        printf("Digite o %iº número: ", i + 1);
        scanf("%i", &n[i]);
    }
    for(i = 0; i < 5; i++){
        if(n[i] % 2 != 0){
            printf("%i\n", n[i]);
        }
    }
    return 0;
}