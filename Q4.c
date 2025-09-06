//Q4.Generate even numbers between 100 and 200

#include<stdio.h>

int main () {
    int i;
    printf("even number between 100 and 200:\n");

    for(i=100; i <= 200; i++) {
        if (i % 2 == 0) { 
           printf("%d", i); 
        }
    }

return 0;
}
