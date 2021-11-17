#include <stdio.h>
int main()
{
    char c1, c2;
    scanf("%c %c", &c1, &c2);
    if (c1 == c2)
        printf("DRAW");
    else if (c1 == 'B' && c2 == 'K')
        printf("WIN");
    else if (c1 == 'K' && c2 == 'G')
        printf("WIN");
    else if (c1 == 'G' && c2 == 'B')
        printf("WIN");
    else if (c1 == 'K' && c2 == 'B')
        printf("LOSE");
    else if (c1 == 'G' && c2 == 'K')
        printf("LOSE");
    else if (c1 == 'B' && c2 == 'G')
        printf("LOSE");
    return 0;
}