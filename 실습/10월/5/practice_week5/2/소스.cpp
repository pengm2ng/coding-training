#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int random = rand() % 99 + 1;
	int flag = 1;
	int input;
	while (flag) {
		printf("ют╥б>>");
		scanf("%d", &input);
		if (random > input) {
			printf("up\n");
		}
		else if (random < input) {

			printf("Down\n");
		}
		else if (random == input) {
			printf("correct\n");
			break;
		}




	}


}