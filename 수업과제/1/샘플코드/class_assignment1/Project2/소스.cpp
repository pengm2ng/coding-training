#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i1, i2, i3, i4, max;

	printf("���� 4���� ���ʷ� �Է��Ѵ�. \n");
	printf("ù��° ����: ");
	scanf("%d", &i1);
	printf("�ι�° ����: ");
	scanf("%d", &i2);
	printf("����° ����: ");
	scanf("%d", &i3);
	printf("�׹�° ����: ");
	scanf("%d", &i4);

	//max�� ���ϱ� ���� ���׿����ڸ� �ߺ��Ͽ� �����. 
	//ù��° ���׿����ڿ��� i1�� i2 �� ū ����, �ι�° ���׿����ڿ��� i3�� i4 �� ū ���� ���Ѵ�. 
	//�� �� ���� ū ���� ���ϴ� �ڵ��̴�. 
	max = ((i1 > i2 ? i1 : i2) > (i3 > i4 ? i3 : i4) ? (i1 > i2 ? i1 : i2) : (i3 > i4 ? i3 : i4));

	printf("���� ū ��: %d", max);
	return 0;
}
