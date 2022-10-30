#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i1, i2, i3, i4, max;

	printf("정수 4개를 차례로 입력한다. \n");
	printf("첫번째 정수: ");
	scanf("%d", &i1);
	printf("두번째 정수: ");
	scanf("%d", &i2);
	printf("세번째 정수: ");
	scanf("%d", &i3);
	printf("네번째 정수: ");
	scanf("%d", &i4);

	//max를 구하기 위해 삼항연산자를 중복하여 사용함. 
	//첫번째 삼항연산자에서 i1과 i2 중 큰 값을, 두번째 삼항연산자에서 i3와 i4 중 큰 값을 구한다. 
	//그 두 값중 큰 값을 구하는 코드이다. 
	max = ((i1 > i2 ? i1 : i2) > (i3 > i4 ? i3 : i4) ? (i1 > i2 ? i1 : i2) : (i3 > i4 ? i3 : i4));

	printf("가장 큰 수: %d", max);
	return 0;
}
