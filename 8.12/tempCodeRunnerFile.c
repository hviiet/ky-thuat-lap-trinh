#include <stdio.h>
int fibo(int n)
{
    int x1 = 1, x2 = 1, x3 = 2;
    if (n == 1 || n == 2)
        return x1;
    else if (n == 3)
        return x3;
    else
    {
        int x = 4;
        while (x <= n)
        {
            int temp = x3;
            x3 = x3 + x2;
            x1 = x2;
            x2 = temp;
            x++;
        }
        return x3;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}