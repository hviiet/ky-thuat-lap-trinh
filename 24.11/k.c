#include <stdio.h>
int main()
{
    long double mod = 1000000009;
    long n, ans[100001] = {}, t = 0, x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%ld", &ans[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (ans[i] % 2 == 1)
        {
            long x = (ans[i] + 1) / 2;
            long long sum1 = 1;
            sum1 = (sum1 + 4 * (((x * (4 * x * x - 1)) / 3) - 1) - 6 * (x * x - 1) + 6 * ((ans[i] - 3) / 2 + 1));
            printf("%lld\n", sum1);
        }
        else
        {
            long x = (ans[i] / 2);
            long double sum2 = 0;
            sum2 = (8 * (x * ((x + 1) * (2 * x + 1)) / 3) - 6 * (x + 1) * x + 6 * ((ans[i] - 2) / 2 + 1));

            printf("%.lld\n", (long long)(sum2 / mod));
        }
    }
    return 0;
}