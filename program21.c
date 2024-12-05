#include <stdio.h>
int main()
{
    char ch;

    printf("enter the value : ");
    scanf("%c",&ch);

    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    printf("it is alphbet");

    else if (ch>=48 && ch<=57)
    printf("it is a digit");

    else
    printf("it is special character");

    return 0;
}