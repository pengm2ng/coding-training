#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int radius;
	float f;
	float pi = 3.14;
	float c;
	
	scanf("%lf", &f);
	scanf("%d", &radius);


	c = (f - 32) * 5 / 9;

	
	printf("%lf È­¾¾\n", c);
	printf("¿øÀÇ ³ÐÀÌ´Â %lf", radius * radius * pi);



}