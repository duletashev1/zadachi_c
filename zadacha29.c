//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
//Да се напише функциска програма која наоѓа збир на цифрите на еден природен број.
int brojNaCifri(int a){
    int zbir=0;
    if(a<10) return a;
    while(a){
        zbir+=a%10;
        a/=10;
    }
    return zbir;
}



int main ()
{


    int n;
    scanf("%d",&n);
    int p;
    printf("Rezultat: %d\n",brojNaCifri(n));

    return 0;
}
//
