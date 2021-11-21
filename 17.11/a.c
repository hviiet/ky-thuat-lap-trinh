#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    double s = 1;
    for (int i = 2; i <= n; i++)
        s = s * i;
    printf("%.0lf", s);
    return 0;
}