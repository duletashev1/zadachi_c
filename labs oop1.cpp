#include<stdio.h>
#include<string.h>
typedef struct {
    char ime[100];
    char embg[100];
    char ime_odel[100];
    int plata;
}Employee;
typedef struct {
    char ime[100];
    Employee employee[20];
    int brvraboteni;
}Company;
void printEmployeesBelowAverageSalary(Company *comp,int numCompanyes){
    int sum=0,prosek=0;

    for(int i=0;i<numCompanyes;i++){
        for(int j=0;j<comp[i].brvraboteni;j++){
            sum=sum+comp[i].employee[j].plata;

        }
        prosek=sum/comp[i].brvraboteni;
        for(int j=0;j<comp[i].brvraboteni;j++){
            if(comp[i].employee[j].plata<prosek){
                printf("%s %s %s %d\n",comp[i].employee[j].ime,comp[i].employee[j].embg,comp[i].employee[j].ime_odel,comp[i].employee[j].plata);


            }
        }
    }

}
void printHighestSalaryEmployee(Company * comp,int numCompanyes,char *department){

    int pozicijai=0;
    int pozicijaj=0;
    for(int i=0;i<numCompanyes;i++){
        int max=comp[i].employee[0].plata;
        for(int j=0;j<comp[i].brvraboteni;j++){
            if(max<comp[i].employee[j].plata && strcmp(comp[i].employee[j].ime_odel,department)==0 ){
                max=comp[i].employee[j].plata;
                pozicijai=i;
                pozicijaj=j;
            }

        }
    }
//	printf("%s %s %s %d",comp[i].employee[j].ime,comp[i].employee[j].embg,comp[i].employee[j].embg,comp[i].employee[j].ime_odel,comp[i].employee[j].plata);


}
int main(){

    int numCompanyes;
    scanf("%d",&numCompanyes);
    Company comp[100];

    for(int i=0;i<numCompanyes;i++){
        scanf("%s",comp[i].ime);
        scanf("%d",&comp[i].brvraboteni);
        for(int j=0;j<comp[i].brvraboteni;j++){
            scanf("%s",comp[i].employee[j].ime);
            scanf("%s",comp[i].employee[j].embg);
            scanf("%s",comp[i].employee[j].ime_odel);
            scanf("%d",&comp[i].employee[j].plata);
        }
    }
    printEmployeesBelowAverageSalary(comp,numCompanyes);
    char department[100];
    scanf("%s",department);
    printHighestSalaryEmployee(comp,numCompanyes,department);
}
