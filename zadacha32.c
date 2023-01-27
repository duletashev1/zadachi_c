//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
int fibonaci (int n)
{
    if ((n==1) || (n==2)) return 1;
    else return fibonaci(n-1)+fibonaci(n-2);
}
int main ()
{
    int n;
    printf("Vnesi broj n = "); scanf("%d",&n);
    printf("%d-tiot fibonaciev broj e %d\n",n, fibonaci(n));
    return 0;
}
