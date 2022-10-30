
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double slope(double a1, double b1, double a2, double b2) {
	double ret = b2 - b1; 
	ret /= (a2 - a1);
	return ret;
}

double inter(double sl, double a, double b)
{
	return b - sl * a;
}

void cross(double sla, double a, double slb, double b)
{
	double x = b - a;
	x /= (sla - slb); 
	double y = x * sla + a;

	printf("두 직선의 교점은 (%lf, %lf)입니다\n", x, y);
}

int main()
{
	double x1, x2, x3, x4, y1, y2, y3, y4;


	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);

	double ma = slope(x1, y1, x2, y2); 
	double mb = slope(x3, y3, x4, y4); 

	double intera = inter(ma, x1, y1); 
	double interb = inter(mb, x3, y3); 
	cross(ma, intera, mb, interb);

	return 0;
}