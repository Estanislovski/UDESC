#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    float c;
    for (i = 50; i <= 70; i++){
        c = 5 / 9.0 * (i - 32);
        printf("%iºF equivale a %.2fºC\n", i, c);
    }
    return 0;
}