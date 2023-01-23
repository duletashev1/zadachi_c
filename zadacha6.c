//
// Created by Dule on 1/23/2023.
//
#include <stdio.h>
/*Да се напише програма која ќе споредува дали збирот на парните брови од левата половина на
една матрица е еднков со збирот на непарните брови од десната половина на матрицата.
 */
#include <stdlib.h>
#define max 100
int main()
{

    int niza1[max][max];
    int p=0,q=0;
    int red,kolona;
    int temp;
    scanf("%d %d",&red,&kolona);
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona;y++){
            scanf("%d",&niza1[i][y]);

        }


    }
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona/2;y++){
            if(niza1[i][y]%2==0){
                p+=niza1[i][y];
            }


        }


    }

    for(int i=0;i<red;i++){
        for(int j=(kolona/2)+1;j<kolona;j++){
            if(niza1[i][j]%2!=0){
                q+=niza1[i][j];
            }


        }


    }
    printf("%d %d\n",p,q);
    if(p==q)printf("Matricata go ipolnuva uslovot");
    else printf("Matricata NE go ispolnuva uslovot");


    return 0;}
