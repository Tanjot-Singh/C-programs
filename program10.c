// wap to find the greatest number amoung two using ternary operator
#include <stdio.h>
int main()
{
    int a, b, res;
    printf("enter two number :");
    scanf("%d %d", &a, &b);
    res = (a > b) ? a : b;
    printf("largest number is %d", res);

    return 0;
}