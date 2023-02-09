//
// Created by Dule on 2/8/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 100
/*Да се напише процедура која влезната низа D  [[[ ,n ќе ја трансформира во излезна низа
!D ![[[ !,n на следниот начин*/


int polindrom(int *niza,int *niza2,int p){
    int r=strlen(niza);
    for(int i=0;i<p;i++){
        *(niza2+i)=*(niza+i)+*(niza+p-i-1);

    }
}
int main(){
    int niza[MAX],niza2[MAX];
    int p;
    scanf("%d",&p);
    for (int i=0;i<p;i++){
        scanf("%d",&niza[i]);


    }
    polindrom(niza,niza2,p);
    for(int i=0;i<p;i++){
        printf("%d ",niza2[i]);
    }

}
