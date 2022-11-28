#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char alphabet[] = "abcdefghizklmnopqrstuvwxyz";
	char input = 'd';
	int alphabet_size = strlen(alphabet);
	int input_size = strlen(strchr(alphabet, input));
	char* rare = strchr(alphabet, input);
	int index = 0;
	char temp[100] = { 0 };
	for (int i = 0; i < alphabet_size; i++) {
		if (alphabet[i] == input) {
			index = i;
			break;
		}

		temp[i] = alphabet[i];

	}
	
	
	printf("%s\n", temp);
	printf("%s", strchr(alphabet, input));






}