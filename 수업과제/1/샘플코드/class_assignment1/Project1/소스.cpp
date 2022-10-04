#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	double root1 = 0, root2 = 0;

	scanf("%d %d %d", &a, &b, &c); // 계수 입력받음

	//근을 계산하는 공식. 허근은 고려하지 않음
	root1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	root2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

	//소숫점 6번째까지 근 출력
	printf("%.06lf, %.06lf", root1, root2);

	return 0;
}
