#include "my_mat.h"
#include <math.h>
#include <stdio.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int fanctionA(int metrix[10][10] ){

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            scanf("%d", &metrix[i][j]);
        }
    }
    //printM(&metrix);

    for (int k=0; k<10; k++){
        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                int x= metrix[k][j];
                int y= metrix[i][k];                
                if (x==0 || y==0){
                    metrix[i][j]= metrix[i][j];
                }
                else{
                    metrix[i][j]= MIN(metrix[i][j], metrix[k][j]+metrix[i][k]);
                }
            }
        }
    }
    return 0;

}

int fanctionB(int metrix[10][10]){

    int i;
    int j;
    //printf("b- Enter i and j:");
    scanf("%d%d", &i, &j);
    //printf("valeu= %d\n",metrix[i][j]);
    if (metrix[i][j]!=0){
        printf("True\n") ;
    }
    else{
        printf("False\n") ;
    }
    return 0;
}

int fanctionC(int metrix[10][10]){
    
    int i;
    int j;
    //printf("c- Enter i and j:");
    scanf("%d%d", &i, &j);
    if (metrix[i][j]!=0){
        printf("%d\n", metrix[i][j]);
    }
    else{
        printf("%d\n", -1);
    
    }
    return 0;
}

