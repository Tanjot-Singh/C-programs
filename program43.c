// wap to check wheather the number is prime or not
#include <stdio.h>

int main()
{
    int num, i = 2, cnt = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            cnt = 1;
            break;
        }
        i++;
    }

    if (cnt == 0)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
