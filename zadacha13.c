//
// Created by Dule on 1/24/2023.
//
#include <stdio.h>
/*Да се напише програма која ќе пресмета средна вредност на елементите кои се наоѓаат
истовремено под главната и под споредната дијгонала на една квадратна матрица. */
#define max 10
int main ()
{
    int red,kolona;
    int suma=0,q=0;
    int n;
    int niza[max][max],niza1[max][max];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&niza[i][j]);

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)>(n-1)&&(i>j)){

                suma+=niza[i][j];
                q++;}
        }
    }
    printf("%d / %d =%.3f\n",suma,q,(float)suma/q);
    return 0;
}
