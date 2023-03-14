//
// Created by Dule on 2/10/2023.
//
#include <stdio.h>
#include <string.h>
#define MAX 81
/*Да се напише програма која ќе ги прочита елементите од една матрица
сместена во текстуална датотека matrica1.txt. Во првиот ред од датотеката се
запишани бројот на редици и бројот на колони на матрицата. Секој елемент од
матрицата е реален број запишан во посебен ред од датотеката. Потоа
матрицата треба да се транспонира и да се запише во нова датотека
matrica2.txt на истиот начин.
input
3 4
2.1
3.2
4.3
5.4
1.1
2.2
3.3
4.4
6.0
5.5
3.9
1.8


output
4 3
2.1
1.1
6.0
3.2
2.2
5.5
4.3
3.3
3.9
5.4
4.4
1.8

*/
int main(){

    FILE *vlezna,*izlezna;
    if((vlezna=fopen("vlezna.txt","r"))==NULL){
        printf("Datotekata %s ne moze da se otvore","vlezna.txt");
        return -1;
    }
    if((izlezna=fopen("izlezna.txt","w"))==NULL)
    {
        printf("Datotekata%s ne moze da se otvore","izlezna.txt");

    }
    float a[100][100],b[100][100];
    int i,j,m,n;
    fscanf(vlezna,"%d %d",&m,&n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            fscanf(vlezna, "%f", &a[i][j]);

    for(i=0;i<m;i++){

        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    fprintf(izlezna,"%d %d\n",n,m);
    for(i=0;i<m;i++){

        for(j=0;j<n;j++){
            fprintf(izlezna,"%.2f",b[i][j]);
            fprintf(izlezna,"\n");
        }
    }
    return 0;
}
