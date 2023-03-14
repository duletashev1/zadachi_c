//
// Created by Dule on 3/10/2023.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct vector{
    float x;
    float y;
    float z;

} vector;
float scalar_product(vector v1, vector v2) {
    return v1.x * v2.x + v1.y + v2.y + v1.z * v2.z;
}
vector vector_product(vector v1,vector v2){
    vector v;
    v.x = v1.y * v2.z - v1.z * v2.y;
    v.y = v1.z * v2.x - v1.x * v2.z;
    v.z = v1.x * v2.y - v1.y * v2.x;
    return v;


}

int main()
{
    vector v1 = { 2, 4, 6 };
    vector v2 = { 3, 5, 9 };
    vector v = vector_product(v1, v2);
    printf("v1 * v2 = %.2f\n", scalar_product(v1, v2));
    printf("v1 x v2 = [%.2f, %.2f, %.2f]\n", v.x, v.y, v. z);
    return 0;

    return 0;
}
