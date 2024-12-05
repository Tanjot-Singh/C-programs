#include <stdio.h>
int main()
{
    char ch;
    printf("enter the alphbet : ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        printf(" It is a vowel");

    else
        printf(" it is a consonent");

    return 0;
}