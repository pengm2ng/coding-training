#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct stud {
	int num;
	char name[10];
	int score;
}STUD; //학생들의 정보를 담을 구조체 STUD 선언

int compare(const void* fst, const void* sec) {
	if (((*(STUD*)fst).score) < ((*(STUD*)sec).score))
		return 1;
	else if (((*(STUD*)fst).score) > ((*(STUD*)sec).score))
		return -1;
	else
		return 0;
}//더 큰 값을 비교하는 함수

int main() {
	STUD student[5] = {
		{55, "", 100},
		{52, "", 90},
		{66, "", 80},
		{48, "", 40},
		{49, "", 60}
	}; //학생들의 성적을 저장한다.
	char temp[100];
	FILE* fp1;

	fp1 = fopen("student.txt", "w"); //student.txt를 불러온다. 
	if (fp1 == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}
	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//i를 0부터 배열의 크기만큼 i를 증가시키며 반복문 실행
		//학생의 정보를 저장한다. 
		fprintf(fp1, "%d %s %d\n",
			student[i].num, student[i].name, student[i].score);

	}
	fclose(fp1);

	fp1 = fopen("student.txt", "r"); //student.txt를 불러온다. 
	if (fp1 == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}
	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//txt파일에서 학생의 정보를 불러와서 저장한다. 
		fscanf(fp1, "%d %s %d",
			&student[i].num, student[i].name, &student[i].score);
	}
	fclose(fp1);

	fp1 = fopen("student.bin", "wb"); //student.bin을 불러온다. 
	if (fp1 == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}
	//bin파일에 학생의 정보를 이진형태로 저장한다. 
	fwrite(student, sizeof(STUD), sizeof(student) / sizeof(STUD), fp1);
	fclose(fp1);

	fp1 = fopen("student.bin", "rb"); //student.bin을 불러온다. 
	if (fp1 == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}
	//bin파일에서 이진형태의 학생의 정보를 불러온다. 
	fread(student, sizeof(STUD), sizeof(student) / sizeof(STUD), fp1);
	fclose(fp1);

	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//학생의 정보를 출력한다. 
		printf("%d %s %d\n", student[i].num, student[i].name, student[i].score);
	}

	printf("\n\n");

	//학생의 점수를 바탕으로 오름차순으로 정렬한다. 
	qsort(student, sizeof(student) / sizeof(STUD), sizeof(STUD), compare);

	fp1 = fopen("student_sort.bin", "wb"); //student_sort.bin을 불러온다. 
	if (fp1 == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	//bin파일에 학생의 정보를 이진형태로 저장한다. 
	fwrite(student, sizeof(STUD), sizeof(student) / sizeof(STUD), fp1);

	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//학생의 정보를 출력한다. 
		printf("%d %s %d\n", student[i].num, student[i].name, student[i].score);
	}
	return 0;
}