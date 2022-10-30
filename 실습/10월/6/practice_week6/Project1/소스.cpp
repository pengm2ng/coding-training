#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int minus_function(int n, int r) {

	int result = 1;
	for (int i = 0; i <= r - 1; i++) {
		result *= n - i;

	}

	return result;
}


int main() {


	int a= minus_function();







}