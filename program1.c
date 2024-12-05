// euclidean distance
#include <stdio.h>   
#include <math.h>
int main()
{
    // declare variables for the coordinates
    float x1, y1, x2, y2, distance;

    // input coordinates for first number
    printf("enter x-coordinates of the first point: ");
    scanf("%f", &x1);
    printf("enter y-coordinates of the first point: ");
    scanf("%f", &y1);

    // input coodinates for second number
    printf("enter x-coordinates of the second point: ");
    scanf("%f", &x2);
    printf("enter y-coordinates of the second point: ");
    scanf("%f", &y2);

    // calculate the eculidean distance
    distance = sqrt((x1 - x2) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // output the result
    printf("the eculidean distance is: %2f\n", distance);
   return 0;
}