//Write a program to calculate simple interest for given principal, rate, and time.
# include<stdio.h>
int main () {
    int principal, rate, time, simpleInterest;

   printf("enter principal:");
   scanf("%d", &principal);

   printf("enter rate:");
   scanf("%d", &rate);

   printf("enter time (in year):");
   scanf("%d", &time);

   simpleInterest = principal*rate*time/100;

   printf("simpleInterest =%d", simpleInterest);

   return 0;
}

