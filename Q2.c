//Q2. find the largest among three different numbers entered by user

#include<stdio.h>

int main () {
    int num1 , num2 , num3;
    
     printf("enter three different number");
     scanf("%d %d %d", &num1 , &num2, &num3);

     if (num1 >= num2 && num1 >= num3) {
        printf("%d largest number\n", num1);
     }
     else if (num2 >= num1 && num2 >= num1) {
        printf("%d largest number \n", num2);
     }
     else {
        printf("%d largest number\n", num3);
     }
     return 0     
    }
