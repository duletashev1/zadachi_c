#include <stdio.h>
int faktoriel(int n){
    int i,f=1;
    if(n==0)return 1;
    else return n*faktoriel(n-1);
}
int main ()
{


    int n;
    scanf("%d",&n);
    printf("%d! = %d",n,faktoriel(n));

    return 0;
}

//faktoriel so fukncija sp rekurzija)
