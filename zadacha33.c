//
// Created by Dule on 1/25/2023.
//
/*Да се напише програма која што за даден опсег ќе ги наоѓа и ќе ги изброи броевите кои го
задоволуваат условот да се “строго монотоно растечки“ или “строго монотоно опаѓачки“ и
соодветно ќе печати порака.
Пример: 123 е строго растечки број бидејќи сите цифри се последователни строго растечки
броеви, а бројот 321 е строго опаѓачки. Проверката да биде релизирана со посебни функции*/
#include <stdio.h>
int opagja(int n){
    int cifra,p=n%10,vk=0;
    while(n/10){
        n/=10;
        cifra=n%10;
        if(p<cifra){
            p=cifra;
            vk++;

        }
        else return 0;



    }
    return vk;
}

int raste(int n){
    int cifra,p=n%10,vk=0;
    while(n/10){
        n/=10;
        cifra=n%10;
        if(p>cifra){
            p=cifra;
            vk++;
        }
        else return 0;

    }
    return vk;

}
int main ()
{
    int n;
    scanf("%d",&n);
    if(raste(n))
        printf("Brojot monotono raste");
    else if (opagja(n))printf("brojot monotono opagja");
    else printf("brojot ne raste i ne opagja");
    return 0;
}
