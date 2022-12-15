#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binarySearch(int list[], int* endPtr, int target, int** locPtr) {
	//���� Ž�� �Լ�
	int* mid = list + (endPtr - list) / 2; //�߰����� �ּҸ� ã�´�. 
	if (*mid == target) { //�߰����� ���� ���ϴ� ���� ���
		*locPtr = mid; //���� ��ġ�� �߰����� �ּҸ� �����ϰ�
		return 1; //1�� ��ȯ�Ѵ�. 
	}
	else if (mid == list) { //�߰����� ������ġ���
		return 0; //0�� ��ȯ�Ѵ�. (�ش� �迭�� ����)
	}
	else if (*mid > target) { //�߰����� ���� ���ϴ� ������ ũ��
		//�������� �߰����� ������ �Ͽ� ����Ž���� �ٽ� �����Ѵ�. 
		return binarySearch(list, mid, target, locPtr);
	}
	else if (*mid < target) { //�߰����� ���� ���ϴ� ������ ������
		//�߰����� ������ ������ �Ͽ� ����Ž���� �ٽ� �����Ѵ�. 
		return binarySearch(mid, endPtr, target, locPtr);
	}
}

int main() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //�迭 ����
	int target, check = 0;
	int* locPtr = NULL;
	scanf("%d", &target); //Ÿ�� �� �Է�
	//����Ž�� ���� �� �迭 �� ���� ������ 1�� ��ȯ, �ƴϸ� 0 ��ȯ
	check = binarySearch(arr, arr + sizeof(arr) / sizeof(int), target, &locPtr);

	if (check) {
		//���� ������ �� ���� ����Ѵ�. 
		printf("%d\n", *locPtr);
	}
	else {
		printf("���� ã�� �� �����ϴ�.\n");
	}
	return 0;
}