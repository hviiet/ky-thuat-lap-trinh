#include <stdio.h>
long res(int a, int b, int n, int k, int ans)
{
    ans = ans + (int)(b / n) - (int)(a / n);
    if (ans - (int)(ans / n) == k)
        return ans;
    else
        return res(b + 1, ans, n, k, ans);
}
int main()
{
    int arr1[1001] = {}, q, arr2[1001] = {};
    scanf("%d", &q);
    for (int i = 1; i <= q; i++)
        scanf("%d %d", &arr1[i], &arr2[i]);
    for (int i = 1; i <= q; i++)
    {
        int ans = arr2[i];
        printf("%d\n", res(1, arr2[i], arr1[i], arr2[i], ans));
    }
    return 0;
}