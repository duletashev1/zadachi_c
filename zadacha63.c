//
// Created by Dule on 2/9/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 100
/*Да се напише програма која за дадена текстуална датотека text.txt ќе го
одреди и отпечати на екран односот на самогласките и согласките
*/
int samoglaska(char c){
    c=toupper(c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return 1;
    return 0;
}
int main(){
    char c;

    int soglaski =0, samoglaski=0;
    FILE *dat;
    if((dat=fopen("io.txt","r"))==NULL){
        printf("Datotekata ne moze da se otvori");
        return -1;

    }

    while((c=fgetc(dat))!=EOF){
        if(samoglaska(c))samoglaski++;
        soglaski++;





    }
    fclose(dat);
    printf("Odnosot %d/%d==%f",samoglaski,soglaski,(float)samoglaski/soglaski);
    return 0;
}
