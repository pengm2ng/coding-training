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

	printf("uav 이동전\nuav1 : (%f,%f)\nuav2 : (%f,%f)\nuav3 : (%f,%f)\n\n", uavx1, uavy2, uavx2, uavy2, uavx3, uavy3);
	srand(time(NULL));

	float d2 = cal_distance(uavx1, uavy1, uavx2, uavy2);
	float d3 = cal_distance(uavx1, uavy1, uavx3, uavy3);


	printf("uav1-uav2 거리: %f\n", d2);
	printf("uav1-uav3 거리: %f\n\n", d3);


	uavx1 =uavx1+ (rand()%10+1);
	uavx2 = uavx2 + (rand() % 10 + 1);
	uavx3 = uavx3 + (rand() % 10 + 1);


	uavy1 = uavy1 + (rand() % 10 + 1);
	uavy2 = uavy2 + (rand() % 10 + 1);
	uavy3 = uavy3 + (rand() % 10 + 1);


	printf("uav 이동후\nuav1 : (%f,%f)\nuav2 : (%f,%f)\nuav3 : (%f,%f)\n\n", uavx1, uavy2, uavx2, uavy2, uavx3, uavy3);
	float md2 = cal_distance(uavx1, uavy1, uavx2, uavy2);
	float md3 = cal_distance(uavx1, uavy1, uavx3, uavy3);


	printf("uav1-uav2 거리: %f\n", md2);
	printf("uav1-uav3 거리: %f\n\n", md3);



	if (d2 < d3 ){
		printf("이동 전 2번과 가깝다.\n");
	}
	else if (d3 < d2) {
		printf("이동 전 3번과 가깝다.\n");
	}
	

	if (md2 == 0 || md3 == 0 ) {
		printf("이동후 충돌");
	}
	else {


		if (md2 < md3 ) {
			printf("이동 후 2번과 가깝다.\n");
		}
		else if (md3 < md2) {
			printf("이동 후 3번과 가깝다.\n");
		}
		else if (md2 == md3 ) {
			printf("이동후 거리가 같은 uav가 여러대 이다.\n");
		}
	}







}