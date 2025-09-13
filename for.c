// WAP yo check if number is Palidrome by using for loop.1
#include<stdio.h>
int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  

    
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;

}