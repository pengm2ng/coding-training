/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int kor, eng, math;
	double av;

	printf("����, ����, ���� ������ �Է��Ͻÿ�");
	scanf("%d %d %d", kor, eng, math);

	av = (kor + eng + math) / 3.0;

	if (av >= 60) printf("�հ��Դϴ�.");
	else printf("���հ��Դϴ�.");

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int kor, eng, math;
	double av;

	printf("����, ����, ���� ������ �Է��Ͻÿ�");
	scanf("%d %d %d", &kor, &eng, &math);

	av = (kor + eng + math) / 3.0;

	if (kor < 60 || eng < 60 || math < 60) printf("�����Դϴ�.");
	else if (av >= 60) printf("�հ��Դϴ�.");
	else printf("���հ��Դϴ�.");

	return 0;
}