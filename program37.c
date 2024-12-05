// wap to perform to swap 1st and last digit of a given number
#include <stdio.h>
#include <math.h>

int main()
{
 int num, cnt = 0;//53798

    printf("Enter a number: ");
    scanf("%d", &num);

    // cnt =(int)log10(num)+1;     //find digits in given number using log10() function

    int temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        cnt++;
    }

    int firstD = num / pow(10, cnt - 1); // 5
    num = num % (int)pow(10, cnt - 1);   // 3798
   
    int lastD = num % 10;                // 8
    num = num / 10;                      // 379
    num = lastD * pow(10, cnt - 1) + num * 10 + firstD;
   
    printf("%d", num);

    return 0;
}
