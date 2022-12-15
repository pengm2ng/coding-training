#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	//��Ŭ���� ȣ������ ����Լ��� �̿��Ͽ� MOD������ �ݺ��Ͽ� �������� 0�� �� ������ ����
	//�������� 0�� �Ǿ��� ���� ������ ���� �ִ������̴�. 
	if (y == 0) *p_gcd = x;
	else get_lcm_gcd(y, x % y, p_lcm, p_gcd);

	//������ ���� �ִ������� �̿��Ͽ� �ּҰ������ ���Ѵ�. 
	*p_lcm = (double)x * y / (*p_gcd);
	return;
}

int main() {
	int n1, n2;
	int lcm, gcd;
	printf("�� ����� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &n1, &n2); //�� ������ �Է¹޴´�. 

	get_lcm_gcd(n1, n2, &lcm, &gcd); //�ּҰ������ �ִ������� ���Ѵ�. 
	printf("�ּҰ������ %d�Դϴ�.\n", lcm); //�ּҰ������ ����Ѵ�. 
	printf("�ִ������� %d�Դϴ�.\n", gcd); //�ִ������� ����Ѵ�. 
	return 0;
}