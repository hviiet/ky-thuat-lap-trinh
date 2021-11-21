#include <stdio.h>
int main()
{
    int n = 0, count = 1;
    scanf("%d", &n);
    for (int i = 1; i < (int)(n / 2) + 1; i++)
        if (n % i == 0)
            count++;
    printf("%d", count);
    return 0;
}