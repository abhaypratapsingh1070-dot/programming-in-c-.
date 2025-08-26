//Write a program to calculate simple interest for given principal, rate, and time.
# include<stdio.h>
int main () {
    float principal, rate, time, simpleInterest;

   printf("enter principal:");
   scanf("%f", &principal);

   printf("enter rate:");
   scanf("%f", &rate);

   printf("enter time (in year):");
   scanf("%f", &time);

   simpleInterest = principal*rate*time/100;

   printf("simpleInterest =%.4f", simpleInterest);

   return 0;
}

