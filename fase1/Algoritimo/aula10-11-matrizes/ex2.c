#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][5] = {{1,2,3,4,5},{0,-1,0,-3,1},{2,-1,-2,2,0},{0,0,6,0,0}};
    int i, c, somalinha[4] = {0,0,0,0}, soma = 0;

    for(i = 0; i < 4; i++){
        soma = 0;
        for(c = 0; c < 5; c++){
            somalinha[i]+=mat[i][c];
        }
            }
    for(i = 0; i < 4; i++){
        printf("%i\n", somalinha[i]);
    }

    return 0;
}
