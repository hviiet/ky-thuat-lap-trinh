#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n = n * n;
    printf("%d", (int)(n / 2) + (int)(n / 3) - (int)(n / 6));
    return 0;
}