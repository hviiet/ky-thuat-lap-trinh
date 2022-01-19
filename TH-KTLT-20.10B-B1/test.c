#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int x = 0;
    scanf("%s", s);
    int n = strlen(s);
    while (x < n)
    {
        if (s[x] == '6' || s[x] == '7' || s[x] == '8' || s[x] == '9')
        {
            int t = ((int)s[x] - 48) * 10 + ((int)s[x + 1] - 48);
            x = x + 2;
            printf("%c", t);
        }
        else if (s[x] == '1')
        {
            int t = ((int)s[x] - 48) * 100 + ((int)s[x + 1] - 48) * 10 + ((int)s[x + 2] - 48);
            x = x + 3;
            printf("%c", t);
        }
    }

    return 0;
}