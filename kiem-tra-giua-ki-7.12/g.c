#include <stdio.h>
int main()
{
    int ans[20], count = 0;
    char n[33];
    scanf("%s", &n);
    if (n[0] == 0)
        printf("0");
    // else
    //     while (n > 0)
    //     {
    //         count++;
    //         ans[count] = n % 2;
    //         n = (int)(n / 2);
    //     }
    // for (int i = count; i > 0; i--)
    //     printf("%d", ans[i]);
    return 0;
}