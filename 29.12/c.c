#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], s1[1001], s2[1001];
    gets(s);
    strcpy(s1, s);
    strcpy(s2, s);
    int n = strlen(s);
    for (int i = 0; i <= n; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
            s1[i] = s1[i] + 32;
    }
    for (int i = 0; i <= n; i++)
    {
        if (s2[i] >= 97 && s2[i] <= 122)
            s2[i] = s2[i] - 32;
    }
    for (int i = 0; i < n; i++)
        if (s[i] != s1[i])
            printf("%c", s1[i]);
        else if (s[i] != s2[i])
            printf("%c", s2[i]);
        else
            printf("%c", s[i]);
    return 0;
}