#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	int num;
	char** array;
	char temp[10];
	printf("�л��� �Է�: ");
	scanf("%d", &num);

	array = (char**)malloc(sizeof(char*) * num);

	if (array == NULL) {
		printf("Not enough memory\n");

	}

	
	int i = 0; // �ݺ� ����� �ʱ�ȭ
	while (1) { 
		scanf("%s", temp); // ���ڿ� �Է�
		if (temp[0] == '\0') break; // ���͸� �ԷµǸ� �Է� ����

		array[i] = (char*)malloc(strlen(temp) + 1); // ���ڿ��� ������ �޸� �Ҵ�
		strcpy(array[i], temp); // ���ڿ� ����
		i++;
		if (i == num) { // �Էµ� ���ڿ��� ���� �˻�
			break; // �ݺ����� ����������
		}
	}
	


	for (i = 0; i < num; i++) {
			
		printf("%s\n", array[i]);
		free(array[i]);
	}

	free(array);



}