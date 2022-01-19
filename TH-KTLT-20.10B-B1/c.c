#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int a)
{
    if (a < 2)
        return 0;
    int i;
    for (i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n;
    char s[11][100001];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%s", &s[i]);
    for (int i = 1; i <= n; i++)
    {
        int t = strlen(s[i]), tmp[200] = {}, count = 0;
        for (int j = 0; j < t; j++)
            tmp[int(s[i][j])]++;
        for (int j = 97; j <= 122; j++)
            if (tmp[j] > 0)
            {
                if (tmp[j] == 1)
                {
                    count++;
                    break;
                }
                else if (check(tmp[j]) == 0)
                {
                    count++;
                    break;
                }
            }
        if (count == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}