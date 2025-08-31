//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include<stdio.h>

int main () {
    char ch;

    printf("enter a character:");
    scanf("%c", & ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'U' || ch == 'O' || 
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o') {
        printf("vowel\n");
    } else {
        printf("consonant\n");
    }
    return 0;
}

