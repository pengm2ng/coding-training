#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int i = 0, j = 0;
	int key = 5; //��ȣȭ Ű�� 5�� �����Ѵ�. 
	unsigned char* a;
	FILE* fp;
	FILE* fp_c;
	FILE* fp_d;

	fp = fopen("��.txt", "r"); //��.txt�� �ҷ��´�. 
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	fp_c = fopen("��ȣȭ.txt", "w"); //��ȣȭ.txt�� �ҷ��´�.
	if (fp_c == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	//malloc�� �̿��Ͽ� ���� �޸𸮸� �Ҵ��Ѵ�. 
	a = (unsigned char*)malloc(sizeof(unsigned char) * 100);

	while (!feof(fp)) {
		//������ ���� �����ϱ� ������ �����Ѵ�. 
		fscanf(fp, "%c", &a[i]); //��.txt �� ������ �ܾ �о�´�. 
		//��ȣȭ.txt�� key�� XOR�����Ͽ� �����Ѵ�. 
		fprintf(fp_c, "%c", a[i] ^ key);
		i++; //i�� 1 �����Ѵ�. 
	}
	fclose(fp);
	fclose(fp_c);
	free(a); //���� �޸� �ݳ�

	fp_c = fopen("��ȣȭ.txt", "r"); //��ȣȭ.txt�� �ҷ��´�. 
	if (fp_c == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	fp_d = fopen("��ȣȭ.txt", "w"); //��ȣȭ.txt�� �ҷ��´�. 
	if (fp_d == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	a = (unsigned char*)malloc(sizeof(unsigned char) * 100); //�����޸� �Ҵ�
	while (j < i - 1) {
		fscanf(fp_c, "%c", &a[j]); //��ȣȭ.txt �� ������ �ܾ �о�´�. 
		//��ȣȭ.txt�� key�� XOR�����Ͽ� �����Ѵ�. �� ��� ��ȣȭ�ȴ�. 
		fprintf(fp_d, "%c", a[j] ^ key);
		j++; //j�� ������Ų��. 
	}
	fclose(fp_c);
	fclose(fp_d);
	free(a);
	return 0;
}