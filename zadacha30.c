//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
int stepen(int x,int a){
    if(x==0)return 1;
    return a*stepen (x-1,a);


}
int main ()
{


    int n;
    scanf("%d",&n);
    int p;
    scanf("%d",&p);
    printf("Rezultat: %d\n",stepen(n,p));

    return 0;
}
//Да се напише функциска програма која ќе пресметува x-ти степен на даден број a.

