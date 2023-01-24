//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма која дадена матрица ќе ја измени на начин, со тоа што елемнтите од
споредната дијагонала ќе имаат вредност еднаква на сумата на „жолтите“ полиња (обелжани на
сликат со правоаголник). Останатите полиња ќе останат непроменети. На крај да се отпечати
новодобиената матрица. Максималната димензија на матрицата е 10 x 10. */
#define max 10
int main ()
{
    int red,kolona;
    int red_copy;
    int niza[max][max],niza1[max][max];
    scanf("%d %d",&red,&kolona);
    for(int i=0;i<red;i++){
        for(int j=0;j<kolona;j++){
            scanf("%d",&niza[i][j]);

        }


    }
    printf("Vnesete redica za kopiranje: ");
    scanf("%d",&red_copy);
    for(int i=0;i<red;i++){
        for(int j=0;j<kolona;j++){
            niza1[i][j]=niza[i][j];


        }
    }
    for (int i=0;i<red;i++){
        for(int j=0;j<kolona;j++){
            printf("%d",niza1[i][j]);
        }
        printf("\n");
    }
    for(int i=red_copy;i<red;i++){
        for(int j=0;j<kolona;j++){
            niza1[i+1][j]=niza[i][j];
        }
    }
    for(int j=0;j<kolona;j++){
        niza[red_copy][j]=niza[red_copy-1][j];
    }
    for (int i=0; i<=red; i++)
    {
        for (int j=0; j<kolona; j++)
        {
            printf("%d\t",niza1[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
