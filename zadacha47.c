//
// Created by Dule on 1/29/2023.
//
#include <stdio.h>
#define max 100
/*. N se vnesue, n broevi u niza, treba gi podredis prvo parnite posle neparni, parnite treba obratno da se pecatat od kako se podredeni.

INPUT:
5
2 7 6 1 4 9

Output:
4 6 2 7 1 9*/
int main() {
    int niza[max];
    int n;
    scanf("%d",&n);
    for(int y=0;y<n;y++){
        scanf("%d",&niza[y]);
    }
    for(int y=n-1;y>=0;y--){
        if(niza[y]%2==0){
            printf("%d",niza[y]);
        }


    }
    for(int y=n-1;y>=0;y--){
        if(niza[y]%2!=0){
            printf("%d",niza[y]);
        }


    }

    return 0;
}

