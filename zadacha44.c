//
// Created by Dule on 1/27/2023.
//
#include <stdio.h>
// Да се напише програма што ќе изброи колку елeменти од дадена низа се разликуваат од 0, се
//додека не се пронајде првата нула. Низата сигурно содржи 0
#include <string.h>
#define MAX 100
int promena(char *niza){
    int r=strlen(niza),vk=0;
    for(int i=0;i<r;i++){
        if((*(niza+i))!='0'){
            vk++;
        }
        if((*(niza+i))=='0')
            break;
    }
    return vk;
}
int main ()
{


    char niza[MAX];
    gets(niza);
    if(promena(niza))printf("razlicni od nula: %d",promena(niza));
    else printf("nema");
    return 0;
}
