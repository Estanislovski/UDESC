#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[8], b[8], c[8], i;

    for(i = 0; i < 8; i++){
        a[i] = i + 10;
        b[i] = i + 1;
        c[i] = a[i] + b[i];
        printf("%i\n", c[i]);
    }
    return 0;
}