// wap to perform the sum of all input number until user enter zero
#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        printf("enter number: ");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);
    printf("%d is the sum of all inputs", sum);
    return 0;
}