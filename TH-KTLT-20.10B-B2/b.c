#include <stdio.h>
int ans[11] = {}, x = 1;
int Chia(int a[], int l, int r)
{
    int chot = a[l];
    int i = r;
    int j;
    for (j = r; j > l; j--)
    {
        if (a[j] >= chot)
        {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i--;
        }
    }
    int tmp2 = a[i];
    a[i] = a[l];
    a[l] = tmp2;
    return i;
}

void qsort(int a[], int l, int r)
{
    if (l < r)
    {
        int c = Chia(a, l, r);
        qsort(a, l, c - 1);
        qsort(a, c + 1, r);
    }
}
void dichoi(int a[], int n, int k)
{
    int dem = a[n - 1];
    int max = a[n - 1];
    for (int i = 2; i <= k; i++)
    {
        if (a[n - 2] > (max / 2))
        {
            dem += a[n - 2];
            max = a[n - 2];
            n--;
        }
        else
        {
            dem += max / 2;
            max = max / 2;
        }
    }
    ans[x] = dem;
    x++;
}

int main()
{
    int t;
    scanf("%d\n", &t);
    for (int e = 1; e <= t; e++)
    {
        int n, k;
        int a[100000];
        scanf("%d %d", &n, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        qsort(a, 0, n - 1);
        dichoi(a, n, k);
    }
    for (int i = 1; i <= t; i++)
        printf("%d\n", ans[i]);
    return 0;
}