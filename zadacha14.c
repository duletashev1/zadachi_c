//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма во која од тастатура се внесува матрица (димензиите на матрицата се
внесуваат од тастатура, не поголеми од 50 x 50). Да се испечати бројот кој се наоѓа на позиција на
пресек на редицата и колоната што имаат најголем производ на елементите. */
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
        p=1;
        for(int j=0;j<n;j++){
            p*=niza[i][j];
            if(maks<p){
                maks=p;
                q=i;

            }


        }
    }
    for(int j=0;j<n;j++){
        p1=1;
        for(int i=0;i<n;i++){
            p1*=niza[i][j];
            if(maks1<p1){
                maks1=p1;
                q1=i;

            }


        }
    }
    printf("%d",niza[q][q1]);
    return 0;
}
