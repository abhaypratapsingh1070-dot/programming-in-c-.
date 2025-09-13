/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main () {
    int num , original , reversed = 0 , remainder;

    printf("Enter a number:");
    scanf("%d",&num);

    original = num;

    for(; num!=0 , num/10;) {
      remainder = num%10;
      reversed = reversed*10 + remainder;
}

 if (original == reversed){
   printf("%dis a  Palindrome.\n" , original);
 }
   else {
    printf("%d is not a Palindrome.\n", original);
   } 
  return 0;
}