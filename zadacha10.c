#include <stdio.h>
/*Да се напише програма која дадена матрица ќе ја измени на начин, со тоа што елемнтите од
споредната дијагонала ќе имаат вредност еднаква на сумата на „жолтите“ полиња (обелжани на
сликат со правоаголник). Останатите полиња ќе останат непроменети. На крај да се отпечати
новодобиената матрица. Максималната димензија на матрицата е 10 x 10. */
#define MAX 100
int main ()
{
    int i, j, red, kol;
    int suma=0;
    int a[MAX][MAX], b[MAX][MAX];
    printf("Vnesi br. redovi: "); scanf("%d",&red);
    printf("Vnesi br. koloni: "); scanf("%d",&kol);
    for (i=0; i<red; i++)
    {
        for (j=0; j<kol; j++)
        {
            printf("a(%d%d)=",i,j); scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<red; i++)
    {
        for (j=0; j<kol; j++)
        {
            b[i][j]=0;
            b[i][j]+=a[i-1][j-1]+a[i+1][j+1]+a[i+1][j-1]+a[i-1][j+1];
        }
    }
    for (i=0; i<red; i++)
    {
        for (j=0; j<kol; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
