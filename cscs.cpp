//
// Created by Dule on 1/23/2023.
//
#include <stdio.h>
#define max 100
int main() {
    int niza1[max][max];
    int p,q;
    int red,kolona;
    scanf("%d %d",&red,&kolona);
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona;y++){
            scanf("%d",&niza1[i][y]);

        }
    }
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona;y++){
            printf("%d",niza1[i][y]);

        }
    }
    return 0;
}