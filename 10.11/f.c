#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float d = 0.2 * (a + b) + 0.6 * c;
    if (d >= 8.5)
        printf("A");
    else if (d >= 7)
        printf("B");
    else if (d >= 5.5)
        printf("C");
    else if (d >= 4)
        printf("D");
    else
        printf("F");
    return 0;
}