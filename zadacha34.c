//
// Created by Dule on 1/25/2023.
//
/*Да се напише програма која што ќе пресметува дали внесен цел број претствува полн квадрат на
друг цел број. Пример: 25 претставува полн квадрат на бројот 5. Проверката дали бројот е
полн квадрат да е реализира во посебна функција.
Упатство: Од бројот се одземаат последнователни непарни броеви се додека не се добие
вреднот z . Бројот на одземања е квадратниот корен.
Пример:         ;     J   
*/
#include <stdio.h>
int proverka(int n){
    int vk;
    int p=1;
    for(int i=1;i<=n;i+=2){
        n-=p;
        vk++;
        p+=2;

    }
    if(n==0){
        return vk;
    }
    else return 0;
}


int main ()
{
    int n;
    scanf("%d",&n);
    if(proverka(n)){
        printf("Brojot ima poln kvadrat\n");
        printf("toa e brojot %d\n",proverka(n)/2);
    }
    else printf("Brojot nema poln kvadrat");

    return 0;
}
