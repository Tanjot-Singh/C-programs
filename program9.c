// wap to check given number is even or odd using ternary operator
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("number is even") : printf("number is odd");

    return 0;
}