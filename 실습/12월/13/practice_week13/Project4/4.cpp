#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    char ap[3][10] = {
        "AP_W24",
        "AP_K35",
        "AP_V72"
    };

    srand(time(NULL));

    FILE* fp = fopen("wifi_signal.txt", "w");
    for (int i = 0; i < 500; i++) {
        fprintf(fp, "%s,%d\n", ap[rand() % 3], rand() % 100 - 100);
    }

    fclose(fp);
    return 0;
}