#include <stdio.h>
#include <string.h>
#include <math.h>
int len(char *s)
{
    int i = 0;
    while (s[i] != (char)0 && s[i] != (char)13)
        i++;
    return i;
}
int main()
{
    char s1[1001], s2[1001];
    gets(s1);
    gets(s2);
    printf("%d", abs(len(s1) - len(s2)));
    return 0;
}