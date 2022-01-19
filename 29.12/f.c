#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", &s);
    int ans[10] = {}, n = strlen(s);
    for (int i = 0; i < n; i++)
        ans[(int)s[i] - 48]++;
    int sum = 0;
    for (int i = 0; i <= 9; i++)
    {
        sum = sum + i * ans[i];
    }
    if ((ans[0] == 0 && ans[5] == 0) || sum % 9 != 0)
        printf("-1");
    else
    {
        if (ans[0] > 0)
        {
            for (int i = 9; i >= 0; i--)
                for (int j = 1; j <= ans[i]; j++)
                    printf("%d", i);
        }
        else
        {
            ans[5]--;
            for (int i = 9; i >= 0; i--)
                for (int j = 1; j <= ans[i]; j++)
                    printf("%d", i);
            printf("5");
        }
    }
    return 0;
}