#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main() {

	for (float i = 0.01; i >= 0.008; i = i - 0.0002) {

		printf("%.1e\n", i);

	}



}