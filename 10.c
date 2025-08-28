//Q12 Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main (){
    int num;

    printf("enter an integer:");
    scanf("%d" , &num);

    if(num >= 0) {
     if(num == 0) {
        printf("num is zero\n");
     } else {
        printf("num is positive\n");
     }
}  else {
    printf("num is negtive\n");
}
return 0;
}