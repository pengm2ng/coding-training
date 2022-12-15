#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	//유클리드 호제법괴 재귀함수를 이용하여 MOD연산을 반복하여 나머지가 0이 될 때까지 진행
	//나머지가 0이 되었을 때의 나누는 수는 최대공약수이다. 
	if (y == 0) *p_gcd = x;
	else get_lcm_gcd(y, x % y, p_lcm, p_gcd);

	//위에서 구한 최대공약수를 이용하여 최소공배수를 구한다. 
	*p_lcm = (double)x * y / (*p_gcd);
	return;
}

int main() {
	int n1, n2;
	int lcm, gcd;
	printf("두 배수의 정수를 입력하시오: ");
	scanf("%d %d", &n1, &n2); //두 정수를 입력받는다. 

	get_lcm_gcd(n1, n2, &lcm, &gcd); //최소공배수와 최대공약수를 구한다. 
	printf("최소공배수는 %d입니다.\n", lcm); //최소공배수를 출력한다. 
	printf("최대공약수는 %d입니다.\n", gcd); //최대공약수를 출력한다. 
	return 0;
}