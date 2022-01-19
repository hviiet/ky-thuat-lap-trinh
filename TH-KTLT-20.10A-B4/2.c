#include <stdio.h>
int res(int x)
{
    if (x < 2)
        return x;
    int n = x, sum1 = 0, sum2 = 0;
    while (n > 0)
    {
        int tmp = 1, i = 0;
        while (tmp * 2 <= n)
        {
            tmp = tmp * 2;
            i++;
        }
        if (i % 2 == 0)
            sum1 = sum1 + tmp;
        else
            sum2 = sum2 + tmp;
        n = n - tmp;
    }
    if (sum1 > sum2)
        return sum1 - sum2;
    else
        return sum2 - sum1;
}
int main()
{
    int t, x, ans[1001];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        ans[i] = res(x);
    }
    for (int i = 0; i < t; i++)
        printf("%d\n", ans[i]);
    return 0;
}