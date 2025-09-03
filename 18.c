//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include<stdio.h>

int main () {
    int day;
    printf("enter a day:");
    scanf("%d", & day);

    switch (day) {

        case 1: printf("sunday\n");
                break;
        case 2: printf("monday\n");
                break;
        case 3: printf("tuesday\n");
                break;
        case 4: printf("wednesday\n");
                break;
        case 5: printf("thrusday\n");
                break;
        case 6: printf("friday\n");
                break;
        case 7: printf("saturday\n");
                break;
    
    }
    return 0;
}

    

