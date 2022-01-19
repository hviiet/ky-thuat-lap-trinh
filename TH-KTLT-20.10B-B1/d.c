#include <stdio.h>
int res(int n, int k)
{
    if (k == n)
        return 0;
    if (k == n / 2)
        return 1;
    if (k > n / 2)
        return res(n / 2, k - n / 2) + 1;
    if (k < n / 2)
        return res(n / 2, k) + 1;
}
int main()
{
    int k, n = 1, x = 0, tmp[21] = {};
    scanf("%d", &k);
    while (n < k)
        n = n * 2;
    printf("%d %d", n, res(n, k));
    return 0;
}