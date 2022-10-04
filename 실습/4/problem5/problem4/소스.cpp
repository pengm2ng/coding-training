#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;

	scanf("%c", &c);

	switch (c)
	{
	case 'A':
		printf("Alfa");
		break;

	case 'B':
		printf("Bravo");
		break;

	case 'C':
		printf("Charlie");
		break;

	default:
		printf("Error");
		break;
	}

	return 0;
}