//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма во која од тастатура се внесуваат елементите (целобројни вредности) на
матрица со димензии m х n (не поголеми од 100). Потребно е да се направи промена на матрицата
така што максималниот елемент ќе ја добие вредноста на сумата на останатите елементи во таа
редица.
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
            if(maks<a[i][j]){
                maks=a[i][j];
                q=j;
                p1=i;
            }
        }}
    for(int i=0;i<n;i++){
        q1+=a[i][q];

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(q==j&&p1==i){
                printf("%d ",q1);

            }
            else
                printf("%d ",a[i][j]);
        }

        printf("\n");
    }
    return 0;
}
