//
// Created by Dule on 1/25/2023.
//
/*Да се напише логичка функција што како влезен аргумент прима цел број. Функцијата проверува
дали производот на цифрите на бројот е прост број. Производот на цифрите на се определи во
посебна рекурзивна функција.*/
#include <stdio.h>
int prost(int n){
    int vk=0;
    for(int i;i<n;i++){
        if(n%i==0)
            vk++;
    }
    if(vk>2)return 0;
    else return 1;
}
int proivodNaCifiri(int n)
{

    int k=1,br;
    int rem,prod=1,num;
    while(n!=0){
        rem=n%10;
        prod*=rem;
        n/=10;


    }
    return prod;
}


int main ()
{
    int n;
    scanf("%d",&n);
    if( prost(proivodNaCifiri(n))){
        printf("Brojot e prost");
    }
    else printf("Brojot NE e prost");

    return 0;
}