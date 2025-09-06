

#include<stdio.h>

int main () {
    int sum = 0;

    for  (int i = 1; 1 <1000; i++) {
        if(i % 3 == 0 || i % 5 ==0) {
            sum += i;
        }
    }
    printf("sum of multiple of 3 or 5 below 1000 %d\n, sum");

    return 0;
}
