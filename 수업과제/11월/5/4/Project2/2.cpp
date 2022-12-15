#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(double a[][9], int n) {
	switch (n) //�� ���̽��� ������ �հ踦 ����Ѵ�. 
	{
	case 1:
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 7; j++) {
				a[i][7] += a[i][j]; //a[i][7]�� ���Ϻ� �����͵��� ���Ѵ�.
			}
		}
		break;
	case 2:
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 4; j++) {
				a[4][i] += a[j][i]; //�� ���Ϻ��� ��ü �հ踦 ����
			}
		}
		break;

	default:
		break;
	}
	return;
}

void mean(double a[][9], int n) {
	switch (n)
	{
	case 1:
		for (int i = 0; i < 4; i++) {
			a[i][8] = a[i][7] / 7; //�� ������ ����� ����Ѵ�. 
		}

		break;
	case 2:
		for (int i = 0; i < 9; i++) {
			a[5][i] = a[4][i] / 4; // �� ���Ϻ��� ��ü ����� ����
		}
		break;

	default:
		break;
	}
	return;
}

int main() {
	//�迭�� 4�ְ� ������ ���Ϻ� ���·��� �̸� �Է��Ѵ�.
	double a[6][9] = {
		{25, 30, 22, 28, 32, 45, 30},
		{22, 25, 28, 26, 38, 40, 33},
		{25, 34, 20, 22, 40, 36, 37},
		{22, 28, 27, 28, 35, 40, 32}
	};
	//�迭�� �̸� ���ϵ��� ����־� ����� ���ϰ� �ϵ��� �Ѵ�. 
	//�ѱ��� 2bite�� ��������� ��ü ũ���� �ι踸ŭ �������־���. 
	char day[16] = "��ȭ���������";

	sum(a, 1);
	mean(a, 1);
	sum(a, 2);
	mean(a, 2);


	//���ϰ� �հ�, ����� ����Ѵ�. 
	printf("���� ");
	for (int i = 0; i < 7; i++) {
		printf("  %c%c", day[2 * i], day[2 * i + 1]);
	}
	printf("   �հ�  ���\n");

	//4�ֿ� ���� �� ���Ϻ� �����Ϳ�, �հ�, ����� ����Ѵ�. 
	for (int i = 0; i < 4; i++) {
		printf("%d��: ", i + 1);
		for (int j = 0; j < 7; j++) {
			printf("%4.0lf", a[i][j]); //�� ���Ϻ� �����͸� ����Ѵ�. 
		}
		printf("  %.1lf", a[i][7]); //�� ������ �հ踦 ����Ѵ�. 
		printf("  %.1lf", a[i][8]); //����� ����Ѵ�. 
		printf("\n");
	}

	//�հ� ��� �κ�
	printf("�հ� ");
	for (int i = 0; i < 7; i++) {
		printf("%4.0lf", a[4][i]);
	}
	printf("  %.1lf", a[4][7]);
	printf(" %.1lf\n", a[4][8]);

	//��� ��� �κ�
	printf("��� ");

	for (int i = 0; i < 7; i++) {
		printf("%4.0lf", a[5][i]);
	}
	printf("  %.1lf", a[5][7]);
	printf("  %.1lf\n", a[5][8]);

	return 0;
}