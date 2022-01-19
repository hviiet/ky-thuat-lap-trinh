#include <stdio.h>
#include <math.h>
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
long long loop(const int arr[], int pos[], int min, int max, int qmin, int qmax)
{
    if (qmin == qmax)
    {
        // pos[qmin] = 1;
        return ((arr[qmin] - 1) - min + 1) + (max - arr[qmin]);
    }
    else if (min == max || min > max || qmin > qmax)
        return 0;
    else
    {
        int avg = (int)((max + min) / 2);
        int x = qmin, tmp = abs(arr[x] - avg);
        for (int i = qmin + 1; i <= qmax; i++)
            if (abs(arr[i] - avg) <= tmp)
            {
                tmp = abs(arr[i] - avg);
                x = i;
            }
        // if (pos[x] == 0)
        // {
        //     pos[x] = 1;
        if (x == qmax)
            return ((arr[x] - 1) - min + 1) + (max - arr[x]) + loop(arr, pos, min, arr[x] - 1, qmin, x - 1);
        else if (x == qmin)
            return ((arr[x] - 1) - min + 1) + (max - arr[x]) + loop(arr, pos, arr[x] + 1, max, x + 1, qmax);
        else
            return ((arr[x] - 1) - min + 1) + (max - arr[x]) + loop(arr, pos, min, arr[x] - 1, qmin, x - 1) + loop(arr, pos, arr[x] + 1, max, x + 1, qmax);
        // }
        // else
        //     return 0;
    }
}
int main()
{
    int p, q, arr[101] = {}, pos[101] = {};
    scanf("%d %d", &p, &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &arr[i]);
        pos[i] = 0;
    }
    quickSort(arr, 0, q - 1);
    printf("%lld", loop(arr, pos, 1, p, 0, q - 1));
    return 0;
}