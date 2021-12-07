#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 0; i <= n; i++)
    {
        long x = 0;
        scanf("%ld", &x);
        sum = sum + x;
    }
    long k;
    scanf("&ld", &k);
    if (k == sum)
        printf("YES");
    else
        printf("NO");
    return 0;
}