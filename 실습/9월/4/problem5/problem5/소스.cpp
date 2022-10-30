#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


	srand(time(NULL));
	int random_number_range_1_3 = rand() % 3 + 1;
	char mine;

	scanf("%c", &mine);


	printf("%d\n", random_number_range_1_3);

	switch (mine) {
		case 'R':

			if (random_number_range_1_3 == 1) {
				printf("¹«");
			}
			else if (random_number_range_1_3 == 2) {
				printf("½Â");
			}
			else if (random_number_range_1_3 == 3) {
				printf("ÆÐ");
			}
			break;

		case 'S':
			if (random_number_range_1_3 == 1) {
				printf("ÆÐ");
			}
			else if (random_number_range_1_3 == 2) {
				printf("¹«");
			}
			else if (random_number_range_1_3 == 3) {
				printf("½Â");
			}
			break;

		case 'P':
			if (random_number_range_1_3 == 1) {
				printf("½Â");
			}
			else if (random_number_range_1_3 == 2) {
				printf("ÆÐ");
			}
			else if (random_number_range_1_3 == 3) {
				printf("¹«");
			}
			break;
	}	


}
