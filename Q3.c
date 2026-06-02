#include <stdio.h>
int main()
{
    int n, fac = 1;
    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("Factorial of a numbers=%d", fac);
    return 0;
}