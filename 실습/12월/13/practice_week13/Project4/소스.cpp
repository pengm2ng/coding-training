#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct wifi {

    char name[100];
    int signal;
};

int main(void) {
    FILE* fp1 = fopen("wifi_signal.txt", "r");
	struct wifi s;

    int w24 = 0;
    int k35 = 0;
    int v72 = 0;
	char* ptr;
	char apw24[] = "AP_W24";
	char apK35[] = "AP_K35";
	char apv72[] = "AP_V72";
	int w24_cnt = 0;
	int k35_cnt = 0;
	int v72_cnt = 0;
	while (!feof(fp1)) {

		int data;
		
		fscanf(fp1,"%s", &s.name);
		printf("%s\n", s.name);
		ptr = strtok(s.name, ",");
		printf("%s ", ptr);
		if (!strcmp(ptr, apw24)) {
			ptr = strtok(NULL, " ");
			printf("%s\n", ptr);
			w24 = w24 + atoi(ptr);
			printf("%d\n", w24);
		
			w24_cnt++;

		}else if (!strcmp(ptr, apK35)) {
			ptr = strtok(NULL, " ");
			printf("%s\n", ptr);
			k35 = k35 + atoi(ptr);
			printf("%d\n", k35);

			k35_cnt++;

		}
		else if (!strcmp(ptr, apv72)) {
			ptr = strtok(NULL, " ");
			printf("%s\n", ptr);
			v72 = v72 + atoi(ptr);
			printf("%d\n", v72);

			v72_cnt++;

		}

	
	}

	printf("%f %f %f", (float)w24 / w24_cnt, (float)k35 / k35_cnt, (float)v72 / v72_cnt);

	fclose(fp1);

}