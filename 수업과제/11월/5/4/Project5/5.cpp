#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void merge(int* A, int* B, int* C, int size) {
	int i = 0, j = 0, k;

	for (k = 0; k < size * 2; k++) {
		//A 혹은 B 속의 요소가 다 떨어지면 위 반복문을 종료한다. 
		if (i >= size || j >= size) break;
		else {
			if (A[i] < B[j]) { //A가 더 작은 경우에 대하여
				C[k] = A[i]; //C[k]에 해당 값을 저장한다. 
				i++; //다음 반복에서는 다음번째의 요소를 검사하기위한 조작
			}
			//위와 동일
			else {
				C[k] = B[j];
				j++;
			}
		}
	}
	for (k; k < size * 2; k++) {
		//A 혹은 B의 요소가 다 떨어졌을 때 다른 배열의 요소로 나머지를 채움
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

	int size = sizeof(A) / sizeof(int); //배열의 크기를 구한다. 

	merge(A, B, C, size); //marge 함수를 실행한다. 
	printf("A[] = "); //배열 A를 출력한다. 
	for (int i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("B[] = "); //배열 B를 출력한다. 
	for (int i = 0; i < size; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	printf("C[] = "); //배열 C를 출력한다. 
	for (int i = 0; i < size * 2; i++) {
		printf("%d ", C[i]);
	}

	return 0;
}
