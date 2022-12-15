
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	int n;
	int j = 0;
	printf("광고하고 싶은 텍스트를 입력하시오: ");
	gets(a); //문자열을 입력받음

	printf("==================\n"); //구분줄
	n = strlen(a); //문자열의 길이를 구함

	//문자열 출력을 무한반복 시킴
	while (1) {
		for (int i = 0; i < n + 1; i++) { //i는 한 줄을 출력하기 위한 변수이다. 
			//출력부분
			if (i == n) {
				printf("\n"); // i가 n이면 줄바꿈을 한다. 
			}
			else {
				//j는 문자열 출력을 위해 포인터를 다루기 위한 변수이다. 
				printf("%c", *(a + j)); //i가 n이 아닌 경우 해당 번째 문자를 출력한다. 
			}

			if (j == n - 1) {
				j = 0; //j가 n-1일 경우 j를 0으로 바꾼다. 
			}
			else j++; //j를 1 증가하여 다음 문자열을 출력할 수 있도록 한다. 
		}
	}

	return 0;
}