//
// Created by Dule on 3/10/2023.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int year;
    int month;
    int day;

}date;
void read(date *d){
    scanf("%d.%d.%d",&d->day,&d->month,&d->year);

}
int compare(date d1, date d2){
    if(d1.year>d2.year)return 1;
    else if(d1.year<d2.year)return -1;
    else {
        if(d1.month>d2.month)return 1;
        else if(d1.month<d2.month)return -1;
        else{
            if(d1.day>d2.day)return 1;
            else if(d1.day<d2.day) return -1;
            else return 0;
        }
    }
}
int days(date d1, date d2){
    int days = d1.day-d2.day;
    days+=(d1.month-d2.month)*30;
    days+=(d1.year-d2.year)*365;
    if(days<0){
        days*=-1;
    }
    return days;
}

int main()
{
    date d1;
    date d2;
    read(&d1);
    read(&d2);
    int res=compare(d1,d2);
    if(res==0){
        printf("Dates are equal\n");

    }
    else if(res>0){
        printf("The difference in days is %d daty",days(d1,d2));

    }
    else
        printf("The difference in days is %d daty",days(d1,d2));

    return 0;
}
