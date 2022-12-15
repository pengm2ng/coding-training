#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int base_rate(int ue) {
	//기본 요금을 산정하는 함수

	//100이하인 경우 390원을 반환한다. 
	if (ue <= 100) return 390;

	//100보다 작은 경우는 위에서 걸러졌으므로 해당 범위는 100~200사이이다.
	//해당 범위에서 870원을 반환한다. 
	else if (ue <= 200) return 870;

	//위의 설명과 유사하므로 생략한다. 
	else if (ue <= 300) return 1530;
	else if (ue <= 400) return 3680;
	else if (ue <= 500) return 6970;

	//500을 초과하는 경우 12350원을 반환한다. 
	else return 12350;
}

int use_rate(int ue) {
	//사용 요금을 산정하는 함수
	int cnt, n;

	n = ue / 100; //ue를 100으로 나눈 몫을 저장해둔다. 

	if (n >= 5) { //500이 넘어가는 경우 다음과 같이 계산한다. 
		cnt = 57.9 * 100 + 120.2 * 100 + 179.4 * 100 + 267.8 * 100 + 398.7 * 100 + 677.3 * (ue - n * 100);
	}
	else if (n >= 4) { //400~500사이인 경우 다음과 같이 계산한다. 
		cnt = 57.9 * 100 + 120.2 * 100 + 179.4 * 100 + 267.8 * 100 + 398.7 * (ue - n * 100);
	}
	else if (n >= 3) { //300~400사이인 경우 다음과 같이 계산한다. 
		cnt = 57.9 * 100 + 120.2 * 100 + 179.4 * 100 + 267.8 * (ue - n * 100);
	}
	else if (n >= 2) { //200~300사이인 경우 다음과 같이 계산한다. 
		cnt = 57.9 * 100 + 120.2 * 100 + 179.4 * (ue - n * 100);
	}
	else if (n >= 1) { //100~200사이인 경우 다음과 같이 계산한다. 
		cnt = 57.9 * 100 + 120.2 * (ue - n * 100);
	}
	else { //100보다 작은 경우 다음과 같이 계산한다. 
		cnt = 57.9 * (ue - n * 100);
	}
	//cnt를 반환한다. 
	return cnt;
}

double add_value(int er) {
	//부가 가치를 산정하는 함수
	return (double)er * 0.1;
}

double elec_fund(int er) {
	//전력기금 산정하는 함수
	return (double)er * 0.037;
}

int main() {
	int ue;
	int br, ur;
	double av, ef;
	printf("전기요금 청구서 출력 프로그램\n");
	printf("전력사용량(Kw/h)을 입력하시오: ");
	scanf("%d", &ue); //전력사용량 ue를 입력받는다. 
	printf("\n");

	br = base_rate(ue); //기본요금 계산
	ur = use_rate(ue); //사용요금 계산
	av = add_value(br + ur); //부가가치 계산
	ef = elec_fund(br + ur); //전력기금 계산

	//출력부분
	printf("기본요금: %6d원\n", br);
	printf("사용요금: %6d원\n", ur);
	printf("전력요금: %6d원\n", br + ur);
	printf("부가가치: %6.lf원\n", av);
	printf("청구요금: %6.lf원\n", br + ur + av + ef);

	return 0;
}
