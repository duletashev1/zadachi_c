//
// Created by Dule on 2/8/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 100
/*Да се напише функција која ќе враќа подниза од зададена текстуална низа определена од
позицијата и должината што како параметри се внесуват од тастатура. Поднизата започнува од
карактерот што се наоѓа на соодветната позиција во текстуалната низа броено од лево.*/
int promena(char *niza,int k,int n){
    int r=strlen(niza), j=0;
    for(int i=k-1;i<n+k-1;i++){
        *(niza+j)=*(niza+i);
        j++;
    }
    *(niza+j)='\0';

}
void main ()
{
    int niza[MAX];
    int k,n;
    printf("Vnesi niza:\n");
    gets(niza);
    printf("Vnesi pozicija:\n");
    scanf("%d",&k);
    printf("Vnesi dolzina:\n");
    scanf("%d",&n);
    promena(niza,k,n);
    puts(niza);

}
