#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int arr[5]={1,2,3,4,5};

	for (int i = 1; i <= sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[sizeof(arr) / sizeof(int) - i]);
	}

}