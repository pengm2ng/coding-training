#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void add(int num);
int get(int index);
int len();

int* array = NULL;
int max_size = 10;
int length = 0;

int main(void)
{
    int num;
    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);

        add(num);
    }
    printf("\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", get(i));
    }
    printf("\n");

    return 0;
}

void add(int num)
{
    if (array == NULL) {
        array = (int*)malloc(10 * sizeof(int));
    }
    if (length >= max_size) {
        max_size *= 2;
        realloc(array, max_size * sizeof(int));
    }

    array[length++] = num;
}

int get(int index)
{
    return array[index];
}

int len()
{
    return length;
}