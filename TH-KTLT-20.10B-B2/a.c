#include <stdio.h>
int main()
{
    int n, a = 1, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tmp = a;
        a = 0;
        a = b;
        b = b + tmp;
    }
    printf("%d %d", a, b);
    return 0;
}