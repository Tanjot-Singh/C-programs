// wap to check a given number is armstrong or not
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, rem, result = 0, n = 0;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Determine the number of digits in the number
    while (originalNum != 0)
    {
         originalNum /= 10;
        n++;
    }

    originalNum = num; // Reset originalNum to its original value

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0)
    {
        rem = originalNum % 10; // Get the last digit
        result += pow(rem, n);  // Raise to the power of n and add to result
        originalNum /= 10;      // Remove the last digit
    }

    // Check if the calculated result is equal to the original number
    if (result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
