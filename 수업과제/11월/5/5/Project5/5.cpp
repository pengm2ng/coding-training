#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct acc {
	char name[100];
	int id;
	int cash;
}; //����ü ����

int menu() { //�޴� ���� �Լ�
	int n;
	//ATM�ý��� �޴��� ����Ѵ�. 
	printf("*********ATM�ý���***************\n");
	printf("1. �ܾ� Ȯ��\n");
	printf("2. ���� ����\n");
	printf("3. ���� �Ա�\n");
	printf("4. ����\n");
	printf("************************\n\n");

	printf("�����Ͻÿ�: ");
	scanf("%d", &n); //����� ���񽺸� �Է¹޴´�. 
	return n; //�ش� ��ȣ�� ��ȯ�Ѵ�. 
}

int atm(struct acc* acc1, int n) { //atm ��� ����
	int tmp = 0;
	switch (n)
	{
	case 1: //�ܾ��� Ȯ���Ѵ�. 
		printf("�ܾ�: %d\n", (*acc1).cash); //���� �ܰ� ����Ѵ�. 
		break;
	case 2: //���� ���� ���� ���
		printf("����ݾ�: ");
		scanf("%d", &tmp); //������ �ݾ��� �Է¹޴´�. 
		(*acc1).cash -= tmp; //���� �ܰ��� ������ �ݾ׸�ŭ�� ����.
		printf("������ ��������\n");
		printf("���� �ܾ�: %d\n", (*acc1).cash); //���� �ܰ� ����Ѵ�. 
		break;
	case 3: //���� �Ա� ���� ��� 
		printf("�Աݱݾ�: ");
		scanf("%d", &tmp); //�Ա��� �ݾ��� �Է¹޴´�. 
		(*acc1).cash += tmp; //���� �ܰ��� �Ա��� �ݾ��� ���Ѵ�. 
		printf("���� �ܾ�: %d\n", (*acc1).cash); //���� �ܰ� ����Ѵ�. 
		break;

	case 4: //���α׷��� �����Ѵ�. 
		printf("�����մϴ�. ");
		return 1; //�Լ� �����ϸ� 1�� ��ȯ�Ѵ�. 

	default:
		break;
	}
	return 0; //�Լ� �����ϸ� 0�� ��ȯ�Ѵ�. 
}

int main() {
	struct acc kms;
	int pin;
	int check, tmp;
	char ctmp;
	strcpy(kms.name, "KangMinsung"); //���� ������ �̸� �Է�
	kms.id = 1234; //������ PIN��ȣ �Է�
	kms.cash = 100000; //������ �ܰ� �Է�


	printf("PIN ��ȣ�Է�: ");
	scanf("%d", &pin); //PIN��ȣ Ȯ��
	if (pin != kms.id) { //PIN��ȣ�� ��ġ���� ������ ���α׷� ����
		printf("�߸��� pin�Դϴ�. \n");
		return 0;
	}

	while (1) {
		check = menu(); //�޴����� �Լ��� �����Ų��. 
		tmp = atm(&kms, check); //atm���� �Լ��� �����Ų��. 
		if (tmp) { //���� ��ɾ� �Է½� ���α׷��� �����Ѵ�. 
			return 0;
		}
		printf("�ٸ� �ŷ��� �Ͻðڽ��ϱ�?(y/n):");
		scanf(" %c", &ctmp); //�ٸ� �ŷ��� �� ������ ����� ���ڸ� �Է¹���
		if (ctmp == 'n') { //n�� ���´ٸ� �Լ��� �����Ѵ�. 
			printf("�����մϴ�");
			break;
		}
	}
	return 0;
}