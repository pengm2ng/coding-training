#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double e = 0, fac = 1, ex = 0; //����� ���� �������� ����
	int x, xn = 1;

	//e ���
	e += 1; //i�� 0�� ��쿡 ���Ͽ� �̸� �����
	for (int i = 1; i <= 100; i++) {
		fac *= i; //���丮�� ���
		e += 1 / fac; 
	}
	printf("e ��: ");
	printf("%lf\n\n", e); //e�� ���


	fac = 1; //f �ʱ�ȭ

	//e^x ���
	printf("x�� : ");
	scanf("%d", &x); //x���� �Է¹���
	ex += 1; //i�� 0�� ��쿡 ���Ͽ� �̸� �����
	for (int i = 1; i <= 100; i++) {
		fac *= i; //���丮�� ���
		xn *= x; //x^i ���
		ex += xn / fac; // (x ^ i) / (i!)�� ex�� ����
	}
	printf("e^x �� : ");
	printf("%lf", ex); //ex�� ���

	return 0;
}