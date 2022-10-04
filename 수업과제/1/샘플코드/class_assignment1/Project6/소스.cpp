#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c1, c2, c3, c4, c5, c6, c7, c8;
	int key;

	scanf("%d", &key); //암호키 입력
	getchar(); // 프로그램 상에서 입력 버퍼 에러가 발생하여 오류 해결을 위해 넣음
	scanf("%c%c%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8); //암호 입력받음
	getchar(); // 프로그램 상에서 입력 버퍼 에러가 발생하여 오류 해결을 위해 넣음

	//암호화부분
	c1 += key;
	c2 += key;
	c3 += key;
	c4 += key;
	c5 += key;
	c6 += key;
	c7 += key;
	c8 += key;

	//암호화한값이 90, 즉 Z보다 크다면 값을 -25하여 순환시킴
	c1 = (c1 > 90) ? c1 - 26 : c1;
	c2 = (c2 > 90) ? c2 - 26 : c2;
	c3 = (c3 > 90) ? c3 - 26 : c3;
	c4 = (c4 > 90) ? c4 - 26 : c4;
	c5 = (c5 > 90) ? c5 - 26 : c5;
	c6 = (c6 > 90) ? c6 - 26 : c6;
	c7 = (c7 > 90) ? c7 - 26 : c7;
	c8 = (c8 > 90) ? c8 - 26 : c8;

	printf("%c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8); //암호문 출력문

	//복호화 부분
	c1 -= key;
	c2 -= key;
	c3 -= key;
	c4 -= key;
	c5 -= key;
	c6 -= key;
	c7 -= key;
	c8 -= key;

	//복호화한 값이 65보다 작으면 값을 +25하여 순환시킴
	c1 = (c1 < 65) ? c1 + 26 : c1;
	c2 = (c2 < 65) ? c2 + 26 : c2;
	c3 = (c3 < 65) ? c3 + 26 : c3;
	c4 = (c4 < 65) ? c4 + 26 : c4;
	c5 = (c5 < 65) ? c5 + 26 : c5;
	c6 = (c6 < 65) ? c6 + 26 : c6;
	c7 = (c7 < 65) ? c7 + 26 : c7;
	c8 = (c8 < 65) ? c8 + 26 : c8;

	printf("%c%c%c%c%c%c%c%c", c1, c2, c3, c4, c5, c6, c7, c8); //암호 출력

	printf("%d", 'A' - 'Z');

	return 0;
}