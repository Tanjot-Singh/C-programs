#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    printf("enter the value of x and y : ");
    scanf("%d %d", &x, &y);
    z = pow(x , y);
    printf("%d", z);

    return 0;
}
