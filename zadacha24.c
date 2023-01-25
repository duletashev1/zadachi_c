//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма која во дадена матрица броевите кои се повторуват ќе ги замени со празно
место. */
#define MAX 10
int main ()
{
    int i, j, red, kol, k,q, x;
    int a[MAX][MAX];
    printf("Vnesi br. redovi: "); scanf("%d",&red);
    printf("Vnesi br. koloni: "); scanf("%d",&kol);
    for (i=0; i<red; i++)
    {
        for (j=0; j<kol; j++)
        {
            printf("a[%d%d]=",i,j); scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<red;i++)
    {
        for (j=0; j<kol; j++)
        {
            x=0;
            for (k=0; k<red; k++)
            {
                for (q=0; q<kol; q++)
                {
                    if (a[i][j]==a[k][q]) x++;
                }
            }
            if (x>1) printf(" \t");
            else printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
    return 0;