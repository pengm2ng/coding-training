#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define FOODNUM 2

typedef struct food {
	//음식의 이름, 가격, 개수를 가지는 구조체 변수 FOOD를 생성
	char name[50];
	int cost;
	int num;
}Food;

void befotable(Food* a) {
	//주문전표를 출력하는 함수
	printf("\n");
	printf("주문전표\n");
	printf("-----------------------\n");

	//음식 갯수만큼 반복문을 실행시킨다. 
	for (int i = 0; i < FOODNUM; i++) {
		if (a[i].num != 0) {
			//해당 음식을 주문한 개수가 0개가 아니면 해당 음식의 이름과 갯수를 출력함
			printf("%-6s%3d개\n", a[i].name, a[i].num);
		}
	}
	printf("\n");
	return;
}

void selltable(Food* a) {
	printf("\n");
	int total = 0;
	printf("매출전표\n");
	printf("-----------------------\n");

	//음식 갯수만큼 반복문을 실행시킨다. 
	for (int i = 0; i < FOODNUM; i++) {
		if (a[i].num != 0) {
			//매출을 변수 total에 저장함
			total += a[i].cost * a[i].num;

			//해당 음식을 주문한 개수가 0개가 아니면 해당 음식의 이름과 갯수를 출력함
			printf("%-6s%3d%8d원%8d원\n", a[i].name, a[i].num, a[i].cost, a[i].cost * a[i].num);
		}
	}
	printf("총액 : %d원", total); //매출을 출력함
	printf("\n");
	return;
}

void check(Food* a, char input[]) {
	int n;
	int k = strlen(input) / 2; //한글이기에 2를 나누어 문자열의 길이를 구한다.
	for (int i = 0; i < FOODNUM; i++) { //음식 갯수만큼 반복문을 실행함
		for (int j = 0; j < k; j++) { //k만큼 반복문을 실행함
			n = strncmp(input + j * 2, (a)[i].name, 2); //음식과 문자열 중 2칸(한글로 1글자)를 비교한다.
			if (!n) { //두 문자열이 같다면(strncmp에서 두 문자열이 같다면 0을 반환)
				(a)[i].num++; //음식의 개수를 하나 증가시킨다. 
			}
		}
	}
	befotable(a); //주문전표 출력
	selltable(a); //매출전표 출력
	return;
}


int main() {
	char input[100];
	Food a[FOODNUM] = {
		{"짜장면", 4500, 0},
		{"우동", 6500, 0}
	}; //구조체 a를 선언하여둔다. 
	printf("주문을 입력하고 Enter>");
	scanf("%s", input); //문자열을 입력받는다. 

	check(a, input); //check함수 실행

	return 0;
}