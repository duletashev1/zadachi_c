//
// Created by Dule on 2/10/2023.
//
#include <stdio.h>
#include <string.h>

int main() {
    char c;
    char p='X';
    char y='Y';
    int vk;
    FILE *dat;
    if((dat=fopen("input.txt","r"))==NULL){

        printf("programata ne se otvara");
        return -1;
    }
    while((c=fgetc(dat))!=EOF){

        if(isdigit(c)){
            if(c%2==0){
                printf("%c",p);
            }
            else printf("%c",y);


        }
        else
            printf("%c",c);
    }
//printf("%d",vk);
    fclose(dat);
    return 0;
}
