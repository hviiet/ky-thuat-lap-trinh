#include <stdio.h>
long long c(int k, int n)
{
    if (k == n || k == 0)
        return 1;
    return c(k, n - 1) * n / (n - k);
}
int main()
{
    int k, n;
    scanf("%d %d", &k, &n);
    printf("%lld", c(k, n));
    return 0;
}