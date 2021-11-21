#include <stdio.h>
int main()
{
    int m, n, k, ans[40], count = 0;
    scanf("%d %d %d", &m, &n, &k);
    long long p = 1;
    while (n > 0)
    {
        count++;
        ans[count] = n % 2;
        n = (int)(n / 2);
    }
    for (int i = count; i > 0; i--)
    {
        p = p * p;
        p = p % k;
        if (ans[i] == 1)
        {
            p = p * m;
            p = p % k;
        }
    }

    printf("%lld", p);
    return 0;
}