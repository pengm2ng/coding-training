#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	double root1 = 0, root2 = 0;

	scanf("%d %d %d", &a, &b, &c); // ��� �Է¹���

	//���� ����ϴ� ����. ����� ������� ����
	root1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	root2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

	//�Ҽ��� 6��°���� �� ���
	printf("%.06lf, %.06lf", root1, root2);

	return 0;
}
