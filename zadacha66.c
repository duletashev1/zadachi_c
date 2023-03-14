//
// Created by Dule on 2/10/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 81
/*Дадена е текстуална датотека SP_primer.txt. Да се напише програма која ќе ја
прочита датотеката и на екран ќе го отпечати бројот на редови во кои има
повеќе од 10 самогласки, како и вкупниот број на самогласки во датотеката.
*/
int samoglaska(char c){
    c=toupper(c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return 1;
    return 0;

}
int main(){
    int samoglaski=0,p=0,soglaski=0,red=0,vkupno_sam=0;
    char c;
    FILE *vlezna,*izlezna;
    if((vlezna=fopen("vlezna.txt","r"))==NULL){
        printf("Datotekata %s ne moze da se otvore","vlezna.txt");
        return -1;
    }
    if((izlezna=fopen("izlezna.txt","w"))==NULL)
    {
        printf("Datotekata%s ne moze da se otvore","izlezna.txt");

    }
    while ((c=fgetc(vlezna))!= EOF){
        if(samoglaska(c)){samoglaski++;
            p++;}
        if(c=='\n')
            if(samoglaski>10)
                red++;
    }

    printf("Redovi so poveke od 10 samoglaski: %d\n vkupno samoglaski: %d",red,p);
    return 0;
}
