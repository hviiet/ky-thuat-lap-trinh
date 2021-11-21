#include <stdio.h>
int main()
{
    int x = 0, count = 0;
    do
    {
        if (x != 0)
            scanf("\n");
        scanf("%d", &x);
        if (x % 2 == 1 || x % 2 == -1)
            count++;
    } while (x != 0);
    printf("%d", count);
    return 0;
}