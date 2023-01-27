//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
//
void funkcija(int n){
    int c=0;
    int prvDel=n/100;
    int vtorDel=n%100;
    int zbir=prvDel+vtorDel;
    for(int i=1000;i<=9999;i++){
        if(i%zbir==0){
            printf("%d\n",i);
            c++;
        }
    }
    printf("Zbir na broevi: %d",c);
}
int main ()
{
    int n;
    scanf("%d",&n);
    funkcija(n);
    return 0;
}

