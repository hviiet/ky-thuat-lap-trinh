#include <stdio.h>
int pos[300001] = {};
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
    int n, arr[300001] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        pos[i] = i;
    }
    quickSort(arr, pos, 0, n - 1);
    int x = 0;
    while (x < n)
    {
        if (arr[x] = arr[x + 1])
        {
            int tmp = x;
            while (arr[tmp] == arr[x])
                tmp++;
            quickSort(pos, arr, x, tmp - 1);
            x = tmp;
        }
    }
    long long sum = 0;
    for (int i = 0; i <= n - 3; i++)
    {
        int count = 0;
        for (int j = i + 1; j <= n - 2; j++)
            if (count == 0)
                for (int k = j + 1; k <= n - 1; k++)
                {
                    int temp = (int)((arr[i] + arr[j] + arr[k]) / (arr[i] * arr[j] * arr[k]));
                    if (temp > 0)
                    {
                        if (pos[i] < pos[j] && pos[j] < pos[k])
                            sum = sum + temp;
                    }
                    else
                    {
                        count++;
                        break;
                    }
                }
            else
                break;
    }
    printf("%lld", sum);
    return 0;
}
1 2 1 7 3
2 0 1 4 3