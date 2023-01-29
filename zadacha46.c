//
// Created by Dule on 1/29/2023.
//
#include <stdio.h>
#include <stdlib.h>
/*Да се напише функција:
void zamena (char* niza, char znak1, char znak2)
Функцијата треба во низата секоја појава на знакот znak1 да го замени со знакот znak2.
Пример: niza: ova e primer za niza, znak1: a, znak: A
 Излез: ovA e primer zA nizA.*/
#define max 100
void zamena(char *niza,char znak1,char znak2){
    int r=strlen(niza);
    for(int i=0;i<r;i++){
        if(*(niza+i)==znak1)
            (*(niza+i))=znak2;
    }

}
int main()
{
    char niza[max];
    gets(niza);
    char znak1;
    char znak2;
    scanf("%c %c",&znak1,&znak2);

    zamena(niza,znak1,znak2);
    puts(niza);
    return 0;
}
