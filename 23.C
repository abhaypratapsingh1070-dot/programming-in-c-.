/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/


#include <stdio.h> 
int main() { 
char operator; 
double num1, num2; 

printf("Enter an operator (+, -, *, /): "); 
scanf(" %c" , & operator );

printf("Enter two numbers: "); 
scanf("%lf %lf", &num1, &num2); 

switch  (operator) {
case '+': 
printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); 
break; 

case '-': 
printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); 
break; 

case '*': 
printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); 
break; 

case '/': 
if (num2 != 0) 
printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2); 

else 
printf("Error! Division by zero.\n"); 
break;

default: 
printf("Invalid operator.\n"); 
}

    return 0; 

} 



