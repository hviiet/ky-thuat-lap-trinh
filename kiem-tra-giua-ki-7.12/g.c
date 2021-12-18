#include <stdio.h>
#include <string.h>
int main()
{
    int ans[20], count = 0;
    long long n;
    scanf("%lld", &n);
    int d = 0;
    if (n < 0)
    {
        d = 1;
        n = -n;
    }
    {
        while (n > 0)
        {
            count++;
            ans[count] = n % 2;
            n = (int)(n / 2);
        }

        for (int i = count; i > 0; i--)
            printf("%d", ans[i]);
    }
    return 0;
}