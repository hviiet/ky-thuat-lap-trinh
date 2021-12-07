#include <stdio.h>
int main()
{
    int ng, th, na;
    scanf("%d %d %d", &ng, &th, &na);
    if (th == 2)
    {
        int count = 0;
        if (na % 100 == 0 && na % 400 == 0)
            count = 1;
        else if (na % 4 == 0 && na % 100 != 0)
            count = 1;
        else
            count = 0;
        if (count == 1 && ng == 29)
            printf("%d %d %d", 1, th + 1, na);
        else if (count == 0 && ng == 28)
            printf("%d %d %d", 1, th + 1, na);
        else
            printf("%d %d %d", ng + 1, th, na);
    }
    else if (th == 4 || th == 6 || th == 9 || th == 11)
    {
        if (ng == 30)
            printf("%d %d %d", 1, th + 1, na);
        else
            printf("%d %d %d", ng + 1, th, na);
    }
    else if (ng == 31 && th == 12)
        printf("%d %d %d", 1, 1, na + 1);
    else
    {
        if (ng == 31)
            printf("%d %d %d", 1, th + 1, na);
        else
            printf("%d %d %d", ng + 1, th, na);
    }
    return 0;
}