//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
//Да се напише рекурзивна функциска програма која ќе пресметува најголем заеднички делител и
//најмал заеднички содржател на два дадени броја.
int NZD (int n, int m)
{
    int nzd;
    if (n==m) return n;
    else
    {
        if (n<m) return NZD(m-n,n);
        else return NZD(n-m,m);
    }
}
int main ()
{
    int n, m;
    scanf("%d %d",&n, &m);
    printf("NZD(%d,%d) = %d",n,m,NZD(n,m));
    printf("NZS(%d,%d) = %d",n,m,(m*n)/NZD(n,m));
    return 0;
}
