#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void check_lotto(int lotto[][6], int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			//배열 내 2개의 값들을 각각 비교해봄
			//두 값이 같다면 나중값을 새로 생성 후 다시 검사함
			if (lotto[n][i] == lotto[n][j]) {
				lotto[n][i] = rand() % 45 + 1;
				i--;
				break;
			}
		}
	}
	return;
}

int main() {
	int n;
	int lotto[100][6] = { {0} };
	srand(time(NULL));

	printf("로또번호 생성\n");
	printf("출력할 로또번호 set의 수를 입력하시오: ");
	scanf("%d", &n); //로또 번호 set의 개수를 입력받음

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			lotto[i][j] = rand() % 45 + 1; //임의의 로또 번호를 생성함
		}
		check_lotto(lotto, i); //로또 번호에 중복이 있는지 검사, 중복이 있다면 값을 바꿈
	}

	//로또 번호 출력 부분
	for (int i = 0; i < n; i++) {
		printf("set %d: ", i + 1);
		for (int j = 0; j < 6; j++) {
			printf("  %2.d ", lotto[i][j]); // 숫자 갯수를 맞추어 출력한다. 
		}
		printf("\n");
	}

	return 0;
}