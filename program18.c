#include <stdio.h>
int main()
{
    int x;
    printf("enter the number : ");
    scanf("%d", &x);

    if (x == 1)
        printf("the day is monday ");


    else if (x == 2)
        printf("the day is tuesday");

    else if (x == 3)
        printf("the day is wednesday");

    else if (x == 4)
        printf("the day is thursday");

    else if (x == 5)
        printf("the day is friday");

    else if (x == 6)
        printf("the day is saturday");

    else if (x == 7)
        printf("the day is sunday");

    else
        printf("the day number is invalid ");

    return 0;
}