#include <stdio.h>
int main()
{
    int n;
    float a[100001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    double s = 0;
    for (int i = 0; i < n; i++)
        s = s + a[i];
    s = (s / n);

    double t = 0;
    for (int i = 0; i < n; i++)
        t = t + (s - a[i]) * (s - a[i]);
    t = (t / (n - 1));

    printf("%.2lf %.2lf", s, t);
    return 0;
}