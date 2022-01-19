#include <stdio.h>

const int MAX = 100000;
int cnt[100000], cta[100000];

int D(int s[], int n)
{
    int tong = 0, dem = 0;
    for (int i = 0; i < MAX; i++)
        cnt[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cnt[s[i]]++;
    }
    for (int i = 0; i < MAX; i++)
    {
        if (cnt[i] > 1)
        {
            tong += cnt[i];
            dem++;
        }
    }
    return tong - dem;
}
int main()
{
    int n, k, da = 0, db = 0;
    int a[10000], b[10000];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    printf("%d", k - D(a, k) - D(b, k));
}