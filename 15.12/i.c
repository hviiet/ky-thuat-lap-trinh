#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x, int n)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return arr[mid];
        if (arr[mid + 1] == x)
            return arr[mid + 1];
        if (arr[mid] < x && (arr[mid + 1] >= x || mid + 1 == n))
            return arr[mid];
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x, n);
        return binarySearch(arr, mid + 1, r, x, n);
    }
    return -1;
}

int main()
{
    int n, m, arr[100001], que[100001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    arr[n] = arr[n - 1];
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &que[i]);
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", binarySearch(arr, 0, n - 1, que[i], n));
    }
    return 0;
}