//
// Created by Dule on 2/8/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 100
/*Да се напише програма која за дадена низа од знаци ќе провери дали низата е палиндром. Од
внесената низа, пред проверката дали е палиндром, да се исфрлат сите празни места и да не се
прави разлика помеѓу мала и голема буква.*/
int polindrom(char *niza){
    int r=strlen(niza), j=0,len;
    for(int i=0;i<r;i++){
        while(isspace(*(niza+i))&&i<r)i++;
        *(niza+j)=*(niza+i);
        j++;


    }
    *(niza+j)='\0';
    len=j;
    for(int i=0;i<len;i++ ){
        if(*(niza+i)!=(*(niza+len-1-i)))return 0;
        return 1;

    }
}
int main(){
    int niza[MAX];
    gets(niza);
    polindrom(niza);
    puts(niza);
    if(polindrom(niza)==1){
        printf("Nizata e polindrom");}
    else printf("Nizata ne e polindrom");



}
