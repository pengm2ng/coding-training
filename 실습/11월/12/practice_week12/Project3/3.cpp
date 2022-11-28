#include <ctype.h>
#include <stdio.h>
#include <string.h>

void map(char arr[5][20], void (*map_fn)(char* arr), int size);
void to_lower_case(char* str);
void add_exc_mark(char* str);


int main(void)
{
    char arr[5][20] = {
        "Hello",
        "WhaT up",
        "Good BYe",
        "Good MORNing",
        "Nice tO mEEt yoU"
    };
    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    map(arr, &to_lower_case, sizeof(arr) / sizeof(char*));
    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    map(arr, &add_exc_mark, sizeof(arr) / sizeof(char*));
    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");

    return 0;
}

void map(char arr[5][20], void (*map_fn)(char* arr), int size)
{
    for (int i = 0; i < size; i++) {
        map_fn(arr[i]);
    }
}

void to_lower_case(char* str)
{
    int i = 0;
    while (str[i] != '\0') {
        str[i] = (char)tolower(str[i]);
        i++;
    }
}

void add_exc_mark(char* str)
{
    int len = (int)strlen(str);
    str[len] = '!';
    str[len + 1] = '\0';
}