#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	double a, b, c, d, e;

	scanf("%d %d", &x, &y);

	a = x + (double)(y * 10 / 9.0) + (3 / 5.0);
	b = (2 * x + 3 * y + 20) / (10.0 * x + y) + 1 / (double)y;
	c = (x + y) / b;
	d = x % 2;
	e = (double)x / y;

	printf("%lf\n%lf\n%lf\n%d\n%lf\n", a, b, c, (int)d, e);

	return 0;
}