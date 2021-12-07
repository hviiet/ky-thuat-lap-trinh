#include <stdio.h>
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long x = 0, y = 0;
    if ((long long)((m - n) / 2) == ((m - n) / 2) && ((m - n) / 2) >= 0)
    {
        x = (long long)((m - n) / 2);
        if ((long long)((n - 2 * x) / 2) == ((n - 2 * x) / 2) && ((n - 2 * x) / 2) >= 0)
        {
            y = (long long)((n - 2 * x) / 2);
            printf("%lld %lld", x, y);
        }
        else
            printf("IMPOSSIBLE");
    }
    else
        printf("IMPOSSIBLE");
    return 0;
}