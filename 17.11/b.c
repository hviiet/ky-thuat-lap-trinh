#include <stdio.h>
int main()
{
    float x = 0;
    int n = 0;
    scanf("%f %d", &x, &n);
    double sum = 1;
    for (int i = 1; i <= n; i++)
    {
        double s = 1;
        for (int j = 2; j <= i; j++)
            s = s * j;

        double luyThua = 1;
        for (int j = 1; j <= i; j++)
        {
            luyThua = luyThua * x;
        }
        sum = sum + luyThua / s;
    }
    printf("%.2lf", sum);
    return 0;
}