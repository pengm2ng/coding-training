#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char input[100];
	char a[4];
	int i1, i2;

	printf("연산을 입력: ");
	gets(input); //문자열을 입력받음
	//입력받은 문자열 중 연산을 나타내는 문자열과 정수 두 개로 나눈다. 
	sscanf(input, "%s %d %d", a, &i1, &i2);

	printf("연산의 결과: ");
	//연산 문자를 비교하여 참일 경우 해당 연산을 실시함.
	if (!strcmp(a, "add")) {
		printf("%d", i1 + i2); //더하기 연산을 실행함
	}
	else if (!strcmp(a, "sub")) {
		printf("%d", i1 - i2); //빼기 연산을 실행함
	}
	else if (!strcmp(a, "mul")) {
		printf("%d", i1 * i2); //곱하기 연산을 실행함
	}
	else if (!strcmp(a, "div")) {
		printf("%lf", (double)i1 / i2); //나누기 연산을 실행하고, 해당 결과를 실수형으로 출력
	}

	return 0;
}