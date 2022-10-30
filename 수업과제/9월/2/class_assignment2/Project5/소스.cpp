#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number = 0;
	int quantity, price, sum;
	int sales = 0;
	while (number != 5)
	{
		sum = 0;
		do
		{
			printf("음식번호와 수량을 입력하고 Enter>");
			scanf("%d %d", &number, &quantity);
			switch (number)
			{
			case 1:
				price = quantity * 1500;
				break;
			case 2:
				price = quantity * 3500;
				break;
			case 3:
				price = quantity * 2500;
				break;
			case 4:
				price = quantity * 3000;
			default:
				price = 0;
			}
			sum = sum + price;
			printf("가격 : %d원\n", sum);
		} while ((number != 0) && (quantity != 0));
		sales = sales + sum;
		printf("현재 매출액 : %d\n", sales);
	}
}