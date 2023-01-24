//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма во која од тастатура се внесува матрица (димензиите на матрицата се
внесуваат од тастатура, не поголеми од 50 x 50). Да се најде најголемиот елемент на матрицата и да
се испечати на која позиција се наоѓа.  */
#define max 10
int main ()
{
    int red,kolona;
    int suma=0,q=0,p=0;
    int q1=0,p1=0,maks=0,maks1=0;
    int n;
    int niza[max][max],niza1[max][max];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&niza[i][j]);

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            suma+=niza[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==(n-1)|| (i+j)<n)
                printf(" ");
            else
                printf("%d",suma);

        }
        printf("\n");
    }

    return 0;
}
