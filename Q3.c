//Q3.Determine and Output Whether Number N is Even or Odd

#include<stdio.h>

int main () {
    int N;
    printf("enter a number");
    scanf("%d", &N);

    if(N % 2 == 0) {
    printf("%d is even\n",N);
}
else {
    printf("%d is odd\n", N);
}
return 0;
}
