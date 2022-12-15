#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _MyStruct {
    int id;
    char name[10];
} MyStruct;

int main(void) {
    FILE* fp1 = fopen("test.txt", "wb");

    MyStruct test[5] = { 4901, "Hello", 135, "fgd", 1389, "gfry", 1387, "jutreu", 135, "fdlkci" };

    fwrite(&test, sizeof(MyStruct), 5, fp1);
    fclose(fp1);

    FILE* fp2 = fopen("test.txt", "rb");

    MyStruct buffer[5];
    fread(buffer, sizeof(MyStruct), 5, fp2);

    for (int i = 0; i < 5; i++) {
        printf("%d %s\n", buffer[i].id, buffer[i].name);
    }
    return 0;
}