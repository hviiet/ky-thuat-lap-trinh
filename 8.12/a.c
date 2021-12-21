#include <stdio.h>
double giaithua(int n)
{
    double x = 1;
    for (int i = 2; i <= n; i++)
        x = x * i;
    return x;
}
int main()
{
    int n;
    scanf("%d", &n);
    double s = giaithua(n);
    printf("%.0lf", s);
    return 0;
}