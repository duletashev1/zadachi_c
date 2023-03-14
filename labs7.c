//
// Created by Dule on 3/18/2023.
//
#include <stdio.h>
#include <string.h>
typedef struct Student{
    char name[100];
    int age;
    int marks[5];
    float averige;

}Student;
void calculate_average(Student *a, int index){
    int prosek=0;
    for(int i=0;i<5;i++){
        prosek+=a[index].marks[i];

    }
    printf("%f",(float)prosek/5);

}
int main(){
    Student a[100];
    int n;
    int najgolemzbir=0;
    int zbir=0;
    int index;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%s",&a[i].name);
        scanf("%d",&a[i].age);
        for (int j = 0; j < 5; ++j) {


            scanf("%d", &a[i].marks[j]);

        }


    }
    for (int i = 0; i < n; ++i) {
        zbir=0;
        for (int j = 0; j < 5; ++j) {
            zbir+=a[i].marks[j];
            if(najgolemzbir<zbir){
                najgolemzbir=zbir;
                index=i;
            }



        }

    }
    printf("Ime: %s\n",a[index].name);
    printf("Godini: %d\n",a[index].age);

    printf("Ocenki: ");
  for(int i=0;i<5;i++){
      printf("%d ",a[index].marks[i]);
  }
    printf("\n");
    calculate_average(a,index);
}