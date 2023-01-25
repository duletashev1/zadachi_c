//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*3311.
.. Да се напише програма со која една мтрица L2M, ќе се замени со еднодимензионална низа a2,.
Секој елемент на низата е соодветен елемент од матрицата. */
#define max 10


int main ()
{
    int red,kolona;
    int suma=0,q=0,k=0, p[max];
    int q1=0,p1=0,maks=0,maks1=0;
    int n;
    int a[max][max],b[max][max],c[max][max];
    printf("Vnesete go rangot na matricata:\n");
    scanf("%d",&n);
    printf("Vnesete gi elementite na matricata a:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            p[k]=a[i][j];
            k++;
        }}
    for(int k=0;k<n*n;k++){
        printf("%d\t",p[k]);
    }
    return 0;
}
