#include <stdio.h>
#include <math.h>

int main()
{
    long long n, count = 0;
    scanf("%lld", &n);
    if (n < 2)
    {
        printf("NO");
        return 0;
    }
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}