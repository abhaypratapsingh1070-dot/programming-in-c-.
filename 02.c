//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){

    float num1,num2,add,sub,div,multi;

    printf("Enter first no:");
    scanf("%f",&num1);

        printf("Enter second no:");
         scanf("%f",&num2);

    add=num1+num2;
    sub=num1-num2;
    div=num1/num2;
    multi=num1*num2;

     printf("sum=%f\n",add);
     printf("sub=%f\n",sub);
     printf("div=%f\n",div);
     printf("multi=%f\n",multi);


return 0;
}