#include <stdio.h>
int main()
{
    int arr1[1001] = {}, q, arr2[1001] = {};
    scanf("%d", &q);
    for (int i = 1; i <= q; i++)
        scanf("%d %d", &arr1[i], &arr2[i]);
    for (int i = 1; i <= q; i++)
    {
        int ans = (long long)(arr2[i] / (arr1[i] - 1)) * arr1[i];
        if ((arr2[i] % (arr1[i] - 1)) == 0)
            ans--;
        else
            ans = ans + (arr2[i] % (arr1[i] - 1));
        printf("%lld\n", ans);
    }
    return 0;
}