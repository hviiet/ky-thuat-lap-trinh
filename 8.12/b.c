#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    int x2 = 0, x3 = 0, x5 = 0, x7 = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n = (long long)(n / 10);
        if (temp == 2)
            x2++;
        if (temp == 3)
            x3++;
        if (temp == 5)
            x5++;
        if (temp == 7)
            x7++;
    }
    printf("%d\n%d\n%d\n%d", x2, x3, x5, x7);
    return 0;
}