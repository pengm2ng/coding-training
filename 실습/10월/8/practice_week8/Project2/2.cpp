#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a = 1;
	int b = 10;
	int input;
	int arr[100]={0};
	int size = sizeof(arr) / sizeof(int);
	while (true) {
		scanf("%d", &input);


		if (input == -1) {
			break;
		}

		arr[input - 1] ++;


	}


	for (int i = a-1; i < b; i++) {
		if (arr[i] == 0) {
			printf("%d ", i + 1);
		}
	}

}