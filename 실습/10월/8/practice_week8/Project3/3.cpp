#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], int n) {
    int temp;


    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

int main() {
	int arr[MAX] = { 10, 2, 3, 4, 5, 1, 6, 9, 8, 7 };
    double mid = 0;
    double avg = 0; 
	bubble_sort(arr, MAX);

    for (int i = 0; i < MAX; i++) {

        printf("%d", arr[i]);
        avg = avg + arr[i];
    }

    //偃熱陛 礎熱橾 唳辦
    mid = (arr[MAX / 2] + arr[MAX / 2 + 1]) / 2;
    avg = avg / MAX;

    printf("\n醞懈高:%f\nゎ敕高: %f\n", mid, avg);


}