//
// Created by Dule on 2/12/2023.
//
/*адена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int checkIfVowel(char letter){
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
        return 1;
    return 0;
}
int main() {

    writeToFile();
    char letter;
    FILE *Filepointer=fopen("text.txt","r");
    int flag=1;
    char lastLetter;
    int counter=0;
    while(!feof(Filepointer)){
        letter=fgetc(Filepointer);
        if(letter<='Z'&&letter>='A'){
            letter+=32;

        }
        if(flag){flag=0;
            lastLetter=letter;
            continue;}


        if(checkIfVowel(lastLetter) && checkIfVowel(letter)){
            printf("%c%c\n",lastLetter,letter);
            counter++;
        }
        lastLetter=letter;
    }
    printf("%d",counter);
    fclose(Filepointer);


    return 0;
}
