//
// Created by Dule on 1/25/2023.
//
/*77.
.. Да се напише функциска програма која како влезни аргументи прима две низи од знаци. Ако низите
содржат различен број на знаци, функцијата треба да врати -1. Ако бројот на знаци во двете низи е
еднаков, тогаш функцијата треба да го врати бројот на знаци во кои низите се разликуваат. Задачата
да се реши со помош на покажувачи.*/
#include <stdio.h>
#include <stdlib.h>
#define max 100
int promena(char *niza1,char *niza2){
int r=strlen(niza1),q=strlen(niza2),vk=0;
if(r!=q)
{
    return -1;

}
for(int i=0;i<r;i++){
    if((*(niza1+i))!=(*(niza2+i))){
       vk++;
       }
}
if(vk==0)return 0;
else return vk;
}
int main()
{
    char niza1[max], niza2[max];
    gets(niza1);
    gets(niza2);
    if(promena(niza1,niza2)==-1)printf("Nizite se razlicni po dolzina");
    if(promena(niza1,niza2)==0)printf("Nizite se identichni");
if(promena(niza1,niza2)&&promena(niza1,niza2)!=-1){
    printf("Nizite se razlikuvaat za %d elementi",promena(niza1,niza2));
}
    return 0;
}
