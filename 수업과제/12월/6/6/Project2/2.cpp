#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* nxtg(char map[10][10]) {
	char nmap[10][10]; //다음세대 보드를 생성한다. 
	int nearnum = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0) {
				if (j == 0) {
					//왼쪽 상단 꼭짓점일 경우에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i + 1][j] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j + 1] == 'X') nearnum++;
				}
				else if (j == 9) {
					//오른쪽 상단 꼭짓점일 경우에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i + 1][j - 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
				}
				else {
					//위쪽 모서리 값들에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j - 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
					if (map[i + 1][j + 1] == 'X') nearnum++;
				}
			}
			else if (i == 9) {
				if (j == 0) {
					//아래쪽 왼쪽 꼭짓점 값에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i - 1][j + 1] == 'X') nearnum++;
				}
				else if (j == 9) {
					//아래쪽 오른쪽 꼭짓점 값에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i - 1][j - 1] == 'X') nearnum++;
					if (map[i - 1][j] == 'X') nearnum++;
				}
				else {
					//아래쪽 모서리 값들에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i - 1][j - 1] == 'X') nearnum++;
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i - 1][j + 1] == 'X') nearnum++;
				}
			}
			else {
				if (j == 0) {
					//왼쪽 모서리 값들에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i - 1][j + 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j + 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
				}
				else if (j == 9) {
					//오른쪽 모서리 값들에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i - 1][j - 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j - 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
				}
				else {
					//그 외 내부 값들에 대하여 검사한다. 
					//근처에 X값이 있으면 nearnum을 1개 증가시킨다. 
					if (*(*(map + (i - 1)) + (j - 1)) == 'X') nearnum++;
					if (*(*(map + (i - 1)) + (j)) == 'X') nearnum++;
					if (*(*(map + (i - 1)) + (j + 1)) == 'X') nearnum++;
					if (*(*(map + (i)) + (j - 1)) == 'X') nearnum++;
					if (*(*(map + (i)) + (j + 1)) == 'X') nearnum++;
					if (*(*(map + (i + 1)) + (j - 1)) == 'X') nearnum++;
					if (*(*(map + (i + 1)) + (j)) == 'X') nearnum++;
					if (*(*(map + (i + 1)) + (j + 1)) == 'X') nearnum++;
				}
			}

			if (nearnum == 3 || nearnum == 2) {
				if (map[i][j] == 'X') {
					//조건에 따라 생존에 해당한다. 
					nmap[i][j] = 'X';
				}
				else if (nearnum == 3) {
					//조건에 따라 출생에 해당한다. 
					nmap[i][j] = 'X';
				}
				else {
					//조건에 따른 죽음에 해당한다. 
					nmap[i][j] = '-';
				}
			}
			else if (nearnum >= 4 || nearnum < 2) {
				//조건에 따라 죽음에 해당된다. 
				nmap[i][j] = '-';
			}
			nearnum = 0; //nearnum을 초기화한다. 
		}
	}
	return nmap; //nmap을 반환한다. 

}

int main() {
	char map[10][10] = {
		{"----------"},
		{"----------"},
		{"-----X----"},
		{"-----XX---"},
		{"----X-X---"},
		{"----------"},
		{"----------"},
		{"----------"},
		{"----------"},
		{"----------"}
	}; //미리 보드를 구성해둔다. 
	char s = ' ';
	int nn = 1;

	while (1) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				printf("%c", map[i][j]);
			}
			printf("\n");
		} //보드를 출력한다. 

		printf("generation %d\n", nn++); //세대 출력한다. 
		printf("종료하려면 q, 계속하려면 m: ");
		scanf(" %c", &s);
		if (s == 'q') {
			return 0;
		} //q가 들어오면 프로그램을 종료한다. 

		//nxtg함수를 실행시켜 다음세대의 보드를 얻는다. 
		//이 후 이 결과를 map에 저장한다. 
		strcpy(map, nxtg(map));
	}
	return 0;
}
