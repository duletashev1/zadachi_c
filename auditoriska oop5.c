//
// Created by Dule on 3/10/2023.
//
#include<stdio.h>
typedef struct city{
    long population;
    char name;

}city;
typedef struct president{
    char name[20];
    char party[20];
}president;
typedef struct county{
    char name[30];
    president president;
    long population;
    city capital;

}county;


int main() {
    county d[20];
    int n,i,maxi,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&d[i].name);
        printf("presedient: \n");
        scanf("%s",&d[i].president.name);
        scanf("%s",&d[i].president.party);
        scanf("%d",&d[i].population);
        scanf("%s",&d[i].capital.name);
        scanf("%d",&d[i].capital.population);

    }
    maxi=0;
    max=d[maxi].capital.population;
    for(int i=0;i<n;i++){
        if(d[i].capital.population>max){
            max=d[i].capital.population;
            maxi=i;
        }}
    printf("Name of the president of the county with the largest capital is: %s \n",d[maxi].president.name);

}
