#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    int a[10][10];
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j){
                a[i][j] = 2 * i + 7 * j -2;
                //a[i][j] = 0;
            }else if(i == j){
                //a[i][j] = 1;
                a[i][j] = 3 * (i * i) - 1;
            }else{
                //a[i][j] = 0;
                a[i][j] = 4 * (i * i * i) -5 * (j * j) + 1;
            }
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%4i ", a[i][j]);
        }
        printf("\n");
    }
return 0;
}