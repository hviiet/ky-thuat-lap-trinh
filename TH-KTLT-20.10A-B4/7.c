#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if (x % 3 == y % 3)
    {
        int tmp = x % 3;
        if (x >= tmp)
            x = x - tmp;
        if (y >= tmp)
            y = y - tmp;
        if (z >= tmp)
            z = z - tmp;
        printf("%d", tmp + (int)(x / 3) + (int)(y / 3) + (int)(z / 3));
    }
    else if (y % 3 == z % 3)
    {
        int tmp = y % 3;
        if (x >= tmp)
            x = x - tmp;
        if (y >= tmp)
            y = y - tmp;
        if (z >= tmp)
            z = z - tmp;
        printf("%d", tmp + (int)(x / 3) + (int)(y / 3) + (int)(z / 3));
    }
    else if (x % 3 == z % 3)
    {
        int tmp = x % 3;
        if (x >= tmp)
            x = x - tmp;
        if (y >= tmp)
            y = y - tmp;
        if (z >= tmp)
            z = z - tmp;
        printf("%d", tmp + (int)(x / 3) + (int)(y / 3) + (int)(z / 3));
    }
    else
        printf("%d", (int)(x / 3) + (int)(y / 3) + (int)(z / 3));
    return 0;
}