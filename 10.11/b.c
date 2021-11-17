#include <stdio.h>
int main()
{
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    if (a > b)
        a = b;
    if (a > c)
        a = c;
    printf("%ld", a);
    return 0;
}