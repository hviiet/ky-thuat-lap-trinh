#include <stdio.h>
#include <math.h>
int isprime(int n)
{
    int count = 0;
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i <= sqrt(n) + 1; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 2; i < (int)(n / 2) + 1; i++)

        if (isprime(i) == 1 && n % i == 0)
            printf("%d ", i);

    if (isprime(n) == 1)
        printf("%d", n);
    return 0;
}