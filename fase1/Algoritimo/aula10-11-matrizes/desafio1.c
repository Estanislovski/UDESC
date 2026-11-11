#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mat[4][5] = {{10,7,5,3,10},{7,8,6,2,9},{1,4,7,6,7},{8,9,10,3,6}};
    float somalinha[4] = {0,0,0,0}, medianotas[4] = {0,0,0,0};
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            somalinha[i]+=mat[i][j];
        }
            }
    for(i = 0; i < 4; i++){
        medianotas[i] = somalinha[i] / 4.0;
        printf("A media das notas foi %.2f\n", medianotas[i]);
    }

    return 0;
}
