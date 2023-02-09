//
// Created by Dule on 2/9/2023.
//
#include <stdio.h>
#include <stdlib.h>
/*Да се напише програма која за дадена текстуална датотека “text.txt” ќе ги изброи зборовите.
Зборовите се составени од алфанумерички знаци и се одделени со најмалку едно празно место или
знаци за интерпункција.*/
int main ()
{
    char c;
    int broj_na_zborovi,vozbor;
    FILE *dat;
    broj_na_zborovi=0,vozbor=0;
    if((dat=fopen("io.txt","r"))==NULL){
        fprintf(stderr,"Datotekata ne moze da se otvori","io.txt");
        exit(0);
    }
    while((c=getc(dat))!=EOF){
        if(isalnum(c)){
            vozbor=1;

        }
        else if(vozbor){
            vozbor=0;
            broj_na_zborovi++;

        }

    }
    if(vozbor)broj_na_zborovi++;
    fclose(dat);
    printf("%d",broj_na_zborovi);

    return 0;
}
