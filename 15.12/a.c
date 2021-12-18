#include <stdio.h>
int main()
{
    int n;
    float a[100001] = {};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%f", &a[i]);
    double u = 0;
    for (int i = 1; i <= n; i++)
        u = u + a[i];
    u = u / n;
    double s = 0;
    for (int i = 1; i <= n; i++)
        s = s + (u - a[i]) * (u - a[i]);
    s = s / (n - 1);
    printf("%.2lf %.2lf", u, s);
    return 0;
}