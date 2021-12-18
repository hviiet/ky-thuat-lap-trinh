#include <stdio.h>
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int left = low;
    int right = high - 1;
    while (true)
    {
        while (left <= right && arr[left] < pivot)
            left++;
        while (right >= left && arr[right] > pivot)
            right--;
        if (left >= right)
            break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int arr[100001], n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quickSort(arr, 0, n - 1);
    long long s = 0;
    for (int i = 0; i < k; i++)
        s = s + arr[i];
    printf("%lld", s);
    return 0;
}
