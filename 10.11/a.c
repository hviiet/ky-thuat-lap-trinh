#include <stdio.h>
int main()
{
    long x;
    scanf("%ld", &x);
    if (x % 2 == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}