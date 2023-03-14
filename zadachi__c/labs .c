//
// Created by Dule on 3/14/2023.
//
#include <stdio.h>
#include <string.h>
typedef struct date{
    int year;
    int month;
    int day;
}date;
int compare(date d1, date d2){
    if(d1.year>d2.year)return 1;
    else if(d1.year<d2.year)return -1;
    else {
        if(d1.month>d2.month)return 1;
        else if(d1.month<d2.month)return -1;
        else {if(d1.day>d2.day)return 1;
        else if (d1.day<d2.day)return -1;
        else return 0;
    }
}}
int days(date d1,date d2){
    int days =d1.day-d2.day;
    days+=(d1.month-d2.month)*30;
    days+=(d1.year-d2.year)*365;
    return days;
}
void read(date *d){
    scanf("%d.%d.%d\n",&d->day,&d->month,&d->year);
}
int main(){
date d1;
date d2;
    read(&d1);
    read(&d2);
    int res=compare(d1,d2);
    if(res==0){
        printf("Dates are equal");}
        else if(res>0){
            printf("The difference in days is %d days\n", days(d1,d2));


        }
        else printf("The difference in days is %0d days\n", days(d1,d2));


}
