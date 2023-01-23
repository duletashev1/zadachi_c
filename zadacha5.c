#include <stdio.h>
/*Да се напише програма која дадена матрица ќе ја измени на начин што елементите од горната
половина на матрицата ќе си ги сменат местата со елементите од долната половина. */
#include <stdlib.h>
#define max 100
int main()
{

    int niza1[max][max];
    int p,q;
    int red,kolona;
    int temp;
    scanf("%d %d",&red,&kolona);
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona;y++){
            scanf("%d",&niza1[i][y]);

        }


    }
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona/2;y++){
            temp=niza1[i][y];
            niza1[i][y]=niza1[i][y+(kolona+1)/2];
            niza1[i][y+(kolona+1)/2]=temp;
        }


        }
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona;y++){
            printf("%d",niza1[i][y]);

        }
        printf("\n");

    }


    return 0;
}