#include <stdio.h>
int main()
{
    scanf("%d%d , &rowsize , &colsize");
    int arr[rowsize][colsize];
    prinf("enter array elements :");
    for (int i = 0; i < rowsize, i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < rowsize; i++)
    {
        sum += arr[i][j];
    }

    printf("sum of main diagonal is %d\n", sum);
    int sum1 = 0;

    for (int i = 0; j = colsize - 1; i < rowsize && j >= 0; i++, j--)
    {
        sum1 += arr[i][j];
    }
    printf("sum of diagonal is %d\n", sum1);
    return 0;
}