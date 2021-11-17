#include <stdio.h>
int main()
{
    long a[3];
    scanf("%ld %ld %ld", &a[0], &a[1], &a[2]);
    long tg;
    for (long i = 0; i < 2; i++)
    {
        for (long j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {

                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    for (int i = 0; i < 3; i++)
        printf("%ld ", a[i]);
    return 0;
}