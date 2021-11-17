#include <stdio.h>

int main()
{
	long xa, ya, xb, yb, xc, yc;
	long long a, b, A, B;
	double xh, yh;
	scanf("%ld %ld", &xa, &ya);
	scanf("%ld %ld", &xb, &yb);
	scanf("%ld %ld", &xc, &yc);

	a = ya - yb;
	b = xb - xa;
	A = a * yc - b * xc;
	B = a * xa + b * ya;
	xh = (B - ((b * A) * 1.0 / a)) * 1.0 / (a + ((b * b) * 1.0 / a));
	yh = ((A + b * xh) * 1.0) / a;

	if (ya == yb)
	{
		if (xa > xb)
		{
			if (yb == yc && xc < xa)
				printf("TOWARDS");
			else if (yb > yc && xc != xb && xc != xa)
				printf("LEFT");
			else if (yb < yc && xc != xb && xc != xa)
				printf("RIGHT");
		}
		else if (xa < xb)
		{
			if (yb == yc && xc > xa)
				printf("TOWARDS");
			else if (yb < yc && xc != xb && xc != xa)
				printf("LEFT");
			else if (yb > yc && xc != xb && xc != xa)
				printf("RIGHT");
		}
	}
	if (ya != yb)
	{
		if (xa < xb && yc < yh)
			printf("RIGHT");
		else if (xa < xb && yc > yh)
			printf("LEFT");
		else if (xa > xb && yc > yh)
			printf("RIGHT");
		else if (xa > xb && yc < yh)
			printf("LEFT");
		else if (a * xc + b * yc - B == 0)
		{
			if (xa > xb && xc < xa || xa < xb && xc > xa)
				printf("TOWARDS");
		}
	}
	if (xa == xb && ya < yb)
	{
		if (xc == xb && yc > ya)
			printf("TOWARDS");
		else if (xc > xb && yc != yb && yc != ya)
			printf("RIGHT");
		else if (xc < xb && yc != yb && yc != ya)
			printf("LEFT");
	}
	else if (xa == xb && ya > yb)
	{
		if (xc == xb && yc < ya)
			printf("TOWARDS");
		else if (xc < xb && yc != yb && yc != ya)
			printf("RIGHT");
		else if (xc > xb && yc != yb && yc != ya)
			printf("LEFT");
	}

	return 0;
}