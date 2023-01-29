//
// Created by Dule on 1/27/2023.
//
#include <stdio.h>
#include <stdlib.h>
#define max 100
/*
Да се напише функциска програма што како влезни аргументи прима низа од знаци. Функцијата
враќа 1 ако низата го дава истиот стринг читано одлево надесно и одесно налево, во спротивно
враќа 0
пример: adv37465.?fr@rf?.56473vda
 */

int proverka(char *niza){
    int r=strlen(niza);
    for(int i=0;i<r/2;i++){
        if((*(niza+i))==(*(niza+r-i-1)))
            return 1;

    }
}
int main()
{
    char niza[max];
    gets(niza);
    if(proverka(niza)==1){
        printf("nizata e polindrom");
    }
    else printf("nizata NE e polindrom");

    return 0;
}
