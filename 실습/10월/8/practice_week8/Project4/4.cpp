#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a[4][4] = {
        { 1, 2, 5, 6 },
        { 3, 4, 7, 8 },
        { 9, 1, 4, 5 },
        { 2, 3, 6, 7 }
    };

    int b[4][4] = {
        { 5, 7, 5, 6 },
        { 3, 4, 6, 8 },
        { 9, 3, 2, 5 },
        { 2, 3, 6, 7 }
    };

    int q[4][4] = { 0 };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                q[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", q[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}