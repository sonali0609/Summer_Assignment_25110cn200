#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d", i);
            n = n / i;
        }
    }

    return 0;
}