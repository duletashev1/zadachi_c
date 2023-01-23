#include <stdio.h>
/*Да се напише програма која дадена матрица ќе ја измени на начин што на крај матрицата ќе личи
на шаховска табла, со тоа што елементите во „црните“ полиња ќе добијат нулта вредност а
останатите ќе ја задржат старата вредност*/
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
            if((i+y)%2!=0){
                printf("%d",0);}
                else
                    printf("%d",niza1[i][y]);


        }
        printf("\n");
    }
    return 0;
}
