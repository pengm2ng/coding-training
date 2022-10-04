#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdbool.h>
	int main() {
		int age, adm_year, curfew, toeic, teps, ts, toefl;
		char f_name;
		double height;
		bool is_approved, has_EIP;
		bool a, b, c, d;

		scanf("%d %c", &age, &f_name);
		a = (age >= 15) && (age < 23) && (f_name == 'K');
		printf("%d\n", a);

		scanf("%lf %d", &height, &adm_year);
		b = ((height >= 170) && (height <= 180)) || (adm_year <= 18);
		printf("%d\n", b);

		scanf("%d %d %d", &age, &curfew, &is_approved);
		c = (age >= 20) && ((curfew >= 22) || (is_approved == 1));
		printf("%d\n", c);

		scanf("%d %d %d %d %d", &toeic, &has_EIP, &teps, &ts, &toefl);
		d = ((toeic >= 750) || (teps >= 615) || (ts >= 6) || (toefl >= 557)) && (has_EIP == 1);
		printf("%d\n", d);

		return 0;
	}




