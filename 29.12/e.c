#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int x = 0, n = strlen(s);
    while (x < n)
    {
        if (s[x] == '6' || s[x] == '7' || s[x] == '8')
        {
            int res = ((int)s[x] - 48) * 10 + ((int)s[x + 1] - 48);
            printf("%c", res);
            x = x + 2;
        }
        else if (s[x] == '9' && s[x + 1] == '0')
        {
            printf("Z");
            x = x + 2;
        }
        else if (s[x] == '9')
        {
            int res = ((int)s[x] - 48) * 10 + ((int)s[x + 1] - 48);
            printf("%c", res);
            x = x + 2;
        }
        else if (s[x] == '1')
        {
            int res = ((int)s[x] - 48) * 100 + ((int)s[x + 1] - 48) * 10 + ((int)s[x + 2] - 48);
            printf("%c", res);
            x = x + 3;
        }
    }
    return 0;
}