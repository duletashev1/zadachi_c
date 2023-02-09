//
// Created by Dule on 2/8/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 100
/*Да се напише функција која од дадена низа знаци ќе ги исфрли знаците почнувајќи од n-тиот во
должина од k знаци. */
int zamena (char *a, char *b, int k, int n)
{
    int  p=strlen(a),j=0;
    for(int i=0;i<p;i++){
        if(i==(k-1)){
            while(i<n+k-1)i++;

        }
        *(b+j)=*(a+i);
        j++;


    }
    *(b+j)='\0';
}
void main () {
    char niza[MAX], niza1[MAX];
    int k, n;
    printf("Vnesi niza:\n");
    gets(niza);
    printf("Vnesi pozicii: "); scanf("%d %d", &k, &n);
    zamena (niza, niza1, k, n);
    printf("Nova niza:\n");
    puts(niza1);
}
