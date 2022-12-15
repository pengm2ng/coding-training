#include "array_list.h"

int* array = NULL;
int max_size = 10;
int length = 0;

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