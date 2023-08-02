#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n);
    return 0;

    if (n>=1)
        return 0;
    else
        return 1;
}

