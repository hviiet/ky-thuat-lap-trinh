#include <stdio.h>
int main()
{
    int n = 0, ans[20], count = 0;
    scanf("%d", &n);
    if (n == 0)
        printf("0");
    while (n > 0)
    {
        count++;
        ans[count] = n % 2;
        n = (int)(n / 2);
    }
    for (int i = count; i > 0; i--)
        printf("%d", ans[i]);
    return 0;
}