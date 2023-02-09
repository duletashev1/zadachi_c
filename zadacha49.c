//
// Created by Dule on 1/29/2023.
//
#include <stdio.h>
#include <stdlib.h>
/*88.
. Да се напише функција која како влезен аргумент прима низа од знаци. Функцијата треба да го
врати бројот на зборови во низата кои завршуваат со буквата „i“ или „I“. Зборовите во низата од
знаци се составени од алфанумерички знаци и меѓусебно се разделени со едно или повеќе празни
места и (или) интерпункциски знаци. */
#define max 100
int funkcija(char *niza1)
{
    int r=strlen(niza1),vozbor=0,posledno=1,poslednabukva=0,vk=0;
    for(int i=0; i<r; i++)
    {
        if(isalnum(*(niza1+i)))
        {
            vozbor=1;
            posledno=1;
            if(posledno)
            {
                poslednabukva=i;
            }
        }
        else if(vozbor)
        {
            vozbor=0;
            if(posledno)
            {
                if(toupper(*(niza1+poslednabukva))=='I')
                {
                    vk++;
                    posledno=0;
                }


            }
        }


    }
    if(toupper(*(niza1+poslednabukva))d=='I')vk++;
    return vk;
}


int main()
{
    char niza1[max];
    gets(niza1);
    printf("%d",funkcija(niza1));
    return 0;
}
