#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char s1[1001], s2[1001];
    fgets(s1, 1001, stdin);
    int n = strlen(s1), count = 0;
    for (int i = 0; i < n; i++)
        if (s1[i] == ' ')
            count++;
    printf("%d", count);
    return 0;
}