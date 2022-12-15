#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct prod {
	unsigned char name[100];
	int price;
	int num;
	long long int sum;
}PROD; //������ǰ�� ���� ����ü PROD�� �����Ѵ�. 

int main() {
	PROD product[10];
	int i = 0;
	long long int sum = 0;
	FILE* fp; //���� �����͸� ����

	fp = fopen("price.txt", "r"); //price.txt�� �б� ���� �ҷ���
	if (fp == NULL) {
		//������ ������ ���� ��쿡 ���� ���� ó��
		printf("���� ���� ����\n");
		return 0;
	}
	while (!feof(fp)) { // ������ �� ���� ������ �� ���� �ݺ�
		//���Ͽ��� �� �پ� �ҷ����� ���Ŀ� ���� ���� �����Ѵ�. 
		fscanf(fp, "%s %d", product[i].name, &product[i].price);
		i++;
	}
	fclose(fp);

	printf("%s    %s\n", "ǰ��", "�ܰ�");

	for (int j = 0; j < i; j++) {
		//���Ŀ� ���� �ֿܼ� �����
		printf("%s   %d\n", product[j].name, product[j].price);
	}

	fp = fopen("sales.txt", "w"); //sales.txt�� ���� ���� �ҷ���
	if (fp == NULL) {
		//������ ������ ���� ��쿡 ���� ���� ó��
		printf("���� ���� ����\n");
		return 0;
	}

	for (int j = 0; j < i; j++) {
		//�� ǰ���� ������ �Է¹���
		printf("%s�� �����Է� �� Enter>", product[j].name);
		scanf("%d", &product[j].num);

		//�� ǰ�� ���Ͽ� �ݾ��� ����ϰ� �̸� ������ǥ�� �Է��Ѵ�. 
		product[j].sum = product[j].num * product[j].price;
		fprintf(fp, "%s %d %d %lld\n", product[j].name,
			product[j].price, product[j].num, product[j].sum);
		sum += product[j].sum; //�հ踦 ����Ѵ�. 
	}
	fprintf(fp, "�հ� : %lld", sum); //�հ踦 ������ǥ�� �Է��Ѵ�. 

	fclose(fp);

	printf("������ǥ(sales.txt) ������ Ȯ���Ͻÿ�.\n");

	return 0;
}