//
// Created by Dule on 3/14/2023.
//
/*Да се напише програма во која од стандарден влез се внесува бројот N (бројот на трансакции), а потоа N трансакциски сметки и како резултат ги печати идентификацискиот број и вкупната сума (со провизија) на сите трансакции платени со кредитна картичка. Во случај да нема трансакција платена со кредитна картичка да се испечати "No credit card transaction".

Во структурата Трансакција (Transaction) треба да се чуваат следните информации:
- Идентификациски број (int)
- Платена сума (int)
- Провизија (int)
- Дали е платено со дебитна или кредитна картичка (0 - дебитна, 1 - кредитна)

Ограничување: 0 < N < 100

Структура на влезните податоци:
N
id1 sum1 commission1 type1
...
idn sumn Commissionn typen*/
#include <stdio.h>
#include <string.h>
typedef struct transaction{
    int id;
    int sum;
    int tax;
    int debitCard;
}transaction;

int main() {
    transaction d[100];
    int flag=0;
    int n;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&d[i].id,&d[i].sum,&d[i].tax,&d[i].debitCard);
        if(d[i].debitCard){

            printf("%d %d\n",d[i].id,d[i].sum+d[i].tax);
            flag=1;
        }
    }
    if(flag==0)
        printf("No credit card transaction");
    return 0;
}
