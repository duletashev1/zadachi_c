#include <stdio.h>
#include <string.h>
/*Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.

Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот*/
int polindrom(char *niza){
    int p=strlen(niza);
    for(int i=0;i<p/2;i++){
        if(niza[i]!=niza[p+i-1])
            return 0;
        return 1;

    }
}
int znak(char *niza){
    int p=strlen(niza),vk=0,vg=0;
    for(int i=0;i<p;i++){
        if(isalnum(niza[i]))vk++;
        if(ispunct(niza[i]))vg++;
    }
    if(vg>0&&vk>0)return 1;
    return 0;
}

int main() {
    int n,p,q,maks=0,maks_len=0;
    scanf("%d",&n);
    char niza[100][81];
    for(int i=0;i<n;i++){
        scanf("%s",&niza[i]);
        p=strlen(niza[i]);
        if(p>maks_len && polindrom(niza[i])&& znak(niza[i])){
            maks=i;
            maks_len=p;}

    }

    if(maks_len==0){
        printf("Nema!");

    }
    else
        printf("%s",niza[maks]);



    return 0;
}
