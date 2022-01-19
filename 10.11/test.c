#include <stdio.h>
#include <math.h>
float S(int xa, int ya, int xb, int yb, int xc, int yc)
{
	return 0.5 * abs((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya));
}
int main()
{
	int xa, ya, xb, yb, xc, yc, xm, ym;
	scanf("%d %d", &xa, &ya);
	scanf("%d %d", &xb, &yb);
	scanf("%d %d", &xc, &yc);
	scanf("%d %d", &xm, &ym);
	float abc = S(xa, ya, xb, yb, xc, yc);
	float mab = S(xm, ym, xa, ya, xb, yb);
	float mbc = S(xm, ym, xb, yb, xc, yc);
	float mac = S(xm, ym, xa, ya, xc, yc);
	if (mab == 0 || mbc == 0 || mac == 0)
		printf("M nam tren canh tam giac ABC");
	else if (abc == mab + mac + mbc)
		printf("M nam trong tam giac ABC");
	else if (abc < mab + mac + mbc)
		printf("M nam ngoai tam giac ABC");
	return 0;
}