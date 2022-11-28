#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {


	char str[100] = "";
	char com_str[100] = {0};
	gets_s(str);
	int str_size = strlen(str);
	int token_size;
	char* p = strtok(str, " ");
	int flag = 1;
	while (p) {
		token_size = strlen(p);
		str_size = str_size - token_size;
		for (int i = 0; i < token_size; i++) {
			if (str[str_size + i] == *(p + i)) {

			}
			else {
				flag = 0;
			}
			
		}
		p = strtok(NULL, " ");
		str_size = str_size - 1;
	}

	if (flag == 1) {
		printf("true");
	}
	else {
		printf("false");
	}
		











}