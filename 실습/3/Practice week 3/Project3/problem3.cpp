#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year, result;
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	printf("%s\n", result ? "¿±≥‚¿‘¥œ¥Ÿ" : "¿±≥‚¿Ã æ∆¥’¥œ¥Ÿ");

	return 0;
}