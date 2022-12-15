#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(double a[][9], int n) {
	switch (n) //두 케이스로 나누어 합계를 계산한다. 
	{
	case 1:
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 7; j++) {
				a[i][7] += a[i][j]; //a[i][7]에 요일별 데이터들을 더한다.
			}
		}
		break;
	case 2:
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 4; j++) {
				a[4][i] += a[j][i]; //각 요일별과 전체 합계를 구함
			}
		}
		break;

	default:
		break;
	}
	return;
}

void mean(double a[][9], int n) {
	switch (n)
	{
	case 1:
		for (int i = 0; i < 4; i++) {
			a[i][8] = a[i][7] / 7; //각 주차별 평균을 계산한다. 
		}

		break;
	case 2:
		for (int i = 0; i < 9; i++) {
			a[5][i] = a[4][i] / 4; // 각 요일별과 전체 평균을 구함
		}
		break;

	default:
		break;
	}
	return;
}

int main() {
	//배열에 4주간 생산한 요일별 전력량을 미리 입력한다.
	double a[6][9] = {
		{25, 30, 22, 28, 32, 45, 30},
		{22, 25, 28, 26, 38, 40, 33},
		{25, 34, 20, 22, 40, 36, 37},
		{22, 28, 27, 28, 35, 40, 32}
	};
	//배열에 미리 요일들을 집어넣어 출력을 편하게 하도록 한다. 
	//한글은 2bite를 사용함으로 전체 크기의 두배만큼 선언해주었다. 
	char day[16] = "월화수목금토일";

	sum(a, 1);
	mean(a, 1);
	sum(a, 2);
	mean(a, 2);


	//요일과 합계, 평균을 출력한다. 
	printf("구분 ");
	for (int i = 0; i < 7; i++) {
		printf("  %c%c", day[2 * i], day[2 * i + 1]);
	}
	printf("   합계  평균\n");

	//4주에 걸쳐 각 요일별 데이터와, 합계, 평균을 출력한다. 
	for (int i = 0; i < 4; i++) {
		printf("%d주: ", i + 1);
		for (int j = 0; j < 7; j++) {
			printf("%4.0lf", a[i][j]); //각 요일별 데이터를 출력한다. 
		}
		printf("  %.1lf", a[i][7]); //각 주차별 합계를 출력한다. 
		printf("  %.1lf", a[i][8]); //평균을 출력한다. 
		printf("\n");
	}

	//합계 출력 부분
	printf("합계 ");
	for (int i = 0; i < 7; i++) {
		printf("%4.0lf", a[4][i]);
	}
	printf("  %.1lf", a[4][7]);
	printf(" %.1lf\n", a[4][8]);

	//평균 출력 부분
	printf("평균 ");

	for (int i = 0; i < 7; i++) {
		printf("%4.0lf", a[5][i]);
	}
	printf("  %.1lf", a[5][7]);
	printf("  %.1lf\n", a[5][8]);

	return 0;
}