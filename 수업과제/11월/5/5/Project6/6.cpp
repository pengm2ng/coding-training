#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct bank {
	char name;
	char acc[13];
}; //����ü ����

void checkBank(struct bank* b) { //������ Ȯ���ϴ� �Լ�
	int n = strlen((*b).acc); //���¹�ȣ�� ���̸� Ȯ��
	if (n == 7) { //���¹�ȣ ���̰� 7�̸� �ش� ���´� A������ ������ �Ǵ�
		(*b).name = 'A';
	}
	else if (n == 10) { //���¹�ȣ ���̰� 10�̸� �ش� ���´� B������ ������ �Ǵ�
		(*b).name = 'B';
	}
	else if (n == 12) { //���¹�ȣ ���̰� 12�̸� �ش� ���´� C������ ������ �Ǵ�
		(*b).name = 'C';
	}
	printf("������� : %c ���¹�ȣ: %s ", (*b).name, (*b).acc);
	return;
}

int main() {
	struct bank input;
	struct bank output;

	printf("��� ���¹�ȣ �Է� �� Enter>");
	scanf("%s", &output.acc); //��� ���¹�ȣ�� �Է¹޴´�. 
	printf("�Ա� ���¹�ȣ �Է� �� Enter>");
	scanf("%s", &input.acc); //�Ա� ���¹�ȣ�� �Է¹޴´�. 

	checkBank(&output); //��� ���¹�ȣ�� ���� ������ Ȯ���ϴ� �Լ��� ����
	checkBank(&input); //�Ա� ���¹�ȣ�� ���� ������ Ȯ���ϴ� �Լ��� ����

	return 0;
}