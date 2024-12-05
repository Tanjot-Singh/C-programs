#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter 5 digit number ; ");
    scanf("%d", &num);

    sum = sum + num % 10;
    num = num / 10;
    sum = sum + num % 10;
    num = num / 10;
    sum = sum + num % 10;
    num = num / 10;
    sum = sum + num % 10;
    num = num / 10;
    sum = sum + num % 10;
    num = num / 10;
    printf("sum of digits = %d", sum);

    return 0;
}