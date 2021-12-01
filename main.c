#include <stdio.h>
#include <math.h>
#include "my_mat.h"

int main(){

    char use;
    char d= 'D';
    //printf("Enter one char:");
    scanf("%c", &use);
    int metrix[10][10]= {0} ;
    while (use != d){
        if (use == 'A'){
            fanctionA(&metrix);
            for(int i=0; i<10; i++){
                for(int j=0; j<10; j++){
                    printf("%d ",metrix[i][j]);
                }
            }
        }
        if (use == 'B'){
            fanctionB(&metrix);
        }
        if (use == 'C'){
            fanctionC(&metrix);
        }
        //printf("Enter one char:");
        scanf("%c", &use);
    }

    return 0;
}