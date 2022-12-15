#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct bank {
	char name;
	char acc[13];
}; //구조체 선언

void checkBank(struct bank* b) { //은행을 확인하는 함수
	int n = strlen((*b).acc); //계좌번호의 길이를 확인
	if (n == 7) { //계좌번호 길이가 7이면 해당 계좌는 A은행인 것으로 판단
		(*b).name = 'A';
	}
	else if (n == 10) { //계좌번호 길이가 10이면 해당 계좌는 B은행인 것으로 판단
		(*b).name = 'B';
	}
	else if (n == 12) { //계좌번호 길이가 12이면 해당 계좌는 C은행인 것으로 판단
		(*b).name = 'C';
	}
	printf("출금은행 : %c 계좌번호: %s ", (*b).name, (*b).acc);
	return;
}

int main() {
	struct bank input;
	struct bank output;

	printf("출금 계좌번호 입력 후 Enter>");
	scanf("%s", &output.acc); //출금 계좌번호를 입력받는다. 
	printf("입금 계좌번호 입력 후 Enter>");
	scanf("%s", &input.acc); //입금 계좌번호를 입력받는다. 

	checkBank(&output); //출금 계좌번호에 대해 은행을 확인하는 함수를 실행
	checkBank(&input); //입금 계좌번호에 대해 은행을 확인하는 함수를 실행

	return 0;
}