#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int num = 12;
	int flag = 1;
	int count = 0;
	while (flag)
	{
		count = count + 1;
		if (count > num) {
			break;
		}

		if (num % count == 0) {
			printf("%d", count);
		}

	

	}


}