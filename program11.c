// wap to find the greatest number between three numbers
#include <stdio.h>
int main()
{
    int a, b, c, G;
    printf("enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);

    G = (a > b) ? a : b;
    G = (G > c) ? G : c;

    printf("the largest number is %d", G);

    return 0;
}
// G=(a>b && a>c)? a: (b>C ? b:c);