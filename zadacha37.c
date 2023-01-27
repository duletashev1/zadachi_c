//
// Created by Dule on 1/25/2023.
//
#include <stdio.h>
#include <stdlib.h>
#define max 100
/*Да се напише функциска програма која ќе прими како аргумент две низи од знаци. Функцијата
треба од првата низа да ги отфрли сите знaци кои се сретнуваат во втората низа. Функцијата исто
така треба да го врати бројот на отфрлени знаци. */
int promena(char *niza1,char *niza2){
    int r=strlen(niza1),q=strlen(niza2),x,k=0;
    for(int i=0;i<r;i++){
        x=0;
        for(int j=0;j<q;j++){
            if((*(niza1+i))==(*(niza2+j)))
                x++;
        }
        if(x==0){
            ((*(niza1+k))=(*(niza1+i)));
            k++;
        }

    }
    (*(niza1+k))='\0';
    return r-k;
}
int main()
{
    char niza1[max], niza2[max];
    gets(niza1);
    gets(niza2);
    printf("\n%d isfrleni znaci\n",promena(niza1,niza2));
    printf("Nova niza:\n");
    puts(niza1);

    return 0;
}
