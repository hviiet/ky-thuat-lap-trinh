#include <stdio.h>
int main()
{
    long m, n, a, b;
    scanf("%ld %ld %ld %ld", &n, &m, &a, &b);
    long posa, rowa;
    if (a % m == 0)
    {
        posa = m;
        rowa = (long)(a / m);
    }
    else
    {
        posa = a % m;
        rowa = (long)(a / m) + 1;
    }
    long posb, rowb;
    if (b % m == 0)
    {
        posb = m;
        rowb = (long)(b / m);
    }
    else
    {
        posb = b % m;
        rowb = (long)(b / m) + 1;
    }
    if (rowa == rowb || a == b || m == 1 || m >= n || (posa == 1 && (posb == m || b == n)))
        printf("1");
    else if (posa - posb == 1 && rowb - rowa > 1)
        printf("2");
    else if ((rowb - rowa == 1) || (posa > 1 && (posb == m || b == n)) || (posa == 1 && posb < m))
        printf("2");
    else
        printf("3");

    return 0;
}