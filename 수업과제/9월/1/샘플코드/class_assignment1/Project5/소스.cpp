#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int reg = 0b01100011; // 레지스터는 미리 지정됨
	int fstb, secb;
	fstb = reg & 0x1; // 0번째 자리의 비트를 1과의 & 비트 연산을 통해 알 수 있음
	secb = reg & 0x2; // 1번째 자리의 비트를 2과의 & 비트 연산을 통해 알 수 있음

	fstb == 1 ? printf("문이 닫혔습니다.\n") : printf("문이 열렸습니다.\n"); //연산결과가 1이 나오면 0번 비트가 1, 0이 나오면 0이다. 

	secb == 2 ? printf("정지되었습니다.\n") : printf("세탁 중입니다.\n"); //연산결과가 2이 나오면 1번 비트가 1, 0이 나오면 0이다. 

	return 0;
}
