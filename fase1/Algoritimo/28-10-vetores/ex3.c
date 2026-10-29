#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra[9] = {'S', 'A', 'O', ' ', 'B', 'E', 'N', 'T', 'O'};
    int i;

    for(i = 0; i < 9; i ++){
        printf("%c", letra[i]);
    }
    return 0;
}