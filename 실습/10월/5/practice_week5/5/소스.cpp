#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int n, r;
	scanf("%d %d", &n, &r);
	int result = 1;
	for (int i = n - r + 1; i <= n; i++) {
		result = result * i;
	}
	printf("%d", result);

}