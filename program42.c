#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, val = 1;
    printf("enter the value of x for its power y: ");
    scanf("%d%d", &x, &y);

    for (int i = 0; i < y; i++)
    {
        val = val * x;
    }
    printf("%d", val);

    return 0;
}