// wap to check wheather the given year is leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("enter year : ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("it is leap year");
        else
            printf("it is not a leap year");
    }
    else if (year % 4 == 0)
        printf("it is a leap year");

    else
        printf("it is not a leap year");

    return 0;
}