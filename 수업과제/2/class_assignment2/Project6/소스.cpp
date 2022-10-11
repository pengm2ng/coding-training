#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double e = 0, fac = 1, ex = 0; //계산을 위한 변수들을 선언
	int x, xn = 1;

	//e 계산
	e += 1; //i가 0인 경우에 대하여 미리 계산함
	for (int i = 1; i <= 100; i++) {
		fac *= i; //팩토리얼 계산
		e += 1 / fac; 
	}
	printf("e 값: ");
	printf("%lf\n\n", e); //e를 출력


	fac = 1; //f 초기화

	//e^x 계산
	printf("x값 : ");
	scanf("%d", &x); //x값을 입력받음
	ex += 1; //i가 0인 경우에 대하여 미리 계산함
	for (int i = 1; i <= 100; i++) {
		fac *= i; //팩토리얼 계산
		xn *= x; //x^i 계산
		ex += xn / fac; // (x ^ i) / (i!)를 ex에 더함
	}
	printf("e^x 값 : ");
	printf("%lf", ex); //ex를 출력

	return 0;
}