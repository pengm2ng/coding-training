#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int i = 0, j = 0;
	int key = 5; //암호화 키를 5로 설정한다. 
	unsigned char* a;
	FILE* fp;
	FILE* fp_c;
	FILE* fp_d;

	fp = fopen("평문.txt", "r"); //평문.txt를 불러온다. 
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	fp_c = fopen("암호화.txt", "w"); //암호화.txt를 불러온다.
	if (fp_c == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	//malloc을 이용하여 동적 메모리를 할당한다. 
	a = (unsigned char*)malloc(sizeof(unsigned char) * 100);

	while (!feof(fp)) {
		//파일의 끝에 도달하기 전까지 실행한다. 
		fscanf(fp, "%c", &a[i]); //평문.txt 속 문장의 단어를 읽어온다. 
		//암호화.txt에 key를 XOR연산하여 저장한다. 
		fprintf(fp_c, "%c", a[i] ^ key);
		i++; //i를 1 증가한다. 
	}
	fclose(fp);
	fclose(fp_c);
	free(a); //동적 메모리 반납

	fp_c = fopen("암호화.txt", "r"); //암호화.txt를 불러온다. 
	if (fp_c == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	fp_d = fopen("복호화.txt", "w"); //복호화.txt를 불러온다. 
	if (fp_d == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	a = (unsigned char*)malloc(sizeof(unsigned char) * 100); //동적메모리 할당
	while (j < i - 1) {
		fscanf(fp_c, "%c", &a[j]); //암호화.txt 속 문장의 단어를 읽어온다. 
		//복호화.txt에 key를 XOR연산하여 저장한다. 이 경우 복호화된다. 
		fprintf(fp_d, "%c", a[j] ^ key);
		j++; //j를 증가시킨다. 
	}
	fclose(fp_c);
	fclose(fp_d);
	free(a);
	return 0;
}