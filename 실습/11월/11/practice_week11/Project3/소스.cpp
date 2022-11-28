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





int main() {

	struct date d = { 2000 };



	struct student list[3] = {
		{"df", "Df", 2},
		{"df", "Ddfdf", 2},
		{"df", "Df", 2},

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




}