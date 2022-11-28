#include <stdio.h>

void print(int** array, int x_size, int y_size);

int main(void)
{
    int arr1[5] = { 0, 1, 2, 3, 4 };
    int arr2[5] = { 5, 6, 7, 8, 9 };
    int arr3[5] = { 1, 2, 4, 8, 16 };
    int arr4[5] = { 3, 6, 9, 12, 15 };

    int* arr[4] = { arr1, arr2, arr3, arr4 };

    print(arr, 4, 5);

    int* temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;

    printf("\n");
    print(arr, 4, 5);

    return 0;
}

void print(int** array, int x_size, int y_size) {
    for (int i = 0; i < x_size; i++) {
        for (int j = 0; j < y_size; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}