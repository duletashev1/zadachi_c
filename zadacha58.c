//
// Created by Dule on 2/9/2023.
//
#include <stdio.h>
#include <stdlib.h>
/*Да се напише програма која за дадена текстуална датотека чие што име се внесува од командната
линија, ќе го одреди односот на самогласки и согласки.*/
int samoglaska(c){
    c=toupper(c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return 1;
    return 0;

}

int main ()
{
    char c;
    int broj_soglaski=0,broj_samoglaski=0;
    float br;
    FILE *dat;
    if((dat=fopen("io.txt","r"))==NULL){
        fprintf(stderr,"Ne mozam da ja pronajdam datotekata\n","io.txt");
        exit(0);



    }
    while((c=fgetc(dat))!=EOF)
    {
        if(isalnum(c)){
            if(samoglaska(c))broj_samoglaski++;
            broj_soglaski++;


        }
    }
    fclose(dat);
    br=(float)broj_samoglaski/broj_soglaski;
    printf("Odnosot: %d/%d= %f",broj_samoglaski,broj_soglaski,br);
    return 0;
}
