#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int a = 5;
	int pibo = 0;
	int prev1 = 1;
	int prev2 = 1;
	for (int i = 0; i <= a; i++) {

		if (a == 1) {
			printf("1");
			break;
		}
		if (a == 0) {
			printf("1");
			break;
		}
		if (a > 1 && i>1) {
			pibo = prev1 + prev2;
			prev1 = prev2;
			prev2 = pibo;

		}
		
	}

	printf("%d", pibo);



}