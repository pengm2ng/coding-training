#include <stdio.h>
#include <string.h>

#define ARR_SIZE 6

void arrayCopy(int* dst, const int* src, int n) {
	int i;
	for (i = 0; i < n; i++) {
		dst[i] = src[i];
	}
}

void printArray(int* arr, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	const int src[ARR_SIZE] = { 0, 1, 2, 3, 4, 5 };
	int dst[ARR_SIZE];
	arrayCopy(dst, src, ARR_SIZE);
	printArray(dst, ARR_SIZE);
	return 0;
}