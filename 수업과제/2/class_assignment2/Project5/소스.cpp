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
			printf("���Ĺ�ȣ�� ������ �Է��ϰ� Enter>");
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
			printf("���� : %d��\n", sum);
		} while ((number != 0) && (quantity != 0));
		sales = sales + sum;
		printf("���� ����� : %d\n", sales);
	}
}