#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



void find_min_max(int arr[], int** min_address, int** max_address) {
	int min = **min_address;
	int max = **max_address;

	for (int i = 0; i < 9; i++) {
		if (arr[i] < min) {
			
			*min_address = arr+i;
		}
		if (arr[i]>max) {
			
			*max_address = arr+i;
		}

	}



}


int main() {

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	int* max =arr ;
	int* min= arr ;

	
	find_min_max(arr, &min, &max);
	
	printf("%d %d", *min, *max);



}
