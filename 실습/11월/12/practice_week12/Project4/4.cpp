#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int static compare(const void* first, const void* second)
{
	if (*(char*)first > *(char*)second)
		return 1;
	else if (*(char*)first < *(char*)second)
		return -1;
	else
		return 0;
}

int main() {

	char arr[] = "aadfbdfefd";
	
	qsort(arr,10, sizeof(char), compare);

	for (int i = 0; i < 10; ++i)
		printf("%c", arr[i]);
	printf("\n");
}

