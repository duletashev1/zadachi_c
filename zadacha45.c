//
// Created by Dule on 1/29/2023.
//
/*Да се напише функциска програма која како влезни аргументи прима една низа од симболи и два
дополнителни симболи. Функцијата треба да врати бројот на појавувања на двата симболи едно до
друго во влезната низа. Задачата да се реши само со покажувачи. Да не се прави разлика меѓу
големи и мали букви.
Пример: func(“otkako studentot otide vo citalna, nauci”,’o’,’t’); ќе врати резултат 3.
 */

#include <stdio.h>
#include <stdlib.h>
#define max 100
int broenje(char *niza,char c,char p){
    int r=strlen(niza),vk=0;
    for(int i=0;i<r;i++){
        if(toupper(*(niza+i))==toupper(c)&&toupper(*(niza+i+1))==toupper(p)){
            vk++;
        }

    }
    return vk;
}
int main()
{
    char niza[max];
    gets(niza);
    char c,p;
    scanf("%c %c",&c,&p);

    printf("%d",broenje(niza,c,p));
    return 0;
}
