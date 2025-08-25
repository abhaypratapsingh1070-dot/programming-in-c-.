//Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main () {
    int num1, num2, temp;

    printf("enter first number (num1):");
    scanf("%d", &num1);
    
    printf("enter second number (num2):");
    scanf("%d", &num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("num1=%d, num2= %d", num1, num2);
    
    return 0;

    }
