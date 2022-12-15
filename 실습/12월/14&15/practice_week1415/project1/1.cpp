#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	int num;
	char** array;
	char temp[10];
	printf("학생수 입력: ");
	scanf("%d", &num);

	array = (char**)malloc(sizeof(char*) * num);

	if (array == NULL) {
		printf("Not enough memory\n");

	}

	
	int i = 0; // 반복 제어변수 초기화
	while (1) { 
		scanf("%s", temp); // 문자열 입력
		if (temp[0] == '\0') break; // 엔터만 입력되면 입력 종료

		array[i] = (char*)malloc(strlen(temp) + 1); // 문자열을 저장할 메모리 할당
		strcpy(array[i], temp); // 문자열 복사
		i++;
		if (i == num) { // 입력된 문자열의 수를 검사
			break; // 반복문을 빠져나간다
		}
	}
	


	for (i = 0; i < num; i++) {
			
		printf("%s\n", array[i]);
		free(array[i]);
	}

	free(array);



}