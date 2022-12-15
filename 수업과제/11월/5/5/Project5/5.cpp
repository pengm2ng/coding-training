#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct acc {
	char name[100];
	int id;
	int cash;
}; //구조체 선언

int menu() { //메뉴 관련 함수
	int n;
	//ATM시스템 메뉴를 출력한다. 
	printf("*********ATM시스템***************\n");
	printf("1. 잔액 확인\n");
	printf("2. 현금 인출\n");
	printf("3. 현금 입금\n");
	printf("4. 종료\n");
	printf("************************\n\n");

	printf("선택하시오: ");
	scanf("%d", &n); //사용할 서비스를 입력받는다. 
	return n; //해당 번호를 반환한다. 
}

int atm(struct acc* acc1, int n) { //atm 기능 구현
	int tmp = 0;
	switch (n)
	{
	case 1: //잔액을 확인한다. 
		printf("잔액: %d\n", (*acc1).cash); //현재 잔고를 출력한다. 
		break;
	case 2: //현금 인출 관련 기능
		printf("인출금액: ");
		scanf("%d", &tmp); //인출할 금액을 입력받는다. 
		(*acc1).cash -= tmp; //현재 잔고에서 인출할 금액만큼을 뺀다.
		printf("현금을 받으세요\n");
		printf("현재 잔액: %d\n", (*acc1).cash); //현재 잔고를 출력한다. 
		break;
	case 3: //현금 입금 관련 기능 
		printf("입금금액: ");
		scanf("%d", &tmp); //입금할 금액을 입력받는다. 
		(*acc1).cash += tmp; //현재 잔고에서 입금할 금액을 더한다. 
		printf("현재 잔액: %d\n", (*acc1).cash); //현재 잔고를 출력한다. 
		break;

	case 4: //프로그램을 종료한다. 
		printf("감사합니다. ");
		return 1; //함수 종료하며 1을 반환한다. 

	default:
		break;
	}
	return 0; //함수 종료하며 0을 반환한다. 
}

int main() {
	struct acc kms;
	int pin;
	int check, tmp;
	char ctmp;
	strcpy(kms.name, "KangMinsung"); //계좌 주인의 이름 입력
	kms.id = 1234; //계좌의 PIN번호 입력
	kms.cash = 100000; //계좌의 잔고 입력


	printf("PIN 번호입력: ");
	scanf("%d", &pin); //PIN번호 확인
	if (pin != kms.id) { //PIN번호가 일치하지 않으면 프로그램 종료
		printf("잘못된 pin입니다. \n");
		return 0;
	}

	while (1) {
		check = menu(); //메뉴관련 함수를 실행시킨다. 
		tmp = atm(&kms, check); //atm관련 함수를 실행시킨다. 
		if (tmp) { //종료 명령어 입력시 프로그램을 종료한다. 
			return 0;
		}
		printf("다른 거래를 하시겠습니까?(y/n):");
		scanf(" %c", &ctmp); //다른 거래를 할 것인지 물어보는 문자를 입력받음
		if (ctmp == 'n') { //n이 들어온다면 함수를 종료한다. 
			printf("감사합니다");
			break;
		}
	}
	return 0;
}