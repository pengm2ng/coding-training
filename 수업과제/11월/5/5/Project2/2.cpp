#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char input[100];
	char a[4];
	int i1, i2;

	printf("������ �Է�: ");
	gets(input); //���ڿ��� �Է¹���
	//�Է¹��� ���ڿ� �� ������ ��Ÿ���� ���ڿ��� ���� �� ���� ������. 
	sscanf(input, "%s %d %d", a, &i1, &i2);

	printf("������ ���: ");
	//���� ���ڸ� ���Ͽ� ���� ��� �ش� ������ �ǽ���.
	if (!strcmp(a, "add")) {
		printf("%d", i1 + i2); //���ϱ� ������ ������
	}
	else if (!strcmp(a, "sub")) {
		printf("%d", i1 - i2); //���� ������ ������
	}
	else if (!strcmp(a, "mul")) {
		printf("%d", i1 * i2); //���ϱ� ������ ������
	}
	else if (!strcmp(a, "div")) {
		printf("%lf", (double)i1 / i2); //������ ������ �����ϰ�, �ش� ����� �Ǽ������� ���
	}

	return 0;
}