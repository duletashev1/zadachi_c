//
// Created by Dule on 3/18/2023.
//
#include <stdio.h>
#include <string.h>
#define Pi 3.14;
typedef struct Point {
    int x;
    int y;
}Point;
typedef struct Circle{
    Point Centre;
    int radius;
}Circle;

int main(){
    Circle a[100];
    int n;
    float largestArea=0;
    float area=0;
    int index;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i].Centre.x);
        scanf("%d",&a[i].Centre.y);
        scanf("%d",&a[i].radius);

    }
    for (int i = 0; i < n; ++i) {
        area=a[i].radius*a[i].radius*Pi;
        if(largestArea<area){
            largestArea=area;
            index=i;
        }

    }
    printf("Largest circle has area of: %.2f with centre: (%d,%d)",largestArea,a[index].Centre.x,a[index].Centre.y );
}
