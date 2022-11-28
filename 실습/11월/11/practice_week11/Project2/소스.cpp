#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct option {
	char leather[10];
	char light[10];
	int wheel;
};

struct car {
	char type[10];
	int year;
	char number[10];
	char company[10];
	struct option op;
};



int main() {

	struct car c;

	scanf("%s", c.type);
	scanf("%d", &c.year);
	scanf("%s", c.number);
	scanf("%s", c.company);
	scanf("%s", c.op.leather);
	scanf("%s", c.op.light);

	c.op.wheel = 4;

	printf("%s %d %s %s %d", c.type, c.year, c.number, c.company, c.op.wheel);






}