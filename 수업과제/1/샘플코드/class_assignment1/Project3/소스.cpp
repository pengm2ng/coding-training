#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i1, i2, i3, i4;
	double av = 0;
	printf("���:\n");
	printf("  ù ��° �Է� ����:");
	scanf("%d", &i1);
	printf("  �� ��° �Է� ����:");
	scanf("%d", &i2);
	printf("  �� ��° �Է� ����:");
	scanf("%d", &i3);
	printf("  �� ��° �Է� ����:");
	scanf("%d", &i4);
	printf("\n");

	av = (i1 + i2 + i3 + i4) / 4.0; //��� ���, i1~i4�� int���̹Ƿ� 4�� ������ ���� �����. ���� 4.0���� ������� ����ȯ�� �Ǿ ���������� �۵���

	printf("  ******* ���: %.02lf *******\n", av);
	printf("  ù ��° ���� : %d -- ���� : %.02lf\n", i1, i1 - av); //������ ���� - ���
	printf("  �� ��° ���� : %d -- ���� : %.02lf\n", i2, i2 - av);
	printf("  �� ��° ���� : %d -- ���� : %.02lf\n", i3, i3 - av);
	printf("  �� ��° ���� : %d -- ���� : %.02lf\n", i4, i4 - av);

	return 0;
}
