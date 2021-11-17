#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main()
{
    long a1, a2, b1, b2, c1, c2, n1, n2;
    scanf("%ld %ld\n%ld %ld\n%ld %ld", &a1, &a2, &b1, &b2, &c1, &c2);
    n1 = -(b2 - a2);
    n2 = (b1 - a1);
    long delta = n1 * (c1 - a1) + n2 * (c2 - a2);
    if (delta == 0)
    {
        printf("TOWARDS");
    }
    else if (a1 == b1)
    {
        if (a2 > b2 && c1 > a1)
            printf("LEFT");
        else if (a2 > b2 && c1 < a1)
            printf("RIGHT");
        else if (a2 < b2 && c1 > a1)
            printf("RIGHT");
        else if (a2 < b2 && c1 < a1)
            printf("LEFT");
    }
    else if (a2 == b2)
    {
        if (a1 > b1 && c2 > a2)
            printf("RIGHT");
        else if (a1 > b1 && c2 < a2)
            printf("LEFT");
        else if (a1 < b1 && c2 > a2)
            printf("LEFT");
        else if (a1 < b1 && c2 < a2)
            printf("RIGHT");
    }
    else
    {
        double y = a2 - (n1 / n2) * (c1 - a1);
        int pos = 0;
        if (c2 > y)
            pos = 0;
        else
            pos = 1;
        if (a1 > b1 && pos == 0)
            printf("RIGHT");
        else if (a1 > b1 && pos == 1)
            printf("LEFT");
        else if (a1 < b1 && pos == 0)
            printf("LEFT");
        else if (a1 < b1 && pos == 1)
            printf("RIGHT");
    }
    return 0;
}
