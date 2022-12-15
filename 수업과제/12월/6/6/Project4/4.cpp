#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct prod {
	unsigned char name[100];
	int price;
	int num;
	long long int sum;
}PROD; //가전제품을 담을 구조체 PROD를 선언한다. 

int main() {
	PROD product[10];
	int i = 0;
	long long int sum = 0;
	FILE* fp; //파일 포인터를 선언

	fp = fopen("price.txt", "r"); //price.txt를 읽기 모드로 불러옴
	if (fp == NULL) {
		//파일이 열리지 않을 경우에 대한 오류 처리
		printf("파일 열기 실패\n");
		return 0;
	}
	while (!feof(fp)) { // 파일의 줄 끝에 도달할 때 까지 반복
		//파일에서 한 줄씩 불러오고 형식에 맞춰 값을 저장한다. 
		fscanf(fp, "%s %d", product[i].name, &product[i].price);
		i++;
	}
	fclose(fp);

	printf("%s    %s\n", "품명", "단가");

	for (int j = 0; j < i; j++) {
		//형식에 맞춰 콘솔에 출력함
		printf("%s   %d\n", product[j].name, product[j].price);
	}

	fp = fopen("sales.txt", "w"); //sales.txt를 쓰기 모드로 불러옴
	if (fp == NULL) {
		//파일이 열리지 않을 경우에 대한 오류 처리
		printf("파일 열기 실패\n");
		return 0;
	}

	for (int j = 0; j < i; j++) {
		//각 품명의 수량을 입력받음
		printf("%s의 수량입력 후 Enter>", product[j].name);
		scanf("%d", &product[j].num);

		//각 품명에 대하여 금액을 계산하고 이를 매출전표에 입력한다. 
		product[j].sum = product[j].num * product[j].price;
		fprintf(fp, "%s %d %d %lld\n", product[j].name,
			product[j].price, product[j].num, product[j].sum);
		sum += product[j].sum; //합계를 계산한다. 
	}
	fprintf(fp, "합계 : %lld", sum); //합계를 매출전표에 입력한다. 

	fclose(fp);

	printf("매출전표(sales.txt) 내용을 확인하시오.\n");

	return 0;
}