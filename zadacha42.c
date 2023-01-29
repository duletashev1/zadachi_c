//
// Created by Dule on 1/27/2023.
//
#include <stdio.h>
#include <stdlib.h>
#define max 100
/*

.. Да се напише функциска програма што како влезни аргументи прима низа од броеви и број на
елементи во низата. Функцијата враќа 1 ако збирот на елементите од непарните позиции е поголем
од збирот на елементите од парните позиции, гледано оддесно налево, а во спротивно враќа 0.
Пример: 2, 4, 8, 7, 5, 7, 8, 4, 2
 */
int proverka(int *niza,int n){
    int zbirParni=0, zbirNeParni=0;

    for(int i=0;i<n;i+=2){
        zbirParni+=niza[i];
    }
    for(int i=1;i<n;i+=2){
        zbirNeParni+=niza[i];

    }
    if(zbirNeParni>zbirParni){
        return 1;
    }
    else return 0;
}

int main()
{
    int niza[max];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&niza[i]);

    }
    if(proverka(niza,n))
        printf("1");
    else printf("0");

    return 0;
}
