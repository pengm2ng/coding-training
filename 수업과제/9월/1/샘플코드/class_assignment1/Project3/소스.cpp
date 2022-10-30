#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i1, i2, i3, i4;
	double av = 0;
	printf("결과:\n");
	printf("  첫 번째 입력 숫자:");
	scanf("%d", &i1);
	printf("  두 번째 입력 숫자:");
	scanf("%d", &i2);
	printf("  세 번째 입력 숫자:");
	scanf("%d", &i3);
	printf("  네 번째 입력 숫자:");
	scanf("%d", &i4);
	printf("\n");

	av = (i1 + i2 + i3 + i4) / 4.0; //평균 계산, i1~i4가 int형이므로 4로 나누면 몫이 저장됨. 따라서 4.0으로 나눠줘야 형변환이 되어서 정상적으로 작동함

	printf("  ******* 평균: %.02lf *******\n", av);
	printf("  첫 번째 숫자 : %d -- 편차 : %.02lf\n", i1, i1 - av); //편차는 변량 - 평균
	printf("  두 번째 숫자 : %d -- 편차 : %.02lf\n", i2, i2 - av);
	printf("  세 번째 숫자 : %d -- 편차 : %.02lf\n", i3, i3 - av);
	printf("  네 번째 숫자 : %d -- 편차 : %.02lf\n", i4, i4 - av);

	return 0;
}
