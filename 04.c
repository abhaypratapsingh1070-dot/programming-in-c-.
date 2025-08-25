//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main () {
    float radius, area , circumference;
    printf("enter radius:");
    scanf("%f", &radius);
5
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("area of cirle = %f\n" , area);
    printf("circumference of cirle = %f\n", circumference );

    return 0;
}