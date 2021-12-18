#include <stdio.h>
int main()
{
    int n, arr[100001] = {}, res[100001] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    res[0] = 0;
    res[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
            res[i] = 1;
        else if (arr[i] > arr[i - 1])
        {
            res[i] = res[i - 1];
            for (int j = i - res[i] - 1; j >= 0; j--)
            {
                if (arr[j] >= arr[i])
                {
                    res[i]++;
                    break;
                }
                else
                    res[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", res[i]);
    return 0;
}