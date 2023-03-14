#include <stdio.h>
#include <string.h>

typedef struct Vraboten {
    char nameOfEmploye[100];
    char embg[100];
    char odel[100];
    int plata;
} Vraboten;

typedef struct Comapany {
    char nameOfCompany[100];
    Vraboten vraboteni[100];
    int numberOfEmploye;
} Comapany;

int main() {
    Comapany comp[100];
    int num;
    scanf("%d",&num);
    for (int i = 0; i < num; i++) {
        scanf("%s %d", comp[i].nameOfCompany, &comp[i].numberOfEmploye);
        for(int j = 0; j < comp[i].numberOfEmploye; j++){
            scanf("%s %s %s %d", comp[i].vraboteni[j].nameOfEmploye, comp[i].vraboteni[j].embg,
                  comp[i].vraboteni[j].odel, &comp[i].vraboteni[j].plata);
        }
    }
    return 0;
}