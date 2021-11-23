#include <stdio.h>
int main()
{
    int n = 0, count = 0, ar[100] = {};
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            while (n % i == 0)
            {
                n /= i;
                ar[count]++;
            }
        }
    }
    int ans = 1;
    for (int i = 1; i <= count; i++)
        ans = ans * (ar[i] + 1);
    printf("%d", ans);
    return 0;
}