#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c1, c2, c3, c4, c5, c6, c7, c8;
	int key;

	printf("��ȣ�� �Է�: ");
	scanf("%c%c%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8); //��ȣ �Է¹���

	printf("��ȣŰ �Է�: ");
	scanf("%d", &key); //��ȣŰ �Է�

	//��ȣȭ�κ�
	c1 += key;
	c2 += key;
	c3 += key;
	c4 += key;
	c5 += key;
	c6 += key;
	c7 += key;
	c8 += key;
	printf("1�� ��ȣȯ�� ����: %c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8);
	
	
	c1 = (c1 % 65 >25) ? c1-26 : c1;
	c2 = (c2 % 65 > 25) ? c2 - 26 : c2;
	c3 = (c3 % 65 > 25) ? c3 - 26 : c3;
	c4 = (c4 % 65 > 25) ? c4 - 26 : c4;

	c5 = (c5 % 65 > 25) ? c5 - 26 : c5;
	c6 = (c6 % 65 > 25) ? c6 - 26 : c6;
	c7 = (c7 % 65 > 25) ? c7 - 26 : c7;
	c8 = (c8 % 65 > 25) ? c8 - 26 : c8;


	printf("���� �� ��ȣȯ�� ����: %c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8);




	//��ȣȭ �κ�
	c1 -= key;
	c2 -= key;
	c3 -= key;
	c4 -= key;
	c5 -= key;
	c6 -= key;
	c7 -= key;
	c8 -= key;

	//��ȣȭ�� ���� 65���� ������ ���� +25�Ͽ� ��ȯ��Ŵ
	c1 = (c1 < 65) ? c1 + 26 : c1;
	c2 = (c2 < 65) ? c2 + 26 : c2;
	c3 = (c3 < 65) ? c3 + 26 : c3;
	c4 = (c4 < 65) ? c4 + 26 : c4;
	c5 = (c5 < 65) ? c5 + 26 : c5;
	c6 = (c6 < 65) ? c6 + 26 : c6;
	c7 = (c7 < 65) ? c7 + 26 : c7;
	c8 = (c8 < 65) ? c8 + 26 : c8;

	printf("��ȣȭ�� ����: %c%c%c%c%c%c%c%c\n", c1, c2, c3, c4, c5, c6, c7, c8); //��ȣ ���

	printf("A-Z : %d\n", 'A' - 'Z');

	printf("X�� 65���� ������ : %d\n", 'X' % 65);
	printf("Y�� 65���� ������ : %d\n", 'Y' % 65);
	printf("Z�� 65���� ������ : %d\n", 'Z' % 65);
	
	return 0;
}