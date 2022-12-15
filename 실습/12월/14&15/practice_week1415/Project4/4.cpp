#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "array_list.h"

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