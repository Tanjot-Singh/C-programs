#include <stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d", &a);

    if (a >= 0 && a <= 9)
        printf("it is single digit");

    else if (a >= 10 && a <= 99)
        printf("it is double digit");

    else if (a >= 100 && a <= 999)
        printf("it is triple digit");

    else
        printf("it is more than three digit");

    return 0;
}