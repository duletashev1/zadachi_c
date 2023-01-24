//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се состави програма во која преку тастатура се внесува димензија на матрица како и
вредностите на матрицата (со димензија не поголема од 50 х 50). Потоа во програмата од
елементите на матрицата над споредната дијагонала треба да се најде елементот со најмала
вредност, а од елементите на матрицата под споредната дијагонала да се најде елементот со
најголема вредност. Елементите од споредната дијагонала да се заменат со сумата на двете
најдени вредности.   */
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
            if((i+j)>n)
                if(maks<niza[i][j]){
                    maks=niza[i][j];
                }

        }

    }
    maks1=maks;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)<(n-1))
                if(maks1>niza[i][j]){
                    maks1=niza[i][j];
                }

        }

    }
    suma=maks1+maks;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==(n-1)){
                printf("%d ",suma);
            }
            else
                printf("%d ",niza[i][j]);

        }
        printf("\n");
    }
    return 0;
}
