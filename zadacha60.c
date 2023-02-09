//
// Created by Dule on 2/9/2023.
//
#include <stdio.h>
#include <stdlib.h>
/*Да се напише програма која за дадена текстуална
датотека ке изброи колку зборови подолги од 3
букви почнуваат и завршуваат на иста буква. Да не
се прави разлика мегу голема и мала буква.
Зборовите се составени од произволен број на
букви, а мегусебно се одделени со најмалку еден
специјален знак, цифра или белина.*/
int main()
{
    char prva=0,posledna=0,c;
    FILE *dat;
    int b=0;
    int vozbor=0;
    int len=0;
    if((dat=fopen("io.txt","r"))==NULL){
        fprintf(stderr,"Ne mozam da ja pronajdam datotekata %s","io.txt");
        exit(0);
    }
    while((c=fgetc(dat))!=EOF){
        if(isalpha(c)){
            if(vozbor==0){
                vozbor=1;
                prva=c;
            }
            len++;
            posledna=c;
        }
        else {
            if(vozbor){
                vozbor=0;
                if(len>3&&toupper(prva)==toupper(posledna))
                    b++;
                len=0;
            }
        }
    }
    if(vozbor&&len>3 &&toupper(prva)==toupper(posledna))b++;
    printf("%d zborovi\n",b);
    return 0;
}
