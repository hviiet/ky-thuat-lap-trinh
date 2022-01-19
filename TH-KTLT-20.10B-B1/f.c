#include <stdio.h>

long long power(long long a, long long b, long long mod)
{
    long long x = 1, y = a;
    while (b > 0)
    {
        if (b % 2)
        {
            x = (x * y) % mod;
        }
        y = (y * y) % mod;
        b /= 2;
    }
    return x % mod;
};

long long modular_inverse(long long n, long long mod)
{
    return power(n, mod - 2, mod);
};

long long nCr(long long n, long long k, long long mod)
{
    return (factorial[n]*((modular_inverse(factorial[k]*modular_inverse(factorial[n-k]))%mod))%mod;
};
int main()
{
    int t, n[101], s[101];
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
        scanf("%d %d", &n[i], &s[i]);
    for (int i = 1; i <= t; i++)
    {
        long long result = 0;
        for (int j = 1; j <= s[i]; j++)
            result = result + nCr(n[i] - j + 1, j, 1000000007);
        result = (result - s[i]) % 1000000007;
        printf("%lld", result);
    }
}