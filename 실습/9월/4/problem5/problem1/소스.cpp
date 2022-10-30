/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int kor, eng, math;
	double av;

	printf("국어, 영어, 수학 점수를 입력하시오");
	scanf("%d %d %d", kor, eng, math);

	av = (kor + eng + math) / 3.0;

	if (av >= 60) printf("합격입니다.");
	else printf("불합격입니다.");

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int kor, eng, math;
	double av;

	printf("국어, 영어, 수학 점수를 입력하시오");
	scanf("%d %d %d", &kor, &eng, &math);

	av = (kor + eng + math) / 3.0;

	if (kor < 60 || eng < 60 || math < 60) printf("과락입니다.");
	else if (av >= 60) printf("합격입니다.");
	else printf("불합격입니다.");

	return 0;
}