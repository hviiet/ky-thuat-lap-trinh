#include <stdio.h>
#include <math.h>
#include <string.h>

int ktra(long long a)
{
    if (a < 2)
        return 0;
    for (int i = 2; i <= sqrt(a); i++)
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
        int dem = 0;
        int b[200] = {};
        int t = strlen(s[i]);
        for (int j = 0; j < t; j++)
        {
            b[(int)s[i][j]]++;
        }
        for (int j = 97; j <= 122; j++)
        {
            if (b[j] != 0)
                printf("%c=%d\n", j, b[j]);
            if (b[j] == 1)
            {
                dem++;
                break;
            }
            else if (b[j] != 0)
                if (ktra(b[j]) == 0)
                {
                    dem++;
                    break;
                }
        }
        if (dem == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}