#include <stdio.h>
int main()
{
    long n, x1, x2, x3;
    scanf("%ld", &n);
    x1 = n;
    x2 = n;
    x3 = n;
    if (n % 2 == 1)
        printf("NO");
    else
    {
        x3 = x3 + (long)x1 / 2;
        x1 = (long)x1 / 2;
        if (x3 % 2 == 1)
        {
            printf("NO");
            return 0;
        }
        x2 = x2 + (long)x3 / 2;
        x3 = (long)x3 / 2;
        if (x2 % 2 == 1)
        {
            printf("NO");
            return 0;
        }
        x1 = x1 + (long)x2 / 2;
        x2 = (long)x2 / 2;
        printf("%ld %ld %ld", x1, x2, x3);
    }
    return 0;
}