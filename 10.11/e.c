#include <stdio.h>
int main()
{
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
        printf("YES");
    else
        printf("NO");
    return 0;
}