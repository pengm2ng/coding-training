#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = { 0 };
    scanf("%s", str);

    char* token = strtok(str, "/");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "/");
        printf("%s\n", token);
    }
    return 0;
}