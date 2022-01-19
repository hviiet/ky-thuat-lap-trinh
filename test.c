
#include <stdio.h>
#include <string.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))

/*Tạo hàm in phần tử trong mảng*/
void show_array(int array[], int length)
{
    for (short i = 0; i < length; i++)
        printf("%d ", array[i]);
    printf("\n");
}

/*Tạo hàm xoá phần tử trùng trong mảng C*/
size_t array_unique(int *array, size_t size)
{
    for (size_t i = 0; i < size - 1; ++i)
    {
        for (size_t j = i + 1; j < size; ++j)
        {
            if (array[i] == array[j])
            { // Tìm thấy phần tử trùng nhau

                // Ghi đè array[j] bằng phạm vi từ array[j + 1] đến cuối mảng, qua đó xoá array[j]
                memmove(&array[j], &array[j + 1], sizeof(int) * (size - j - 1));

                --size; // Do đã xoá array[j] nên trừ độ dài mảng đi một đơn vị

                // Do có khả năng 3 phần tử trùng nhau xuất hiện liên tiếp
                // Nên chúng ta cần kiểm tra lại vị trí j bằng cách giảm giá trị của j 1 đơn vị
                --j;
            }
        }
    }

    return size;
}

int main(void)
{
    int i, n, max1, max2;
    scanf("%d", &n);
    int arr[n];
    // a
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    // b
    float Tb = 0;
    float TB;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && (arr[i] % 2 == -1 || arr[i] % 2 == 1))
        {
            Tb = Tb + arr[i];
            d++;
        }
    }
    TB = Tb / d;
    printf("%.2f\n", TB);
    // c

    // Xoá phần tử trùng nhau trong các mảng
    size_t size = array_unique(arr, SIZE_OF_ARRAY(arr));

    // In các phần tử không trùng nhau đã được chuyển lên đầu mảng
    show_array(arr, size);
    return 0;
}