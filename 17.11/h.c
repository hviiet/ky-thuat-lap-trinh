#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 2; i < (int)(n / 2) + 1; i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            if (i > 2)
                for (int j = 2; j <= sqrt(i) + 1; j++)
                {
                    if (i % j == 0)
                    {
                        count++;
                    }
                }

            if (count == 0)
                printf("%d ", i);
        }
    }
    int count = 0;
    if (n > 2)
        for (int i = 2; i <= sqrt(n) + 1; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
    if (count == 0)
        printf("%d", n);
    return 0;
}