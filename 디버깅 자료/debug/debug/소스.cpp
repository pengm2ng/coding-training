#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int calculate(int a, int b);

int main() {

	int a, b, result;

	printf("(a���� + b����)/(2a-b)�� ����մϴ�.\n");
	printf("�� ���� �Է� (a,b):");

	scanf("%d %d", &a, &b);
	result = calculate(a, b);

	printf("result = %d\n", result);


	return 0;

}

int calculate(int a, int b) {
	int result;
	result = (a * a + b * b) / (2 * a - b);

	return result;
}