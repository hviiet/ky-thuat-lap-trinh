#include <stdio.h>
#include <math.h>
void swap(int &a, int &b, int &c, int &d)
{
    int t = a;
    a = b;
    b = t;
    t = c;
    c = d;
    d = t;
}
int partition(int arr[], int pos[], int low, int high)
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
        swap(arr[left], arr[right], pos[left], pos[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high], pos[left], pos[high]);
    return left;
}
void quickSort(int arr[], int pos[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, pos, low, high);
        quickSort(arr, pos, low, pi - 1);
        quickSort(arr, pos, pi + 1, high);
    }
}
int main()
{
    int arr[100001] = {}, n = 0, sum[100001] = {}, pos[100001] = {};
    scanf("%d", &n);
    scanf("%d", &arr[0]);
    sum[0] = arr[0];
    pos[0] = 0;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
        pos[i] = i;
        sum[i] = sum[i - 1] + arr[i];
    }
    quickSort(sum, pos, 0, n - 1);
    int x = 0, max = -1;
    while (x < n)
    {
        if (sum[x] == 0)
        {
            if (pos[x] + 1 > max)
                max = pos[x] + 1;
            x++;
        }
        else if (sum[x] == sum[x + 1])
        {
            int y = x + 1;
            while (sum[y] == sum[y + 1])
                y++;
            for (int i = x; i <= y - 1; i++)
                for (int j = i + 1; j <= y; j++)
                {
                    int tmp = abs(pos[i] - pos[j]);
                    if (tmp > max)
                        max = tmp;
                }
            x = y + 1;
        }
        else
            x++;
    }
    printf("%d", max);
    return 0;
}
