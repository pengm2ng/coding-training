#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//한글을 입력받기 위해서 기존 char형보다 양의 방향으로 큰 배열이 필요하다. 
	//unsigned char을 사용했지만 int를 사용하여도 무방
	unsigned char a[100];
	int n = 0;
	printf("이름 입력: ");
	scanf("%s", a); //이름을 입력받는다. 

	while (1) {
		//이름 길이를 구하는 코드
		if (a[n] == '\0') {
			break; //null문자가 나올 때 까지 반복한다. 
		}
		n++; //문자열의 길이가 저장된다. 
	}

	if (a[0] <= 122) { //영어가 들어온 경우에 대하여 출력한다. 
		for (int i = n - 1; i >= 0; i--) {
			printf("%c", a[i]); //n개의 배열을 역순으로 출력한다. 
		}
	}
	else {
		for (int i = (n / 2) - 1; i >= 0; i--) { //한글이 들어온 경우에 대하여 출력한다. 
			printf("%c%c", a[i * 2], a[i * 2 + 1]); //2n개의 배열을 두개씩 묶어 역순으로 출력한다. 
		}
	}
	return 0;
}