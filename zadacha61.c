#include <stdio.h>
#include <stdlib.h>
/*За дадена датотека, чие што име се задава од командна линија да се испечати вкупниот број на
зборови во секој ред кои почнуваат и завршуваат со иста буква. Да се провери дали името на
датотеката е зададено преку командна линија.*/


int main ()
{
    char prva=0,posledna=0,c;
    FILE *dat;
    int b=0;
    int zborovi=0;
    int vozbor=0;
    int len=0;
    if((dat=fopen("io.txt","r"))==NULL){
        fprintf(stderr,"Ne mozam da ja pronajdam datotekata %s","io.txt");
        exit(0);
    }
    while((c=fgetc(dat))!=EOF){
        if(isalnum(c)){
            if(vozbor==0){
                prva=c;
                vozbor=1;
            }
            posledna=c;

        }
        else if(vozbor){
            vozbor=0;
            if(prva==posledna)zborovi++;
        }


    }
    fclose(dat);
    printf("%d",zborovi);

    return 0;
}
