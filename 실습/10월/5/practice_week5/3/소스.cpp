#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int num = 12;

	for (int i = 1; i <= 12; i++) {

		if (num % i == 0)
			printf("%d", i);
	}

}