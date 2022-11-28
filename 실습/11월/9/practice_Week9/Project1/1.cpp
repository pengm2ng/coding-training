#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int data = 0x12345678;
	char* endian = (char*)data;

	printf("%c", *endian);

}