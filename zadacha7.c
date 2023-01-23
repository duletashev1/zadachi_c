#include <stdio.h>
#define MAX 10
int main ()
{
    int n;
    scanf("%d",&n);
    int niza[MAX][MAX];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&niza[i][j]);

        }

    }
    for (int i=0;i<n;i++){
        if(!(niza[i][i]%2))
            niza[i][i]+=2;
        for(int j=0;j<n;j++){
            printf("%d",niza[i][j]);

        }
        printf("\n");
    }
    return 0;
}
