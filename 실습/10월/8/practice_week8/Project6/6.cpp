#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void push_array(int arr[], int len);

int main(void) {
    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int n = 2;

    for (int i = 0; i < n; i++) {
        push_array(arr, 10);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void push_array(int arr[], int len) {
    int temp = arr[9];
    for (int i = len - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}