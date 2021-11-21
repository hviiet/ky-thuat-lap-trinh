#include <stdio.h>
int main()
{
    int n;
    int k = 0, num[10] = {};
    scanf("%lld", &n);
    int m = n;
    while (n > 0)
    {
        k++;
        num[k] = n % 10;
        n = (long long)(n / 10);
    }
    int sum = 0;
    for (int i = k; i > 0; i--)
    {
        int luyThua = 1;
        for (int j = 1; j <= k; j++)
        {
            luyThua = luyThua * num[i];
        }
        sum = sum + luyThua;
    }
    if (sum == m)
        printf("YES");
    else
        printf("NO");
    return 0;
}