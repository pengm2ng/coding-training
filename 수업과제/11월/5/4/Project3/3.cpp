#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void check_lotto(int lotto[][6], int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			//�迭 �� 2���� ������ ���� ���غ�
			//�� ���� ���ٸ� ���߰��� ���� ���� �� �ٽ� �˻���
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

	printf("�ζǹ�ȣ ����\n");
	printf("����� �ζǹ�ȣ set�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n); //�ζ� ��ȣ set�� ������ �Է¹���

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			lotto[i][j] = rand() % 45 + 1; //������ �ζ� ��ȣ�� ������
		}
		check_lotto(lotto, i); //�ζ� ��ȣ�� �ߺ��� �ִ��� �˻�, �ߺ��� �ִٸ� ���� �ٲ�
	}

	//�ζ� ��ȣ ��� �κ�
	for (int i = 0; i < n; i++) {
		printf("set %d: ", i + 1);
		for (int j = 0; j < 6; j++) {
			printf("  %2.d ", lotto[i][j]); // ���� ������ ���߾� ����Ѵ�. 
		}
		printf("\n");
	}

	return 0;
}