// a program to find and display the sum of the first n natural numbers.
 
#include<stdio.h>

int main() {
    int n, sum;
    printf("enter positive integer:");
    scanf("%d", &n);

    sum = n*(n+1)/2;

    printf(" sum of first %d natural numberis: %d\n", n, sum);

    return 0;
}
