#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void merge(int* A, int* B, int* C, int size) {
	int i = 0, j = 0, k;

	for (k = 0; k < size * 2; k++) {
		//A Ȥ�� B ���� ��Ұ� �� �������� �� �ݺ����� �����Ѵ�. 
		if (i >= size || j >= size) break;
		else {
			if (A[i] < B[j]) { //A�� �� ���� ��쿡 ���Ͽ�
				C[k] = A[i]; //C[k]�� �ش� ���� �����Ѵ�. 
				i++; //���� �ݺ������� ������°�� ��Ҹ� �˻��ϱ����� ����
			}
			//���� ����
			else {
				C[k] = B[j];
				j++;
			}
		}
	}
	for (k; k < size * 2; k++) {
		//A Ȥ�� B�� ��Ұ� �� �������� �� �ٸ� �迭�� ��ҷ� �������� ä��
		if (i > size) {
			C[k] = B[j];
			j++;
		}
		else {
			C[k] = A[i];
			i++;
		}
	}
	return;
}

int main() {
	int A[4] = { 2,5,7,8 }, B[4] = { 1,3,4,6 };
	int C[8] = { 0 };

	int size = sizeof(A) / sizeof(int); //�迭�� ũ�⸦ ���Ѵ�. 

	merge(A, B, C, size); //marge �Լ��� �����Ѵ�. 
	printf("A[] = "); //�迭 A�� ����Ѵ�. 
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("B[] = "); //�迭 B�� ����Ѵ�. 
	for (int i = 0; i < size; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	printf("C[] = "); //�迭 C�� ����Ѵ�. 
	for (int i = 0; i < size * 2; i++) {
		printf("%d ", C[i]);
	}

	return 0;
}
