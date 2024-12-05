//WAP to find the factorial of given number using recursion 
#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) 
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(n);
        printf("Factorial of %d = %d\n", n, result);
    }

    return 0;
}
