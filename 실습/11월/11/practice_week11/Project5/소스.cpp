#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct date {
	int year;
};

struct student {
	char num[10];
	char name[10];
	int score;
	struct date* d;
};

void compare(struct student s1) {

	if (s1.score > 4) {
		printf("4\n");
	}
	else if (s1.score > 3) {
		printf("3\n");
		}
	else if (s1.score > 2) {
		printf("2\n");
	}

}



int main() {

	struct date d = { 2000 };



	struct student list[3] = {
		{"df", "Df", 5},
		{"df", "Ddfdf", 4},
		{"df", "Df", 3},

	};

	list[0].d = &d;
	list[1].d = &d;
	list[2].d = &d;


	struct student* p;

	p = list;
	for (int i = 0; i < 3; i++) {
		printf("%s %s %d\n", (p + i)->name, (p + i)->num, (p + i)->d->year);

	}

	d = { 2001 };

	for (int i = 0; i < 3; i++) {
		printf("%s %s %d\n", (p + i)->name, (p + i)->num, (p + i)->d->year);

	}


	compare(list[0]);
	compare(list[1]);
	compare(list[2]);




}