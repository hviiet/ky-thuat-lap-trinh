#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int ans[10] = {};
    for (int i = 0; i < t; i++)
    {
        int l = 0, max = 0;
        scanf("%d", &l);
        for (int j = 1; j <= l - 1; j++)
        {
            int upper;
            scanf("%d", &upper);
            if ((j + upper) > max)
                max = upper + j;
        }
        for (int j = 1; j <= l - 1; j++)
        {
            int lower;
            scanf("%d", &lower);
            if ((j + lower) > max)
                max = lower + j;
        }
        if (max >= l)
            ans[i] = max;
        else
            ans[i] = l;
    }
    for (int i = 0; i < t; i++)
        printf("%d\n", ans[i]);
    return 0;
}