// Greatest of Three Numbers in C using Switch Case
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("INPUT-1: ");
    scanf("%d", &a);

    printf("INPUT-2: ");
    scanf("%d", &b);

    printf("INPUT-3: ");
    scanf("%d", &c);

    switch (a > b && a > c)
    {
    case 1:
        printf("A is largest");
        break;
    case 0:
        switch (b > c)
        {
        case 1:
            printf("B is largest");
            break;
        case 0:
            printf("C is largest ");
            break;
        }
    }

    return 0;
}