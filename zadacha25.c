//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
int faktoriel(int n){
    int i,f=1;
    if(n==0)return 1;
    for( i=1;i<=n;i++)
        f*=i;
    return f;
}
int main ()
{


    int n;
    scanf("%d",&n);
    printf("%d! = %d",n,faktoriel(n));

    return 0;
}

//faktoriel so fukncija (bez rekurzija)
