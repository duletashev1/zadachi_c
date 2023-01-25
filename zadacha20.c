//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма во која се внесува квадратна матрица од цели броеви со максимална
големина од 10 х 10. Матрицата да се измени на таков начин што елементите од главната и
споредната дијагонала ќе си ги заменат своите места. На крај да се отпечати променетата матрица.
 */
#define max 10
int zbir_cifri(int n)
{
    if (n<10) return n;
    else return (n%10+zbir_cifri(n/10));
}
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
            if(i==j){
                printf("%d",a[i][n-1-i]);
            }
            else if(i+j==n-1)
                printf("%d",a[i][i]);
            else printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
