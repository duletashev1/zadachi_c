//
// Created by Dule on 1/29/2023.
//
#include <stdio.h>
#include <stdlib.h>
/*Да се напише функција која како влезен аргумент прима низа од знаци. Функцијата треба да го
врати бројот на зборови во низата кои започнуваат со буквата „а“ или „А“.Зборовите во низата од
знаци се составени од алфанумерички знаци и меѓусебно се разделени со едно или повеќе празни
места и (или) интерпункциски знаци. */
#define max 100
int funkcija(char *niza1){
    int r =strlen(niza1),vozbor =0,vk=0,dt=0,posledno=1;
    for(int i=0;i<r;i++){
        if(isalnum(*(niza1+i))){

            vozbor=1;
            if(posledno==1){
                if(toupper(*(niza1+i))=='A')
                    dt++;
                posledno=0;
            }}
        else if(vozbor){
            vozbor=0;
            vk++;
            posledno=1;
        }

    }
    if(vk)vk++;
    return dt;

}
int main()
{
    char niza1[max];
    gets(niza1);
    printf("%d",funkcija(niza1));
    return 0;
}
