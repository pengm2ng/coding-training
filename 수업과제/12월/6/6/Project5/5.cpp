#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct prod {
	unsigned char name[100];
	int price;
	int num;
	long long int sum;
}PROD; //��ǰ�� �Է¹��� ����ü PROD�� ����

int main() {

	PROD product[10];
	FILE* fp;

	int i = 0;
	long long int sum = 0;
	/*
	fp = fopen("price.txt", "r");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}
	while (!feof(fp)) {
		fscanf(fp, "%s %d", product[i].name, &product[i].price);
		i++;
	}
	fclose(fp);

	fp = fopen("price.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}
	fwrite(product, sizeof(PROD), i, fp);
	fclose(fp);
	*/
	//�� �ּ��� 6-4 �ڵ��� �Ϻη� bin������ �����ϱ� ���� �ڵ��̴�. 
	i = 4; //���� �ڵ� ������ int�� 4��� ����� ��⿡ �̷��� ������. 
	fp = fopen("price.bin", "rb"); //price.bin������ �ҷ��´�. 
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}
	fread(product, sizeof(PROD), i, fp); //bin������ �о�´�. 
	fclose(fp);


	printf("%s    %s\n", "ǰ��", "�ܰ�");
	for (int j = 0; j < i; j++) {
		//��ǰ�� �̸��� ������ ����Ѵ�. 
		printf("%s   %-10d\n", product[j].name, product[j].price);
	}

	fp = fopen("sales.txt", "w"); //sales.txt�� �ҷ��´�. 
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	for (int j = 0; j < i; j++) {
		printf("%s�� �����Է� �� Enter>", product[j].name);
		scanf("%d", &product[j].num); //��ǰ�� ������ �Է¹޴´�. 
		//��ǰ�� �ݾ��� ����Ͽ� �����Ѵ�. 
		product[j].sum = product[j].num * product[j].price;
		//ǰ��, �ܰ�, ����, �ݾ��� ���Ͽ� ����Ѵ�. 
		fprintf(fp, "%s %d %d %lld\n", product[j].name,
			product[j].price, product[j].num, product[j].sum);
		sum += product[j].sum; //sum�� ��ǰ�� �ݾ��� ���Ѵ�. 
	}
	fprintf(fp, "�հ� : %lld", sum); //��ü �հ踦 ���Ͽ� ����Ѵ�. 

	fclose(fp);

	printf("������ǥ(sales.txt) ������ Ȯ���Ͻÿ�.\n");

	return 0;
}