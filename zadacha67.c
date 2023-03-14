//
// Created by Dule on 2/10/2023.
//
#include <stdio.h>
#include <ctype.h>
#define DOLZINA 21
/*Да се напише програма која за дадена текстуална датотека zborovi.txt ќе ги
отпечати на екран сите зборови во кои се појавуваат повеќе од две исти букви
(некоја буква се појавува три или повеќе пати). Да не се прави разлика помеѓу
мали и големи букви. На крајот треба да се отпечати и бројот на зборови што го
задоволуваат условот.
Секој ред во датотеката содржи по еден збор (зборовите се разделени меѓу себе
со знак за нов ред). Секој збор е составен само од букви. Максималната должина
на зборовите е 20 знаци*/
int ima_poveke_od2isti(char *w) {
    char *c;
    int isti;
    while (*w) {
        c = w + 1;
        isti = 1;
        while (*c) {
            if (tolower(*w) == tolower(*c))
                isti++;
            c++;
        }
        if (isti > 2)
            return 1;
        w++;
    }
    return 0;
}


int main() {
    char c;
    FILE *vlezna;
    char zbor[100];
    int vkupno=0;
    if ((vlezna = fopen("vlez.txt", "r")) == NULL) {
        printf("Datotekata %s ne se otvora.\n", "zborovi.txt");

        return -1;
    }
    while (fgets(zbor, 7, vlezna) != NULL) {
        if(ima_poveke_od2isti(zbor))
            vkupno++;
        puts(zbor);

    }
    fclose(vlezna);
    printf("%d",vkupno);
}
