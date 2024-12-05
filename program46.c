// wap to print the factorial of 1 to n number
#include <stdio.h>
int main()
{
    int n;
    printf("enter N :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int fact = 1;
        for (int j = i; j >= 1; j--)
        {
            fact = fact * j;
        }
        printf("\n %d", fact);
    }
    return 0;
}