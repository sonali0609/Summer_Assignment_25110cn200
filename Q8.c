#include <stdio.h>
int main()
{
    int n, digit, original, rev = 0;
    printf("Enter a number:");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (original == rev)
    {
        printf("PALINDROME NUMBER");
    }
    else
    {
        printf("NOT A PALINDROME NUMBER");
    }
    return 0;
}