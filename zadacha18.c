//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се состави програма во која преку тастатура се внесуваат елементие на две матрици А и В со ист
број на редици и колони, не повеќе од 50 х 50. Потоа е генрира трета матрица С со ист број редици
и колони како А и В. Секој елемент од матрицата C[I,j] има вредност 0 или 1 во зависност од тоа
дали елементот A[I,j] е квадрат на B[I,j]. Резултантната матрица С се печати на екран.
  */
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
    printf("Vnesete gi elementite na matricata b:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (sqrt(a[i][j])==b[i][j]){
                printf("1",c[i][j]);

            }
            else printf("0",c[i][j]);

        }
        printf("\n");
    }

    return 0;
}
