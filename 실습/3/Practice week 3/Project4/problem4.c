#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int code = 1095389013;

	int mask = 0b11111111;
	int word1 = (code & (mask << 24)) >> 24;
	int word2 = (code & (mask << 16)) >> 16;
	int word3 = (code & (mask << 8)) >> 8;
	int word4 = (code & mask);

	printf("%c%c%c%c", word1, word2, word3, word4); //AJOU

	return 0;
}