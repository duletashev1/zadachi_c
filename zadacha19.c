//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма која ќе определи и ќе испише на екран дали збирот на парните елементи
кои лежат над главната дијагонала е еднаков со збирот на непарните елементи кои лежат под
споредната дијагонала на една квадратна матрица. Квадратната матрица како и нејзината
димензија ја внесува корисникот преку тастатура.

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
            if((i+j)>=n){
                if(a[i][j]%2!=0)
                    printf("%d",a[i][j]);
                p+=a[i][j];
            }

        }}
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j)
                if(a[i][j]%2==0)
                    printf("%d\n",a[i][j]);
            p1+=a[i][j];
        }}
    if(p1==p){
        printf("Zbirot e ist");}
    else
        printf("Zbirot e razlichen");

    return 0;
}
