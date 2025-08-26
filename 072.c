//write a program to calculate compound interest for given principal and amount.

#include<stdio.h>
int main () {

float principal, amount, compoundinterest;

 printf("enter amount:");
 scanf("%f", &amount);

 printf("enter principal");
 scanf("%f",&principal);

 compoundinterest = amount - principal;

 printf("compoundinterest = %.2f", compoundinterest);

 return 0;
}
