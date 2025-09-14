/* Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<stdio.h>
int main () {
    int num , original ,  digit , product =1;
    
     printf("Enter a number:");
     scanf("%d" , & num);

     original = num;

     while (num != 0) {
        digit = num %10;
        if (digit % 2 != 0) {
            product *= digit;
        }
     }
     
     if (product ==1)
     printf("No Odd digit\n");

     else 
     printf("Product of odd digits = %d\n" , product);

     return 0;
    
}