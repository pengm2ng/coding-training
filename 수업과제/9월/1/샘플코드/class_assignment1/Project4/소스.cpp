#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int mid, fin, rep, att;
	double add;
	printf("�߰� ���� �Է�  : ");
	scanf("%d", &mid);
	printf("�⸻ ���� �Է�  : ");
	scanf("%d", &fin);
	printf("�������� �Է� : ");
	scanf("%d", &rep);
	printf("�⼮ ���� �Է�  : ");
	scanf("%d", &att);

	add = mid * 0.3 + fin * 0.4 + rep * 0.2 + att * 0.1; // ���� ��� �κ�

	printf("\n�Է� ����(����)  ����\n");
	printf("�߰�: %d(30%%)    %.02lf\n", mid, mid * 0.3); //������ ���� ����Ѵ�. 
	printf("�⸻: %d(40%%)    %.02lf\n", fin, fin * 0.4);
	printf("����: %d(20%%)    %.02lf\n", rep, rep * 0.2);
	printf("�⼮: %d(10%%)    %.02lf\n", att, att * 0.1);
	printf("����:            %.02lf\n", add);

	return 0;
}
