#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* nxtg(char map[10][10]) {
	char nmap[10][10]; //�������� ���带 �����Ѵ�. 
	int nearnum = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0) {
				if (j == 0) {
					//���� ��� �������� ��쿡 ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i + 1][j] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j + 1] == 'X') nearnum++;
				}
				else if (j == 9) {
					//������ ��� �������� ��쿡 ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i + 1][j - 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
				}
				else {
					//���� �𼭸� ���鿡 ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j - 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
					if (map[i + 1][j + 1] == 'X') nearnum++;
				}
			}
			else if (i == 9) {
				if (j == 0) {
					//�Ʒ��� ���� ������ ���� ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i - 1][j + 1] == 'X') nearnum++;
				}
				else if (j == 9) {
					//�Ʒ��� ������ ������ ���� ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i - 1][j - 1] == 'X') nearnum++;
					if (map[i - 1][j] == 'X') nearnum++;
				}
				else {
					//�Ʒ��� �𼭸� ���鿡 ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i][j - 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i - 1][j - 1] == 'X') nearnum++;
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i - 1][j + 1] == 'X') nearnum++;
				}
			}
			else {
				if (j == 0) {
					//���� �𼭸� ���鿡 ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i - 1][j + 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j + 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
				}
				else if (j == 9) {
					//������ �𼭸� ���鿡 ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
					if (map[i - 1][j] == 'X') nearnum++;
					if (map[i - 1][j - 1] == 'X') nearnum++;
					if (map[i][j + 1] == 'X') nearnum++;
					if (map[i + 1][j - 1] == 'X') nearnum++;
					if (map[i + 1][j] == 'X') nearnum++;
				}
				else {
					//�� �� ���� ���鿡 ���Ͽ� �˻��Ѵ�. 
					//��ó�� X���� ������ nearnum�� 1�� ������Ų��. 
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
					//���ǿ� ���� ������ �ش��Ѵ�. 
					nmap[i][j] = 'X';
				}
				else if (nearnum == 3) {
					//���ǿ� ���� ����� �ش��Ѵ�. 
					nmap[i][j] = 'X';
				}
				else {
					//���ǿ� ���� ������ �ش��Ѵ�. 
					nmap[i][j] = '-';
				}
			}
			else if (nearnum >= 4 || nearnum < 2) {
				//���ǿ� ���� ������ �ش�ȴ�. 
				nmap[i][j] = '-';
			}
			nearnum = 0; //nearnum�� �ʱ�ȭ�Ѵ�. 
		}
	}
	return nmap; //nmap�� ��ȯ�Ѵ�. 

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
	}; //�̸� ���带 �����صд�. 
	char s = ' ';
	int nn = 1;

	while (1) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				printf("%c", map[i][j]);
			}
			printf("\n");
		} //���带 ����Ѵ�. 

		printf("generation %d\n", nn++); //���� ����Ѵ�. 
		printf("�����Ϸ��� q, ����Ϸ��� m: ");
		scanf(" %c", &s);
		if (s == 'q') {
			return 0;
		} //q�� ������ ���α׷��� �����Ѵ�. 

		//nxtg�Լ��� ������� ���������� ���带 ��´�. 
		//�� �� �� ����� map�� �����Ѵ�. 
		strcpy(map, nxtg(map));
	}
	return 0;
}
