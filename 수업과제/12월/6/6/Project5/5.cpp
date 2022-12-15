#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct prod {
	unsigned char name[100];
	int price;
	int num;
	long long int sum;
}PROD; //제품을 입력받을 구조체 PROD를 선언

int main() {

	PROD product[10];
	FILE* fp;

	int i = 0;
	long long int sum = 0;
	/*
	fp = fopen("price.txt", "r");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}
	while (!feof(fp)) {
		fscanf(fp, "%s %d", product[i].name, &product[i].price);
		i++;
	}
	fclose(fp);

	fp = fopen("price.bin", "wb");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}
	fwrite(product, sizeof(PROD), i, fp);
	fclose(fp);
	*/
	//위 주석은 6-4 코드의 일부로 bin파일을 생성하기 위한 코드이다. 
	i = 4; //위의 코드 실행결과 int는 4라는 결과를 얻기에 이렇게 적었다. 
	fp = fopen("price.bin", "rb"); //price.bin파일을 불러온다. 
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}
	fread(product, sizeof(PROD), i, fp); //bin파일을 읽어온다. 
	fclose(fp);


	printf("%s    %s\n", "품명", "단가");
	for (int j = 0; j < i; j++) {
		//제품의 이름과 가격을 출력한다. 
		printf("%s   %-10d\n", product[j].name, product[j].price);
	}

	fp = fopen("sales.txt", "w"); //sales.txt를 불러온다. 
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 0;
	}

	for (int j = 0; j < i; j++) {
		printf("%s의 수량입력 후 Enter>", product[j].name);
		scanf("%d", &product[j].num); //제품의 수량을 입력받는다. 
		//제품의 금액을 계산하여 저장한다. 
		product[j].sum = product[j].num * product[j].price;
		//품명, 단가, 수량, 금액을 파일에 출력한다. 
		fprintf(fp, "%s %d %d %lld\n", product[j].name,
			product[j].price, product[j].num, product[j].sum);
		sum += product[j].sum; //sum에 제품의 금액을 더한다. 
	}
	fprintf(fp, "합계 : %lld", sum); //전체 합계를 파일에 출력한다. 

	fclose(fp);

	printf("매출전표(sales.txt) 내용을 확인하시오.\n");

	return 0;
}