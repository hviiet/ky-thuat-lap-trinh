#include <stdio.h>
int main()
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    long count = 0;
    for (long i = a; i <= b; i++)
    {
        int ch = 0, le = 0;
        long temp = i;
        while (temp > 0)
        {
            int x = temp % 10;
            temp = (long)(temp / 10);
            if (x % 2 == 0)
                ch = ch + x;
            else
                le = le + x;
        }
        if (ch == le)
            count++;
    }
    printf("%ld", count);
    return 0;
}