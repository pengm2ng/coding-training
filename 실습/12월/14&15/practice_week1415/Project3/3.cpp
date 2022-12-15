#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PER(X,Y)	(X*100/Y)
#define QUBE(X) X*X*X
#define PRINTLN(X) X"\n"

int main(void)
{

	printf("%d\n", (int)PER(5, 20));
	printf("%d\n", QUBE(5));
	printf(PRINTLN("HELLO"));

	

}