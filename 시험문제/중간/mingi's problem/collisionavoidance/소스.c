#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float cal_distance(float x1, float y1, float x2, float y2) {
		float d = 0;

		d = pow(x2 - x1, 2) + pow(y2 - y1, 2);
		d = sqrt(d);


		return d;
}

int main() {

	float uavx1, uavx2, uavx3, uavy1, uavy2, uavy3;

	scanf("%f,%f\n%f,%f\n%f,%f", &uavx1,&uavy1, &uavx2, &uavy2, &uavx3, &uavy3 );

	printf("uav �̵���\nuav1 : (%f,%f)\nuav2 : (%f,%f)\nuav3 : (%f,%f)\n\n", uavx1, uavy2, uavx2, uavy2, uavx3, uavy3);
	srand(time(NULL));

	float d2 = cal_distance(uavx1, uavy1, uavx2, uavy2);
	float d3 = cal_distance(uavx1, uavy1, uavx3, uavy3);


	printf("uav1-uav2 �Ÿ�: %f\n", d2);
	printf("uav1-uav3 �Ÿ�: %f\n\n", d3);


	uavx1 =uavx1+ (rand()%10+1);
	uavx2 = uavx2 + (rand() % 10 + 1);
	uavx3 = uavx3 + (rand() % 10 + 1);


	uavy1 = uavy1 + (rand() % 10 + 1);
	uavy2 = uavy2 + (rand() % 10 + 1);
	uavy3 = uavy3 + (rand() % 10 + 1);


	printf("uav �̵���\nuav1 : (%f,%f)\nuav2 : (%f,%f)\nuav3 : (%f,%f)\n\n", uavx1, uavy2, uavx2, uavy2, uavx3, uavy3);
	float md2 = cal_distance(uavx1, uavy1, uavx2, uavy2);
	float md3 = cal_distance(uavx1, uavy1, uavx3, uavy3);


	printf("uav1-uav2 �Ÿ�: %f\n", md2);
	printf("uav1-uav3 �Ÿ�: %f\n\n", md3);



	if (d2 < d3 ){
		printf("�̵� �� 2���� ������.\n");
	}
	else if (d3 < d2) {
		printf("�̵� �� 3���� ������.\n");
	}
	

	if (md2 == 0 || md3 == 0 ) {
		printf("�̵��� �浹");
	}
	else {


		if (md2 < md3 ) {
			printf("�̵� �� 2���� ������.\n");
		}
		else if (md3 < md2) {
			printf("�̵� �� 3���� ������.\n");
		}
		else if (md2 == md3 ) {
			printf("�̵��� �Ÿ��� ���� uav�� ������ �̴�.\n");
		}
	}







}