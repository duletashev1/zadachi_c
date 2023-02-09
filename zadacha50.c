//
// Created by Dule on 1/29/2023.
//
#include <stdio.h>
#include <string.h>

/*Да се напише функција која прима две низи од знаци и еден цел број. Бројот претставув позиција
од првата низа на која се надоврзува втората низа во целина. По надоврзувањето првата низа ги
продолжува од прекинот.
Пример: niza1: Da se uci programski e lesno.
 niza2: ne_ pozicija: 21
 излезе: Da se uci programski ne e lesno. */
#define MAX 100
void promena(char *a, char *b, char *c, int poz)
{
    int n=strlen(a),m=strlen(b),j=0;
    for(int i=0;i<poz;i++){
        *(c+j)=*(a+i);
        j++;
    }
    for(int g=0;g<m;g++){
        *(c+j)=*(b+g);
        j++;}
    for(int q=poz;q<n;q++){
        *(c+j)=*(a+q);
        j++;
    }
    *(c+j)='\0';

}
int main ()
{
    char niza1[MAX], niza2[MAX], niza3[MAX], poz;
    printf("Vnesi niza 1:\n");
    gets(niza1);
    printf("Vnesi niza 2:\n");
    gets(niza2);
    printf("Vnesi pozicija: ");
    scanf("%d",&poz);
    promena (niza1, niza2, niza3, poz);
    printf("Nova niza:\n");
    puts(niza3);
    return 0;
}
