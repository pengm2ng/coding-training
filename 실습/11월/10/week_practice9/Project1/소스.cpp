#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char s[100] = "";
	int size;
	
	
	//printf("%d", size);

	scanf("%s", s);

	size = strlen(s);
	for (int i = 0; i < size; i++) {
		printf("%c", toupper(s[i]));
	}
	//toupper()




}