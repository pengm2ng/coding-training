#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int count = 0;
	char input;
	int arr[26] = { 0 };
	
	while (true) {
		count = count + 1;
		if (count > 20) {
			break;

		}
		scanf("%c", &input);
		
		arr[(int)input - 65]++;
		rewind(stdin);

	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%c: %d\n", (char)(i + 65), arr[i]);
	}
}