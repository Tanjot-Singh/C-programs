#include <stdio.h>
int main()
{
    int x;
    printf("enter the number : ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("cube=%d", x * x * x);
    }
    else{
        printf("square=%d",x*x);
    }

    return 0;
}