//
// Created by Dule on 2/8/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 100
/*Да се напише функциска програма што ќе одредува колку пати еден знак се наоѓа во даден стринг.
Знакот за споредување и стрингот се внесуваат од тастатура. . */
int funkcija(char *niza,char p){
    int r=strlen(niza),vk=0;
    for(int i=0;i<r;i++){
        if(*(niza+i)==p){
            vk++;
        }


    }
    return vk;
}
int main () {
    char niza[MAX];
    char p;
    gets(niza);
    scanf("%c",&p);
    printf("%d",funkcija(niza,p));
}
