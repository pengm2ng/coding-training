#define _CRT_SECURE_NO_WARNINGS
#define LEFT 0
#define RIGHT 0
#define STEPSIZE 10
#define MBEXP 500
#define MBJUMP 50
#define MBFROG 100


#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>


int main() {

	const int BOUND = 30;

	int dir, final, count = 0;
	srand(time(NULL));
	int t = 0;

	printf("�ð��Է�(��): ");
	scanf("%d", &t);



	for (int i = 0; i < MBFROG; i++) { //������ 100������ ����
		final = 0;
		for (int k = 0; k < (t * 60); k++) {
			dir = rand() % 2;

			if (dir == RIGHT) {
				final += STEPSIZE;
			}
			else {
				final -= STEPSIZE;
			}
		}
		if (final >= -BOUND && final <= BOUND) {
			count++;
		}
	}


	printf("30���� �̳��� �����ϴ� �������� ��: %d\n", count);




}