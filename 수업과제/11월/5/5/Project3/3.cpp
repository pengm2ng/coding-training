#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define PUZZLESIZE 17
#define WORDLEN 17
#define NBWORDS 38

char puzzle[PUZZLESIZE][PUZZLESIZE] = { //단어 퍼즐을 저장함
   { 'S','A','S','S','E','N','N','I','U','G','E','V','E','N','T','S','P' },
   { 'I','Y','A','D','I','L','O','H','N','T','Y','Y','P','A','E','P','O' },
   { 'C','T','H','I','S','T','O','R','Y','R','A','R','P','K','G','O','T' },
   { 'I','L','S','O','D','A','B','R','E','A','D','A','A','I','R','H','A' },
   { 'S','C','O','K','L','H','T','N','E','E','T','N','E','V','E','S','T' },
   { 'U','C','I','V','N','V','H','D','E','R','S','O','I','D','E','I','O' },
   { 'M','E','I','C','E','U','A','C','O','N','A','I','T','L','N','B','E' },
   { 'E','L','C','H','E','R','A','N','R','I','E','S','E','K','B','F','S' },
   { 'G','T','H','T','A','L','S','H','R','A','F','S','C','F','E','U','F' },
   { 'A','I','R','P','R','A','E','E','C','T','M','I','I','E','F','E','D' },
   { 'T','C','I','G','I','A','L','B','S','E','R','M','B','T','S','G','H' },
   { 'I','C','S','N','N','A','D','A','R','E','R','D','H','T','Y','A','O' },
   { 'R','R','T','R','N','I','F','I','M','A','E','P','I','C','E','B','L' },
   { 'E','O','I','D','E','L','C','I','T','N','T','V','E','K','A','B','Y' },
   { 'H','S','A','S','E','E','L','N','R','I','A','I','R','L','R','A','D' },
   { 'E','S','N','B','H','N','B','O','A','L','O','O','O','T','L','C','A' },
   { 'S','H','A','M','R','O','C','K','U','D','C','N','R','N','Y','Y','Y' } };

char mark[PUZZLESIZE][PUZZLESIZE] = { 0 }; //사용한 문자를 기록하는 배열

