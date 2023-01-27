//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
//Да се напише програма што од зададен интервал ќе ги отпечати сите парови прости броеви што се
//разликуваат меѓу себе за 2. На крај да се отпечати и нивниот број.
int funkcija(int n){
    int x=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) x++;
    }
    if(x>2) return 0;
    else return 1;

}


int main ()
{
    int n,vk=0;
    scanf("%d",&n);
    int p;
    scanf("%d",&p);
    for(int i=n;i<p;i++){
        if(funkcija(i)&&funkcija(i+2)){
            printf("%d-%d ",i,i+2);
            vk++;
        }

    }
    printf("Ima %d parovi koi go ispolnuvaat uslovot",vk);
    return 0;
}

