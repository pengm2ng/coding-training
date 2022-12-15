#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct stud {
	int num;
	char name[10];
	int score;
}STUD; //�л����� ������ ���� ����ü STUD ����

int compare(const void* fst, const void* sec) {
	if (((*(STUD*)fst).score) < ((*(STUD*)sec).score))
		return 1;
	else if (((*(STUD*)fst).score) > ((*(STUD*)sec).score))
		return -1;
	else
		return 0;
}//�� ū ���� ���ϴ� �Լ�

int main() {
	STUD student[5] = {
		{55, "", 100},
		{52, "", 90},
		{66, "", 80},
		{48, "", 40},
		{49, "", 60}
	}; //�л����� ������ �����Ѵ�.
	char temp[100];
	FILE* fp1;

	fp1 = fopen("student.txt", "w"); //student.txt�� �ҷ��´�. 
	if (fp1 == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}
	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//i�� 0���� �迭�� ũ�⸸ŭ i�� ������Ű�� �ݺ��� ����
		//�л��� ������ �����Ѵ�. 
		fprintf(fp1, "%d %s %d\n",
			student[i].num, student[i].name, student[i].score);

	}
	fclose(fp1);

	fp1 = fopen("student.txt", "r"); //student.txt�� �ҷ��´�. 
	if (fp1 == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}
	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//txt���Ͽ��� �л��� ������ �ҷ��ͼ� �����Ѵ�. 
		fscanf(fp1, "%d %s %d",
			&student[i].num, student[i].name, &student[i].score);
	}
	fclose(fp1);

	fp1 = fopen("student.bin", "wb"); //student.bin�� �ҷ��´�. 
	if (fp1 == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}
	//bin���Ͽ� �л��� ������ �������·� �����Ѵ�. 
	fwrite(student, sizeof(STUD), sizeof(student) / sizeof(STUD), fp1);
	fclose(fp1);

	fp1 = fopen("student.bin", "rb"); //student.bin�� �ҷ��´�. 
	if (fp1 == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}
	//bin���Ͽ��� ���������� �л��� ������ �ҷ��´�. 
	fread(student, sizeof(STUD), sizeof(student) / sizeof(STUD), fp1);
	fclose(fp1);

	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//�л��� ������ ����Ѵ�. 
		printf("%d %s %d\n", student[i].num, student[i].name, student[i].score);
	}

	printf("\n\n");

	//�л��� ������ �������� ������������ �����Ѵ�. 
	qsort(student, sizeof(student) / sizeof(STUD), sizeof(STUD), compare);

	fp1 = fopen("student_sort.bin", "wb"); //student_sort.bin�� �ҷ��´�. 
	if (fp1 == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	//bin���Ͽ� �л��� ������ �������·� �����Ѵ�. 
	fwrite(student, sizeof(STUD), sizeof(student) / sizeof(STUD), fp1);

	for (int i = 0; i < sizeof(student) / sizeof(STUD); i++) {
		//�л��� ������ ����Ѵ�. 
		printf("%d %s %d\n", student[i].num, student[i].name, student[i].score);
	}
	return 0;
}