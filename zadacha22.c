//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма која дадена матрица ќе ја промени на следниов начин:  */
#define max 10


int main ()
{
    int red,kolona;
    int suma=0,q=0,p=0;
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
            b[i][j]=a[n-1-i][n-1-j];
        }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
