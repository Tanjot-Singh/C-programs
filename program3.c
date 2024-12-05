// area and perimeter of circle
#include <stdio.h>
int main()
{

    float area, radius, per;
    printf("enter the radius of circle");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    per = 2 * 3.141 * radius;

    printf("area of circle = %f\n", area);
    printf("perimeter of circle = %f\n", per);

    return 0;

    // we can also make pie as a constant variable as 'const float pi=3.141'
}