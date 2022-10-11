#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c1, c2, c3, c4, c5, c6, c7, c8;
	int key;

	printf("암호문 입력: ");
	scanf("%c%c%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8); //암호 입력받음

	printf("암호키 입력: ");
	scanf("%d", &key); //암호키 입력

	//암호화부분
	c1 += key;
	c2 += key;
	c3 += key;
	c4 += key;
	c5 += key;
	c6 += key;
	c7 += key;
	c8 += key;
	printf("1차 암호환한 글자: %c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8);
	
	
	c1 = (c1 % 65 >25) ? c1-26 : c1;
	c2 = (c2 % 65 > 25) ? c2 - 26 : c2;
	c3 = (c3 % 65 > 25) ? c3 - 26 : c3;
	c4 = (c4 % 65 > 25) ? c4 - 26 : c4;

	c5 = (c5 % 65 > 25) ? c5 - 26 : c5;
	c6 = (c6 % 65 > 25) ? c6 - 26 : c6;
	c7 = (c7 % 65 > 25) ? c7 - 26 : c7;
	c8 = (c8 % 65 > 25) ? c8 - 26 : c8;


	printf("보정 후 암호환한 글자: %c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8);




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

	printf("복호화한 글자: %c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8); //암호 출력

	printf("A-Z : %d\n", 'A' - 'Z');

	printf("X를 65으로 나머지 : %d\n", 'X' % 65);
	printf("Y를 65으로 나머지 : %d\n", 'Y' % 65);
	printf("Z를 65으로 나머지 : %d\n", 'Z' % 65);
	
	return 0;
}