#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // INT_MAX�� ����ϱ� ���� ������

int main() {
	int ib, is;
	float fb, fs, f1;
	ib = INT_MAX;
	is = INT_MIN;
	fb = 3.402823466E+38; //�ε��Ҽ��� �ִ밪
	fs = 1.175494351E-38; //�ε��Ҽ��� 
	f1 = 0.2f;

	printf("������ �����÷ο�: %d + 2 = %d\n", ib, ib + 2);

	printf("������ ����÷ο�: %d - 2 = %d\n", is, is - 2);

	printf("�������� ���� ���: 2 - 2 = 2 + ( -2 ) = 0b00000010 + (0b11111110) = 0b00000000 = 0\n"); // ������ ����Ͽ� ���� ����� �����ַ���

	printf("�ε� �Ҽ��� �����÷ο�: %e * 10000.0f = %e\n", fb, fb * 100000.0f);

	printf("�ε� �Ҽ��� ����÷ο�: %e / 100000000.0f = %e\n", fs, fs / 100000000.0f);

	printf("�ε� �Ҽ����� ����Ȯ��: %.15f\n", f1); // 0.2�� ���;������� �Ҽ��� �ڿ� ���� �� ����

	return 0;
}