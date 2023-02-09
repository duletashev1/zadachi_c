//
// Created by Dule on 2/9/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100;
/*Да се напише програма која за дадена датотека чие име се задава во командната линија преку
тастатура ќе го испечати вкупниот број на знаци без празните места. Доколку името на датотеката
не е зададено преку командна линија, на екран да се испечати информција за грешка. */
int main ()

{

    char c;
    int p=0;
    FILE *dat;
    if((dat=fopen("io.txt","r"))==NULL){
        fprintf(stderr,"Ne mozam da ja pronajdam datotekata %s","io.txt");
        exit(0);
    }
    while((c=fgetc(dat))!=EOF){


        if(!(isspace(c))){
            p++;
        }


    }
    printf("%d",p);
    return 0;
}
