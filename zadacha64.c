//
// Created by Dule on 2/10/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 81
/*Да се напише програма која секој ред од дадена текстуална датотека
vlezna.txt ќе го копира во друга датотека izlezna.txt, така што пред секој
прочитан ред од датотеката vlezna.txt ќе додаде уште еден ред во кој ќе стои
бројот на знаци што ги содржи прочитаниот ред. Во секој ред може да има
најмногу 80 знаци.*/
int main(){
    char linija[MAX],*c;
    FILE *vlezna,*izlezna;
    if((vlezna=fopen("vlezna.txt","r"))==NULL){
        printf("Datotekata %s ne moze da se otvore","vlezna.txt");
        return -1;
    }
    if((izlezna=fopen("izlezna.txt","w"))==NULL)
    {
        printf("Datotekata%s ne moze da se otvore","izlezna.txt");

    }
    while ((fgets(linija, MAX, vlezna)) != NULL) {
        int br = strlen(linija);
        fprintf(izlezna, "%d\n%s", br, linija);
    }

    fclose(vlezna);
    fclose(izlezna);

    return 0;
}
