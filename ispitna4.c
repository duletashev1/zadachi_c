//
// Created by Dule on 2/12/2023.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int polindrom(char *niza , int c){
    for(int i=0;i<c/2;i++){
        if(niza[i]!=niza[c-i-1])
            return 0;

    }
    return 1;
}
int specijalenznak(char *niza, int n){
    for(int i=0;i<n;i++){
        if(!isalnum(niza[i]))
            return 1;
    }
    return 0;
}
void cleann(char *str){
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
}


int p(char *niza){
    int c;
    c=strlen(niza);
    return c;
}
int main() {

    int n;
    int c;
    scanf("%d\n",&n);
    int maks=0;
    char niza[100];
    char maxline[100];
    char niza2[200];
    for(int i=0;i<n;i++){
        fgets(niza,100,stdin);

        cleann(niza);

        int n=strlen(niza);
        if(polindrom(niza,n)&& specijalenznak(niza,n))
            puts(niza);
    }

    return 0;
}
