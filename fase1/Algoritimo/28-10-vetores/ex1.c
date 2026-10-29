#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5] = {0, 0, 0, 0, 0};
    int i;
    for(i = 0; i < 5; i++){
        printf("O valor do numero %i é %i\n", i + 1, n[i]);
    }
    
    for(i = 0; i < 5; i ++){
        n[i] = 0;
        printf("O valor do numero %i é %i\n", i + 1, n[i]);
    }
    return 0;
}