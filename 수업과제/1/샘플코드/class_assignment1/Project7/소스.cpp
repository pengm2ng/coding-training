#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // INT_MAX를 사용하기 위해 가져옴

int main() {
	int ib, is;
	float fb, fs, f1;
	ib = INT_MAX;
	is = INT_MIN;
	fb = 3.402823466E+38; //부동소수점 최대값
	fs = 1.175494351E-38; //부동소수점 
	f1 = 0.2f;

	printf("정수형 오버플로우: %d + 2 = %d\n", ib, ib + 2);

	printf("정수형 언더플로우: %d - 2 = %d\n", is, is - 2);

	printf("뺄셈에서 보수 사용: 2 - 2 = 2 + ( -2 ) = 0b00000010 + (0b11111110) = 0b00000000 = 0\n"); // 보수를 사용하여 뺄셈 방식을 보여주려함

	printf("부동 소수점 오버플로우: %e * 10000.0f = %e\n", fb, fb * 100000.0f);

	printf("부동 소수점 언더플로우: %e / 100000000.0f = %e\n", fs, fs / 100000000.0f);

	printf("부동 소수점의 부정확성: %.15f\n", f1); // 0.2로 나와야하지만 소숫점 뒤에 수가 더 붙음

	return 0;
}