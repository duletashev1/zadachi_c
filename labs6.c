//
// Created by Dule on 3/18/2023.
//
#include <stdio.h>
#include <string.h>

typedef struct FudballPlayer{
char nameOfPlayer[50];
int numberOfPlayer;
int numberOfGoals;
}FudballPlayer;
typedef struct FudbalTeam{
    char nameOfTeam[100];
FudballPlayer FudballPlayer[12];

}FudbalTeam;
void bestTeam(FudbalTeam *a,int n){
    int vkupnoGolovi;
    int max;
    int index;
    for(int i=0;i<n;i++){
        vkupnoGolovi=0;
        for (int j = 0; j < 11; ++j) {
            vkupnoGolovi+=a[i].FudballPlayer[j].numberOfGoals;
            if(max<vkupnoGolovi){
                max=vkupnoGolovi;
                index=i;
            }
        }
    }
    printf( "Najdobar tim e: %s ",a[index].nameOfTeam);
}
int main(){
FudbalTeam a[100];
int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%s",&a[i].nameOfTeam);
        for (int j = 0; j < 11; ++j) {
            scanf("%s %d %d",&a[j].FudballPlayer->nameOfPlayer,&a[i].FudballPlayer->numberOfPlayer,&a[i].FudballPlayer->numberOfGoals);

        }


    }
     bestTeam(a,n);
}