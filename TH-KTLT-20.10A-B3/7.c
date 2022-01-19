#include <stdio.h>
int main()
{
    long long a, b, c, d, max, min;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    max = a;
    min = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;
    printf("%lld %lld", max, min);
    return 0;
}