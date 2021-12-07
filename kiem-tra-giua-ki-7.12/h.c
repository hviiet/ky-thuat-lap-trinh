#include <stdio.h>
int main()
{
    int n;
    double ans = 0;
    scanf("%d", &n);
    if (n <= 50)
        printf("%Lf", n * 1.678);
    else if (n <= 100)
        printf("%ldf", 83900 + (n - 50) * 1734);
    else if (n <= 200)
        printf("%ldf", 170600 + (n - 100) * 2014);
    else if (n <= 300)
        printf("%ld", 372000 + (n - 200) * 2536);
    else if (n <= 400)
        printf("%ld", 625600 + (n - 300) * 2834);
    else
        printf("%ld", 909000 + (n - 400) * 2927);
    return 0;
}