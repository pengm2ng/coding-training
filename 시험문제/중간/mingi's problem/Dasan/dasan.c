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
		printf("�ֹ��� ���� ����: ");
		scanf("%d", &food_num);
		int choice = 0;
		for (int i = 0; i < food_num; i++) {
			printf("���Ĺ�ȣ�� �Է��ϼ���\n");
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

		printf("�� ����ݾ�: %d\n", sum);
		
		int random = rand() % 10 + 1;
		printf("%d��°\n", random);
		if (random < 6) {
			
			printf("�����̴� ���ְ� ���ɽĻ縦 �ߴ�ϴ�.\n");
		}
		else {
			printf("�Ļ�� ������ȸ��,,\n");
		}




}