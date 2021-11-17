#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    if (n % 100 == 0 && n % 400 == 0)
        printf("YES");
    else if (n % 4 == 0 && n % 100 != 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}