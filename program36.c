// wap to perform the sum of 1st and last digit of a given number in c
#include <stdio.h>

int main()
{
    int num, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int num2 = num;

    last = num % 10;

    while (num >= 10)
    {
        num /= 10;
    }
    first = num;

    sum = first + last;

    printf("The sum of the first and last digits of %d is: %d\n", num2, sum);

    return 0;
}
