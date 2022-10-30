#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, y;

	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0) printf("제1사분면");
	else if (x < 0 && y > 0) printf("제2사분면");
	else if (x < 0 && y < 0) printf("제3사분면");
	else if (x > 0 && y < 0) printf("제4사분면");
	else printf("축에 있습니다");

	return 0;
}