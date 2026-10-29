#include <stdio.h>
#include <stdlib.h>

int main() {
    float chico = 150, juca = 110;
    int ano = 0;

    do{
        chico = chico + 2;
        juca = juca + 3;
        ano ++;
    } while(juca <= chico);

    printf("Quantidade de anos: %i\n", ano);
    return 0;
}