#include <stdio.h>
#include <string.h>
int main()
{
    char s[10][100001];
    int t;
    scanf("%d", &t);
    for (int i = 0; i <= t; i++)
        gets(s[i]);
    for (int i = 0; i <= t; i++)
        printf("s[%d]=%s\n", i, s[i]);
    return 0;
}