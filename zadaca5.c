//
// Created by Dule on 1/23/2023.
//
/*
.. Да се напише програма која дадена матрица ќе ја измени на начин што елементите од левата
половина на матрицата ќе си ги сменат местата со елементите од десната половина. */
#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{

    int niza1[max][max];
    int p,q;
    int red,kolona;
    scanf("%d %d",&red,&kolona);
    for(int i=0;i<red;i++){
        for(int y=0;y<kolona;y++){
            scanf("%d",&niza1[i][y]);

        }


    }