void CheckEastDirection(int row, int col, char wd[WORDLEN]) {
    //'ㅣ'로 배열된 단어를 찾음
    int m, n, len;
    int flag = 1;
    len = strlen(wd);

    //단어의 시작 위치에서 단어 글자길이만큼 더했을 때의 위치가 퍼즐을 넘어가면 함수를 종료함
    if (len + col > PUZZLESIZE) {
        return;
    }

    //위에서 아래로 내려가며 단어를 비교하고 단어가 다르면 flag를 0으로 만든 뒤 반복문 종료
    for (m = 0, n = col; m < len; m++, n++) {
        if (puzzle[row][n] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //아래에서 위로 올라가며 단어를 비교하고 단어가 다르면 함수를 종료함.
    //만약 단어가 같다면 flag를 1로 만든다. 
    if (flag == 0) {
        for (m = 0, n = col + len - 1; m < len; m++, n--) {
            if (puzzle[row][n] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag가 0이면 함수를 종료한다. 
    if (flag == 0) {
        return;
    }

    //단어가 같다면 배열 mark에 해당 위치를 1로 바꿈
    for (m = 0, n = col; m < len; m++, n++) {
        mark[row][n] = 1;
    }

    return;
}

void CheckNorthDirection(int row, int col, char wd[WORDLEN]) {
    //'ㅡ'로 배열된 단어를 찾음
    int m, n, len;
    int flag = 1;
    len = strlen(wd);

    //단어의 시작 위치에서 단어 글자길이만큼 더했을 때의 위치가 퍼즐을 넘어가면 함수를 종료함
    if (len + row > PUZZLESIZE) {
        return;
    }

    //왼쪽에서 오른쪽으로 이동하며 단어를 비교하고 단어가 다르면 flag를 0으로 만든 뒤 반복문 종료
    for (m = 0, n = row; m < len; m++, n++) {
        if (puzzle[n][col] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //오른쪽에서 왼쪽으로 이동하며 단어를 비교하고 단어가 다르면 함수를 종료함.
    //만약 단어가 같다면 flag를 1로 만든다. 
    if (flag == 0) {
        for (m = 0, n = row + len - 1; m < len; m++, n--) {
            if (puzzle[n][col] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag가 0이면 함수를 종료한다. 
    if (flag == 0) {
        return;
    }

    //단어가 같다면 배열 mark에 해당 위치를 1로 바꿈
    for (m = 0, n = row; m < len; m++, n++) {
        mark[n][col] = 1;
    }

    return;
}

void CheckNEDirection(int row, int col, char wd[WORDLEN]) {
    //'\'로 배열된 단어를 찾음
    int m, n, l, len;
    int flag = 1;
    len = strlen(wd);

    //단어의 시작 위치에서 단어 글자길이만큼 더했을 때의 위치가 퍼즐을 넘어가면 함수를 종료함
    if (len + col > PUZZLESIZE || len + row > PUZZLESIZE) {
        return;
    }

    //왼쪽 상단에서 오른쪽 하단으로 이동하며 단어를 비교하고 단어가 다르면 flag를 0으로 만든 뒤 반복문 종료
    for (m = 0, n = row, l = col; m < len; m++, n++, l++) {
        if (puzzle[n][l] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //오른쪽 하단에서 왼쪽 상단으로 이동하며 단어를 비교하고 단어가 다르면 함수를 종료함.
    //만약 단어가 같다면 flag를 1로 만든다.
    if (flag == 0) {
        for (m = 0, n = row + len - 1, l = col + len - 1; m < len; m++, n--, l--) {
            if (puzzle[n][l] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag가 0이면 함수를 종료한다. 
    if (flag == 0) {
        return;
    }

    //단어가 같다면 배열 mark에 해당 위치를 1로 바꿈
    for (m = 0, n = row, l = col; m < len; m++, n++, l++) {
        mark[n][l] = 1;
    }

    return;

}

void CheckNWDirection(int row, int col, char wd[WORDLEN]) {
    //'/'로 배열된 단어를 찾음
    int m, n, l, len;
    int flag = 1;
    len = strlen(wd);

    //단어의 시작 위치에서 단어 글자길이만큼 더했을 때의 위치가 퍼즐을 넘어가면 함수를 종료함
    if (col - len < 0 || len + row > PUZZLESIZE) {
        return;
    }

    //오른쪽 상단에서 왼쪽 하단으로 이동하며 단어를 비교하고 단어가 다르면 flag를 0으로 만든 뒤 반복문 종료
    for (m = 0, n = row, l = col; m < len; m++, n++, l--) {
        if (puzzle[n][l] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //왼쪽 하단에서 오른쪽 상단으로 이동하며 단어를 비교하고 단어가 다르면 함수를 종료함.
    //만약 단어가 같다면 flag를 1로 만든다.
    if (flag == 0) {
        for (m = 0, n = row + len - 1, l = col - len + 1; m < len; m++, n--, l++) {
            if (puzzle[n][l] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag가 0이면 함수를 종료한다. 
    if (flag == 0) {
        return;
    }

    //단어가 같다면 배열 mark에 해당 위치를 1로 바꿈
    for (m = 0, n = row, l = col; m < len; m++, n++, l--) {
        mark[n][l] = 1;
    }

    return;
}

void CheckWord(char wd[WORDLEN]) {
    //해당 단어가 단어 퍼즐에 있는지 확인하는 함수
    int row, col;
    for (row = 0; row < PUZZLESIZE; row++) {
        for (col = 0; col < PUZZLESIZE; col++) {
            CheckEastDirection(row, col, wd); //'|'인 경우에 대해 검사
            CheckNorthDirection(row, col, wd); //'ㅡ'인 경우에 대해 검사
            CheckNEDirection(row, col, wd); //'\'인 경우에 대해 검사
            CheckNWDirection(row, col, wd); //'/'인 경우에 대해 검사
        }
    }
}

void PrintMark() {
    int m, n;
    for (m = 0; m < PUZZLESIZE; m++) {
        for (n = 0; n < PUZZLESIZE; n++) {
            if (mark[m][n] == 0) {
                //배열 mark가 0인 경우에 대하여 출력
                //즉 해당 문자가 사용되지 않은 경우, 그 문자를 출력함
                printf("%c", puzzle[m][n]);
            }
        }
    }
}

int main() {
    //배열 wdList는 찾을 단어 배열이다. 
    char wdList[NBWORDS][WORDLEN + 1] = {
       "BEER", "DANCING", "HOLYDAY", "POTATOES", "BELFAST",
       "DUBLIN", "IRELAND", "SEVENTEENTH", "BISHOP", "EVENTS",
       "IRISH", "SHAMROCK", "CABBAGE", "FEASTDAY", "LEPRECHAUN",
       "SNAKES", "CELEBRATION", "FESTIVAL", "LIMERICK", "SODABREAD",
       "CELTICCROSS", "GREEN", "MARCH", "TRADITION", "CHRISTIAN",
       "GUINNESS", "MISSIONARY", "YEARLY", "CLOVER", "HERITAGE",
       "MUSIC", "CORK", "HISTORY", "PARADE", "CORNEDBEEF",
       "HOLIDAY", "PATRONSAINT",
       NULL
    };

    int m;
    printf("\n");

    //모든 단어에 대하여 단어 검사를 실시한다. 
    for (m = 0; m < NBWORDS; m++) {
        if (wdList[m] != NULL) {
            CheckWord(wdList[m]);
        }
    }

    //사용하지 않은 문자를 출력한다. 
    PrintMark();

    return 0;
}