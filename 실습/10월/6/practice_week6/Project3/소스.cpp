#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define password 'K'

int login(char pw) {
	int result;
	if (password == pw) {
		result = 1;
	}
	else {
		result = 0;
	}

	return result;

}

int main() {

	int flag = 1;
	char input;
	int result;
	while (flag) {
		scanf("%c", & input);
		result = login(input);
		if (result == 1) {

		}
	}



}