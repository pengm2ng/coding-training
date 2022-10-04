#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int mid, fin, rep, att;
	double add;
	printf("중간 점수 입력  : ");
	scanf("%d", &mid);
	printf("기말 점수 입력  : ");
	scanf("%d", &fin);
	printf("보고서점수 입력 : ");
	scanf("%d", &rep);
	printf("출석 점수 입력  : ");
	scanf("%d", &att);

	add = mid * 0.3 + fin * 0.4 + rep * 0.2 + att * 0.1; // 평점 계산 부분

	printf("\n입력 점수(비율)  점수\n");
	printf("중간: %d(30%%)    %.02lf\n", mid, mid * 0.3); //다음과 같이 출력한다. 
	printf("기말: %d(40%%)    %.02lf\n", fin, fin * 0.4);
	printf("보고: %d(20%%)    %.02lf\n", rep, rep * 0.2);
	printf("출석: %d(10%%)    %.02lf\n", att, att * 0.1);
	printf("평점:            %.02lf\n", add);

	return 0;
}
