#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>




struct student {
	int id;
	char name[20];
	float score;
};

int compare(const void* m, const void* n) {
	student* ptm = (student*)m;
	student* ptn = (student*)n;
	
	if (ptm->score < ptn->score) return 1;
	else if (ptm->score > ptn->score) return -1;
	else return 0;

}

int main() {
	FILE* fp1 = fopen("./Data.txt", "r");
	FILE* fp2 = fopen("./result.txt", "w");
	struct student s[5];
	int cnt = 0;
	float average = 0;
	if (fp1 == NULL) {
		printf("파일열기 실패\n");
		return 0;
	}

	while (!feof(fp1)) {

		int data;
		
		fscanf(fp1, "%d %s %f",&s[cnt].id, &s[cnt].name, &s[cnt].score);
		printf("%d %s %f\n", s[cnt].id, s[cnt].name, s[cnt].score);
		cnt++;
	
	}
	fclose(fp1);

	qsort(s, 5, sizeof(student), compare);

	for (int i = 0; i < cnt; i++) {
		printf("%d %s %f\n", s[i].id, s[i].name, s[i].score);
	}

	for (int i = 0; i < cnt; i++) {
		average = average + s[i].score;

	}
	average = average / cnt;

	for (int i = 0; i < cnt; i++) {
		fprintf(fp2, "%d %s %f\n", s[i].id, s[i].name, s[i].score);
	}

	fprintf(fp2, "평균 %.1f\n",average);

}