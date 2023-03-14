//
// Created by Dule on 3/18/2023.
//
#include <stdio.h>
#include <string.h>
typedef struct Engine{
    int horsepower;
    int torque;
}Engine;
typedef struct Car{
    char name[100];
    int year;
    Engine engine[100];
}Car;
void PrintCar(int index,int index1,int n,Car *a){
    if(a[index].engine->torque>a[index1].engine->torque){
        printf("Manufacturer: %s\n",a[index].name);
    printf("Horsepower: %d\n",a[index].engine->horsepower);
    printf("Torque: %d\n",a[index].engine->torque);}

else{
printf("Manufacturer: %s\n",a[index1].name);
printf("Horsepower: %d\n",a[index1].engine->horsepower);
printf("Torque: %d\n",a[index1].engine->torque);}}

int main(){
    Car a[100];
    int n;
    int min=10000;
    int index;
    int index2;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&a[i].name);
        scanf("%d",&a[i].year);
        scanf("%d",&a[i].engine->horsepower);
        scanf("%d",&a[i].engine->torque);

    }
    for (int i = 0; i <n ; ++i) {


        if(min>a[i].engine->horsepower){
            min=a[i].engine->horsepower;
            index=i;
        }}
        for (int j = 0; j < n; ++j) {
            if(j!=index){
                if(min>a[j].engine->horsepower){
                    min=a[j].engine->horsepower;
                    index2=j;
            }

        }

    }
    PrintCar(index,index2,n,a);

}