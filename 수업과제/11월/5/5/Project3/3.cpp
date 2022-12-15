#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define PUZZLESIZE 17
#define WORDLEN 17
#define NBWORDS 38

char puzzle[PUZZLESIZE][PUZZLESIZE] = { //�ܾ� ������ ������
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

char mark[PUZZLESIZE][PUZZLESIZE] = { 0 }; //����� ���ڸ� ����ϴ� �迭

void CheckEastDirection(int row, int col, char wd[WORDLEN]) {
    //'��'�� �迭�� �ܾ ã��
    int m, n, len;
    int flag = 1;
    len = strlen(wd);

    //�ܾ��� ���� ��ġ���� �ܾ� ���ڱ��̸�ŭ ������ ���� ��ġ�� ������ �Ѿ�� �Լ��� ������
    if (len + col > PUZZLESIZE) {
        return;
    }

    //������ �Ʒ��� �������� �ܾ ���ϰ� �ܾ �ٸ��� flag�� 0���� ���� �� �ݺ��� ����
    for (m = 0, n = col; m < len; m++, n++) {
        if (puzzle[row][n] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //�Ʒ����� ���� �ö󰡸� �ܾ ���ϰ� �ܾ �ٸ��� �Լ��� ������.
    //���� �ܾ ���ٸ� flag�� 1�� �����. 
    if (flag == 0) {
        for (m = 0, n = col + len - 1; m < len; m++, n--) {
            if (puzzle[row][n] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag�� 0�̸� �Լ��� �����Ѵ�. 
    if (flag == 0) {
        return;
    }

    //�ܾ ���ٸ� �迭 mark�� �ش� ��ġ�� 1�� �ٲ�
    for (m = 0, n = col; m < len; m++, n++) {
        mark[row][n] = 1;
    }

    return;
}

void CheckNorthDirection(int row, int col, char wd[WORDLEN]) {
    //'��'�� �迭�� �ܾ ã��
    int m, n, len;
    int flag = 1;
    len = strlen(wd);

    //�ܾ��� ���� ��ġ���� �ܾ� ���ڱ��̸�ŭ ������ ���� ��ġ�� ������ �Ѿ�� �Լ��� ������
    if (len + row > PUZZLESIZE) {
        return;
    }

    //���ʿ��� ���������� �̵��ϸ� �ܾ ���ϰ� �ܾ �ٸ��� flag�� 0���� ���� �� �ݺ��� ����
    for (m = 0, n = row; m < len; m++, n++) {
        if (puzzle[n][col] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //�����ʿ��� �������� �̵��ϸ� �ܾ ���ϰ� �ܾ �ٸ��� �Լ��� ������.
    //���� �ܾ ���ٸ� flag�� 1�� �����. 
    if (flag == 0) {
        for (m = 0, n = row + len - 1; m < len; m++, n--) {
            if (puzzle[n][col] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag�� 0�̸� �Լ��� �����Ѵ�. 
    if (flag == 0) {
        return;
    }

    //�ܾ ���ٸ� �迭 mark�� �ش� ��ġ�� 1�� �ٲ�
    for (m = 0, n = row; m < len; m++, n++) {
        mark[n][col] = 1;
    }

    return;
}

void CheckNEDirection(int row, int col, char wd[WORDLEN]) {
    //'\'�� �迭�� �ܾ ã��
    int m, n, l, len;
    int flag = 1;
    len = strlen(wd);

    //�ܾ��� ���� ��ġ���� �ܾ� ���ڱ��̸�ŭ ������ ���� ��ġ�� ������ �Ѿ�� �Լ��� ������
    if (len + col > PUZZLESIZE || len + row > PUZZLESIZE) {
        return;
    }

    //���� ��ܿ��� ������ �ϴ����� �̵��ϸ� �ܾ ���ϰ� �ܾ �ٸ��� flag�� 0���� ���� �� �ݺ��� ����
    for (m = 0, n = row, l = col; m < len; m++, n++, l++) {
        if (puzzle[n][l] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //������ �ϴܿ��� ���� ������� �̵��ϸ� �ܾ ���ϰ� �ܾ �ٸ��� �Լ��� ������.
    //���� �ܾ ���ٸ� flag�� 1�� �����.
    if (flag == 0) {
        for (m = 0, n = row + len - 1, l = col + len - 1; m < len; m++, n--, l--) {
            if (puzzle[n][l] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag�� 0�̸� �Լ��� �����Ѵ�. 
    if (flag == 0) {
        return;
    }

    //�ܾ ���ٸ� �迭 mark�� �ش� ��ġ�� 1�� �ٲ�
    for (m = 0, n = row, l = col; m < len; m++, n++, l++) {
        mark[n][l] = 1;
    }

    return;

}

void CheckNWDirection(int row, int col, char wd[WORDLEN]) {
    //'/'�� �迭�� �ܾ ã��
    int m, n, l, len;
    int flag = 1;
    len = strlen(wd);

    //�ܾ��� ���� ��ġ���� �ܾ� ���ڱ��̸�ŭ ������ ���� ��ġ�� ������ �Ѿ�� �Լ��� ������
    if (col - len < 0 || len + row > PUZZLESIZE) {
        return;
    }

    //������ ��ܿ��� ���� �ϴ����� �̵��ϸ� �ܾ ���ϰ� �ܾ �ٸ��� flag�� 0���� ���� �� �ݺ��� ����
    for (m = 0, n = row, l = col; m < len; m++, n++, l--) {
        if (puzzle[n][l] != wd[m]) {
            flag = 0;
            break;
        }
    }

    //���� �ϴܿ��� ������ ������� �̵��ϸ� �ܾ ���ϰ� �ܾ �ٸ��� �Լ��� ������.
    //���� �ܾ ���ٸ� flag�� 1�� �����.
    if (flag == 0) {
        for (m = 0, n = row + len - 1, l = col - len + 1; m < len; m++, n--, l++) {
            if (puzzle[n][l] != wd[m]) {
                return;
            }
        }
        flag = 1;
    }

    //flag�� 0�̸� �Լ��� �����Ѵ�. 
    if (flag == 0) {
        return;
    }

    //�ܾ ���ٸ� �迭 mark�� �ش� ��ġ�� 1�� �ٲ�
    for (m = 0, n = row, l = col; m < len; m++, n++, l--) {
        mark[n][l] = 1;
    }

    return;
}

void CheckWord(char wd[WORDLEN]) {
    //�ش� �ܾ �ܾ� ���� �ִ��� Ȯ���ϴ� �Լ�
    int row, col;
    for (row = 0; row < PUZZLESIZE; row++) {
        for (col = 0; col < PUZZLESIZE; col++) {
            CheckEastDirection(row, col, wd); //'|'�� ��쿡 ���� �˻�
            CheckNorthDirection(row, col, wd); //'��'�� ��쿡 ���� �˻�
            CheckNEDirection(row, col, wd); //'\'�� ��쿡 ���� �˻�
            CheckNWDirection(row, col, wd); //'/'�� ��쿡 ���� �˻�
        }
    }
}

void PrintMark() {
    int m, n;
    for (m = 0; m < PUZZLESIZE; m++) {
        for (n = 0; n < PUZZLESIZE; n++) {
            if (mark[m][n] == 0) {
                //�迭 mark�� 0�� ��쿡 ���Ͽ� ���
                //�� �ش� ���ڰ� ������ ���� ���, �� ���ڸ� �����
                printf("%c", puzzle[m][n]);
            }
        }
    }
}

int main() {
    //�迭 wdList�� ã�� �ܾ� �迭�̴�. 
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

    //��� �ܾ ���Ͽ� �ܾ� �˻縦 �ǽ��Ѵ�. 
    for (m = 0; m < NBWORDS; m++) {
        if (wdList[m] != NULL) {
            CheckWord(wdList[m]);
        }
    }

    //������� ���� ���ڸ� ����Ѵ�. 
    PrintMark();

    return 0;
}