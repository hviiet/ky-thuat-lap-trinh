#include <stdio.h>
#include <string.h>
int main()
{
    char s[201];
    gets(s);
    int x = 0;
    while (s[x] == (char)32)
        x++;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
    }
    printf("%c", s[x]);
    x++;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
    }
    int n = strlen(s) - 1;
    while (s[n] == (char)32)
        n--;
    while (x <= n)
    {
        if (s[x] != (char)32)
        {
            printf("%c", s[x]);
            x++;
        }
        else if (s[x] == (char)32)
        {
            printf(" ");
            while (s[x] == (char)32)
                x++;
        }
    }
    return 0;
}