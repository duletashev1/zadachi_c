//
// Created by Dule on 2/12/2023.
//
#include <stdio.h>
#include <string.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    // vasiot kod ovde
    FILE * filePointer = fopen("dat.txt", "r");
    char longestString[100];
    int maxLength = 0;
    int counter=0;
    char maxlinija[100];
    int g;
    int h;


    while (!feof(filePointer)){
        char linija[100];

        fgets(linija,100,filePointer);
        int p =(int)strlen(linija);
        int ct=0;
        for(int i=0;i<p;i++){
            if(isdigit(linija[i]))
                ct++;

        }
        if(ct>=2){
            if(maxLength<p){
                maxLength=p;
                strcpy(maxlinija,linija);


            }

        }}
    int firstnumber;
    int secoundnumber;
    for(int i=0;i<maxLength;i++){
        if(isdigit(maxlinija[i])){
            firstnumber=i;
            break;}
    }
    for(int i=maxLength;i;i--){
        if(isdigit(maxlinija[i])){
            secoundnumber=i;
            break;}
    }


    for(int i=firstnumber;i<secoundnumber;i++){
        printf("%c",maxlinija[i]);
    }



    fclose(filePointer);

}
