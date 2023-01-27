//
// Created by Dule on 1/25/2023.
//
/*Да се напише функциска програма која од непознат број на броеви внесени од тастатура ќе ги
изброи и испечати оние кои имаат непарен број на цифри. */
#include <stdio.h>
int brojNaCifri(int i){
    int vk=0;
    while(i!=0){
        vk++;
        i/=10;

    }
    if(vk%2!=0){
        return 1;

    }
    else return 0;
}

#define max 100
int main ()
{
    int n,m;
    int p[max];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        if(brojNaCifri(p[i])){
            printf("%d",p[i]);
        }
    }

    return 0;
}
