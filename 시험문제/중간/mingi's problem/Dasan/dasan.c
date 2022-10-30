#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define cheezebuldak 1
#define bulgogi 2
#define bibimbab 3
#define zanchi 4

int main() {

		int num = 0;
		srand(time(NULL));
		int sum = 0;
		int food_num = 0;
		printf("주문할 음식 수량: ");
		scanf("%d", &food_num);
		int choice = 0;
		for (int i = 0; i < food_num; i++) {
			printf("음식번호를 입력하세요\n");
			scanf("%d", &choice);
			if (choice == cheezebuldak) {
				sum = sum + 4000;
			}
			if (choice == bulgogi) {
				sum = sum + 5000;
			}
			if (choice == bibimbab) {
				sum = sum + 10000;
			}
			if (choice == zanchi) {
				sum = sum + 2000;
			}
			

		}

		printf("총 지출금액: %d\n", sum);
		
		int random = rand() % 10 + 1;
		printf("%d번째\n", random);
		if (random < 6) {
			
			printf("성범이는 맛있게 점심식사를 했답니다.\n");
		}
		else {
			printf("식사는 다음기회에,,\n");
		}




}