//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
int prevrten(int n){
    int cifra,broj;
    broj=n%10;
    n/=10;
    while(n!=0){
        cifra=n%10;
        broj=broj*10+cifra;
        n/=10;

    }
    return broj;
}
#define max 100
int main ()
{
    int n,m;

    scanf("%d",&n);
    printf("%d",prevrten(n));

    return 0;
}
//prevrten broj