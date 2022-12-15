#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define FOODNUM 2

typedef struct food {
	//������ �̸�, ����, ������ ������ ����ü ���� FOOD�� ����
	char name[50];
	int cost;
	int num;
}Food;

void befotable(Food* a) {
	//�ֹ���ǥ�� ����ϴ� �Լ�
	printf("\n");
	printf("�ֹ���ǥ\n");
	printf("-----------------------\n");

	//���� ������ŭ �ݺ����� �����Ų��. 
	for (int i = 0; i < FOODNUM; i++) {
		if (a[i].num != 0) {
			//�ش� ������ �ֹ��� ������ 0���� �ƴϸ� �ش� ������ �̸��� ������ �����
			printf("%-6s%3d��\n", a[i].name, a[i].num);
		}
	}
	printf("\n");
	return;
}

void selltable(Food* a) {
	printf("\n");
	int total = 0;
	printf("������ǥ\n");
	printf("-----------------------\n");

	//���� ������ŭ �ݺ����� �����Ų��. 
	for (int i = 0; i < FOODNUM; i++) {
		if (a[i].num != 0) {
			//������ ���� total�� ������
			total += a[i].cost * a[i].num;

			//�ش� ������ �ֹ��� ������ 0���� �ƴϸ� �ش� ������ �̸��� ������ �����
			printf("%-6s%3d%8d��%8d��\n", a[i].name, a[i].num, a[i].cost, a[i].cost * a[i].num);
		}
	}
	printf("�Ѿ� : %d��", total); //������ �����
	printf("\n");
	return;
}

void check(Food* a, char input[]) {
	int n;
	int k = strlen(input) / 2; //�ѱ��̱⿡ 2�� ������ ���ڿ��� ���̸� ���Ѵ�.
	for (int i = 0; i < FOODNUM; i++) { //���� ������ŭ �ݺ����� ������
		for (int j = 0; j < k; j++) { //k��ŭ �ݺ����� ������
			n = strncmp(input + j * 2, (a)[i].name, 2); //���İ� ���ڿ� �� 2ĭ(�ѱ۷� 1����)�� ���Ѵ�.
			if (!n) { //�� ���ڿ��� ���ٸ�(strncmp���� �� ���ڿ��� ���ٸ� 0�� ��ȯ)
				(a)[i].num++; //������ ������ �ϳ� ������Ų��. 
			}
		}
	}
	befotable(a); //�ֹ���ǥ ���
	selltable(a); //������ǥ ���
	return;
}


int main() {
	char input[100];
	Food a[FOODNUM] = {
		{"¥���", 4500, 0},
		{"�쵿", 6500, 0}
	}; //����ü a�� �����Ͽ��д�. 
	printf("�ֹ��� �Է��ϰ� Enter>");
	scanf("%s", input); //���ڿ��� �Է¹޴´�. 

	check(a, input); //check�Լ� ����

	return 0;
}